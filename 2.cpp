#include <iostream>


using namespace std;




int nod(int a, int b){
		int r;
	int k;
	do{
	  r = a % b;
	  k = a / b;
	 // printf("%i = %i * %i + %i\n",a,b,k,r);
	  a = b;
	  b = r;
	}while(b!=0);

	return a;
}

int main(){

	int a,b;
	
	cin >> a >> b;

	int n = nod(max(a,b),min(a,b));

	cout << a/n;
	cout << " " << b/n;
	

	return 0;
}