#include <iostream>

using namespace std;

int dr[4] = {0,1,0,-1};  
int dc[4] = {1,0,-1,0};

int a[10][10];
int n;


void printArray(){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;
}

void init(){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			a[i][j] = -1;
		}
	}
}

bool ok (int r, int c){
	if(r < 0) return false;
	if(c < 0) return false;
	if(r >= n) return false;
	if(c >= n) return false;
	if(a[r][c] != -1) return false;

	return true;
}

void step(int r,int c,int i, int cnt){
	
	if(cnt > n*n) return;

	int rr = r + dr[i];
	int cc = c + dc[i];

	if(ok(rr,cc)){
		a[rr][cc] = cnt;
		step(rr,cc,i,cnt + 1);
	}
	else{
		step(r,c,(i+1)%4,cnt);	
	}
}



int main(){
      	cin >> n;

      	init();

      	step(0,-1,0,1);

	printArray();

	return 0;
}
      	
