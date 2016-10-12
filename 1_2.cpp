#include <iostream>


using namespace std;

int s(int n){
	if(n == 0) return 0;
	return n%10 + s(n/10);
	
}

void check(int k, int n){
	if(k == 1000) return;

	if(s(k) == n){
		cout << k << endl;
	}	

	check(k+1,n);
}


int main(){

	int n;

	cin >> n;

	check(100,n);

	return 0;
}