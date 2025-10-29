#include <iostream>
using namespace std;

int main()
{
    int n, step = 0;
    cin >> n;
    while(n!=1){
        if(n%2) n = (3*n+1)/2;
        else n >>= 1;
        step++;
    }
    cout << step << endl;
    return 0;
}
