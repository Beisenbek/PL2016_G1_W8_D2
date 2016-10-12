#include <iostream>


using namespace std;

int main(){

	int n;

	cin >> n;

	for(int i = 1; i <= 9; ++i){
		for(int j = 0; j <= 9; ++j){
			for(int k = 0; k <=9; ++k){
				if(i + j + k == n){
					cout << i << j << k << endl;
				} 
			}
		}
	}



	return 0;
}