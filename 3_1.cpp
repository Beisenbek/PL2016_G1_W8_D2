#include <iostream>


using namespace std;

int s(int x){
	return x * x;
}


bool insideF1(int x,int y){
	bool condition1 = y >= 2*x + 2;
	bool condition2 =  y >= -x;
	bool condition3 = s(x+1) + s(y-1) <=4;

	return condition1 && condition2 && condition3 ; 
}

bool insideF2(int x,int y){
	return y <= 2*x + 2 && y <= -x && s(x+1) + s(y-1) >=4;
}

bool IsPointInArea(int x, int y){
	return insideF1(x,y) || insideF2(x,y);
}

int main(){

	int a,b;

	cin >> a >> b;

	string res =  IsPointInArea(a,b)?"YES":"NO";

	cout << res;	

	return 0;
}
