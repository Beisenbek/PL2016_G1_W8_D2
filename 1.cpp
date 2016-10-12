#include <iostream>


using namespace std;

int main(){

	int n;

	cin >> n;

	for(int i = 100; i <= 999; ++i){
		int s = i % 10 + (i/10)%10 + i/100;
		if(s == n){
			cout << i << endl;
		}
	}


	return 0;
}