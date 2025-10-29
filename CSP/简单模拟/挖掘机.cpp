#include <iostream>
using namespace std;

int main()
{
    int N;
    int max_num, max_score = 0;
    int num, score;
    int school[100005] = {0};
    cin >> N;
    while(N--){
        cin >> num >> score;
        school[num] += score;
        if(school[num]>=max_score){
            max_score = school[num];
            max_num = num;
        }
    }
    cout << max_num << " " << school[max_num] << endl;
    return 0;
}
