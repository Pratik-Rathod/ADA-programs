//Generate n Prime Series 
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	system("cls");
	int n,j=0;
	cin>>n;
	while(n){
		if(isPrime(j)){
			cout<<j<<", ";
			n--;
		}
		j++;
	}
	
	system("pause");
	return 0;
}
