//Generate Fibonacci series for given N numbers
#include<iostream>
using namespace std;

int main(){
	system("cls");
	int n,fib1=0,fib2=1,fib3=0;
	cin>>n;
	cout<<fib1<<", "<<fib2<<", ";
	fib3=fib1+fib2;
	//Fibonacci Series
	while(n){
		cout<<fib3<<", ";
		fib1 = fib2;
		fib2 = fib3;
		fib3=fib1+fib2;
		n--;
	}
	cout<<"Fibonacci:"<<endl;
	system("pause");
	return 0;
}
