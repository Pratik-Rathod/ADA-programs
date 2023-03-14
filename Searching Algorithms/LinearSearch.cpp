//Liner Search Algorithm

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	system("cls");
	int arr[10],a;
	
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	
	cin>>a;
	for(int i=0;i<10;i++){
		if(a==arr[i]){
			cout<<"element found on "<<i+1<<" Position";
			return 0;
		}
	}
	cout<<"ELement not presented on array";
	system("pause");
	return 0;
}
