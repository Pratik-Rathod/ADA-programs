#include<iostream>
using namespace std;

int main(){
	system("cls");
	int n,armstong = 0,temp;
	cin>>n;
	
	//Amstrong Number
	while(n){
		temp = n%10;
		armstong = armstong + (temp*temp*temp);
		n = n/10;
	}
	
	cout<<"This Number is armstong"<<armstong<<endl;
	
	if(n == armstong){
		cout<<"This Number is armstong"<<endl;
	}else{
		cout<<"Not Armstong"<<endl;
	}
	
	system("pause");
	return 0;
}
