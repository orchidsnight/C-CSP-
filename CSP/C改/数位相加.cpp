#include<iostream>
using namespace std;

int main(){
	int n,sum = 0,a;
	cin >> n;
	while(n){
		a = n % 10;
		sum += a;
		n = n/10;
	}
	cout << sum;
	return 0;
}
