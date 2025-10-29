#include<iostream>
using namespace std;

int main(){
	int n,step = 0;
	cin >> n;
	while(n!=1){
		if(n%2 != 0){
			n = (3*n + 1)/2;
		}else{
			n = n/2;
		}
	    step = step + 1;
	}
	cout << step << endl;
	return 0;
}
