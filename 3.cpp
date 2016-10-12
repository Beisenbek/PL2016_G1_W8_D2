#include <iostream>


using namespace std;

int s(int x){
	return x * x;
}


bool insideF1(int x,int y){
	return y >= 2*x + 2 && y >= -x && s(x+1) + s(y-1) <=4;
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

	string s[2];
	s[0] = "NO";
	s[1] = "YES";

	cout << s[IsPointInArea(a,b)];	

	return 0;
}