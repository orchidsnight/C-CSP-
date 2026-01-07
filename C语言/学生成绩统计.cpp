#include<stdio.h>

typedef struct {
	int xue;
	char name[20];
	char sex[2];
	int s1;
	int s2;
	int s3;
	int s4;
} student;

student c[20];
student g[20];

int main() {
	int n;
	double a = 0, b = 0, d = 0, e = 0;
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d ", &c[i].xue);
		scanf("%19[^ ]",c[i].name);
		getchar();
		fgets(c[i].sex, 2, stdin);
		scanf("%d%d%d%d", &c[i].s1, &c[i].s2, &c[i].s3, &c[i].s4);
		a += c[i].s1;
		b += c[i].s2;
		d += c[i].s3;
		e += c[i].s4;
	}


	a = a * 1.0 / n;
	b = b * 1.0 / n;
	d = d * 1.0 / n;
	e = e * 1.0 / n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int w = 0;
		if (c[i].s1 < 60&&c[i].s1 < a) {
			w++;
		}
		if (c[i].s2 < 60&&c[i].s2 < b) {
			w++;
		}
		if (c[i].s3 < 60&&c[i].s3 < d) {
			w++;
		}
		if (c[i].s4 < 60&&c[i].s4 < e) {
			w++;
			}
		if (w == 1) {
			g[count] = c[i];
			count++;
		}
	}
	for (int i = 0; i < count - 1; i++) {
		for (int j = i; j < count; j++) {
			if ((g[i].s1 + g[i].s2 + g[i].s3 + g[i].s4) < (g[j].s1 + g[j].s2 + g[j].s3 + g[j].s4)) {
				student temp = g[i];
				g[i] = g[j];
				g[j] = temp;
			}
		}
	}

	for (int i = 0; i < n - 1;) {
		int x = i + 1;
		while ((g[i].s1 + g[i].s2 + g[i].s3 + g[i].s4) == (g[x].s1 + g[x].s2 + g[x].s3 + g[x].s4)) {
			x ++;
		}
		for (int q = i; q < x ; q++) {
			for (int j = q+1; j < x ; j++) {
				if (g[q].xue > g[j].xue) {
					student temp = g[q];
					g[q] = g[j];
					g[j] = temp;
				}
			}
		}
		i = x + 1;
	}
	
	printf("%.2f %.2f %.2f %.2f\n",a,b,d,e);
	printf("%d\n",count);
	for (int i = 0; i < count; i++) {
			printf("%d %s %s %d\n", g[i].xue,g[i].name, g[i].sex,(g[i].s1 + g[i].s2 + g[i].s3 + g[i].s4));
		}
	
	return 0;
}
