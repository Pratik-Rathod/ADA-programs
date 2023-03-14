//Prime or not 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	system("cls");
	int n;
	cin>>n;
	
	for(int i=2; i<sqrt(n); i++){
		if(n%i==0){
			cout<<"Given Number is not prime";
			return 0;
		}
	}
	
	cout<<"Given Number is Prime No.";
	system("pause");
	return 0;
}
