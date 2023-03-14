//Factorial 
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

int main(){
	system("cls");
	int n;
	cin>>n;
	cout<<"Facto"<<fact(n)<<endl;
	system("pause");
	return 0;
}
