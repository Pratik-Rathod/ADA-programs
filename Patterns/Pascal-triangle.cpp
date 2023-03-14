//print Pascal Triangle 
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
	int n,r,i;
	cin>>i;
	
	for(int j=0;j<i;j++){
		for(int k=0;k<=j;k++){
			cout<<nCr(j,k)<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
