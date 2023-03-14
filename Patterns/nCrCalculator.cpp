//Find Combinational Propability (nCr) calculator
/*

nCr = n!/r! * (n-r)! 

*/
#include<iostream>
#include<cmath>
using namespace std;
int fact(int n){
	int factorial=1;
	for(int i=2; i<=n; i++){
		factorial *= i;
	}
	return factorial;
}

float nCr(int n,int r){
	float ans = fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main(){
	system("cls");
	int n,r;
	//enter obeject n & simple r
	cin>>n>>r;
	cout<<"nCr :"<<nCr(n,r);
	system("pause");
	return 0;
}
