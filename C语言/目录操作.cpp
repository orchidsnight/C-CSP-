#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_DIR_LEN 200
#define MAX_COMPONENTS 100

// 分割路径为组件列表
int split_path(char *path, char components[][MAX_DIR_LEN]) {
	int count = 0;
	char *token = strtok(path, "/");
	while (token != NULL) {
		strcpy(components[count], token);
		count++;
		token = strtok(NULL, "/");
	}
	return count;
}

// 拼接组件为路径
void join_path(char components[][MAX_DIR_LEN], int count, char *result) {
	if (count == 0) {
		strcpy(result, "/");
		return;
	}
	result[0] = '\0';
	strcat(result, "/");
	for (int i = 0; i < count; i++) {
		strcat(result, components[i]);
		if (i != count - 1) {
			strcat(result, "/");
		}
	}
}

int main() {
	char current_path[MAX_DIR_LEN];
	fgets(current_path, MAX_DIR_LEN, stdin);
	current_path[strcspn(current_path, "\n")] = '\0'; // 去除换行符

	char components[MAX_COMPONENTS][MAX_DIR_LEN];
	int comp_count = split_path(current_path, components);

	char cmd[MAX_DIR_LEN];
	while (1) {
		fgets(cmd, MAX_DIR_LEN, stdin);
		cmd[strcspn(cmd, "\n")] = '\0'; // 去除换行符

		if (strcmp(cmd, "pwd") == 0) {
			break;
		}

		if (strncmp(cmd, "cd ", 3) == 0) {
			char *arg = cmd + 3;
			if (strcmp(arg, "/") == 0) {
				// 切换到根目录
				comp_count = 1;
				strcpy(components[0], "");
			} else if (strcmp(arg, "..") == 0) {
				// 切换到上级目录
				if (comp_count > 1) { // 不是根目录
					comp_count--;
				}
			} else {
				// 处理相对或绝对路径
				char arg_components[MAX_COMPONENTS][MAX_DIR_LEN];
				int arg_count = split_path(arg, arg_components);
				int new_count = comp_count;
				for (int i = 0; i < arg_count; i++) {
					if (strcmp(arg_components[i], "..") == 0) {
						if (new_count > 1) {
							new_count--;
						}
					} else {
						if (new_count < MAX_COMPONENTS) {
							strcpy(components[new_count], arg_components[i]);
							new_count++;
						}
					}
				}
				comp_count = new_count;
			}
		}
	}

	char result[MAX_DIR_LEN];
	join_path(components, comp_count, result);
	printf("%s\n", result);

	return 0;
}
