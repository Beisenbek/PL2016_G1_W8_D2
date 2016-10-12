#include <iostream>
#include <time.h>

using namespace std;



int ar[10001];
int n;
int a,b;

int getNumber(int a, int b){
	int res = rand()%(b+1-a) + a;	
	                  
	return res;
}


void init(){
	
	for(int i = 0;i<n; ++i){
		ar[i] = getNumber(a,b);
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

	srand(time(NULL));
        
        cin >> a >> b >> n;
        init();
	findEvenMax();
	return 0;
}
      	
