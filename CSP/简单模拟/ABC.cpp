#include<iostream>
using namespace std;

int main(){
	int T,a = 1;
	long long int A,B,C;
	cin >> T;
	while(T--){
		cin >> A >> B >> C;
		if(A+B-C>0){
			cout << "Case #" << a << ": true" << endl;
		}else{
			cout << "Case #" << a << ": false" <<endl;
		}
		a++;
	}
	return 0;
}
