#include <iostream>


using namespace std;


int nod(int a, int b){
	if(b == 0) return a;
	return nod(b,a%b);
}

int main(){

	int a,b;
	
	cin >> a >> b;

	int n = nod(max(a,b),min(a,b));

	cout << a/n;
	cout << " " << b/n;
	

	return 0;
}