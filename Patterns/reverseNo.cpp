#include<iostream>
#include<cmath>
using namespace std;

int main(){
	system("cls");
	int n,revno = 0,temp;
	cin>>n;
	
	//Reverse No
	cout<<"Orignal Number:"<<n<<endl;
	while(n){
		temp = n%10;
		revno = (revno * 10) + temp;
		n = n/10;
	}	
	
	cout<<"Revese Number:"<<revno;
	system("pause");
	return 0;
}
