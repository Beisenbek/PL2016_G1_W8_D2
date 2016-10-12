#include <iostream>

using namespace std;

int ar[10001];
int n;
int a,b;

void init(){
	
	for(int i = 0;i<n; ++i){
		ar[i] = a + i;
		if(ar[i] > b){
			ar[i] = b;
		}
		cout << ar[i] << " ";
	}

	cout << endl;
}

void findEvenMax(){
	int m = -1;

	for(int i = 0; i < n; ++i){
		if(ar[i]%2 == 0 && ar[i]>m){
			m = ar[i];
		}
	}

	cout << m;
}

int main(){

	freopen("input.txt","r",stdin);
        cin >> a >> b >> n;
        init();
	findEvenMax();
	return 0;
}
      	
