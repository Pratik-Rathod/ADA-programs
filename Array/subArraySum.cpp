//Given an array A of size n of non negative integers, find a continues subarray which add to a given number S.
//Simple 1 2 3 4 5 & s = 5 output should be 2 4(1'ns indexing)
//4 5 1 2 3 4 5 
#include<iostream>
using namespace std;

int main(){
	system("cls");
	int n,arr[100],s;
	
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int st=0,en=0;

	while(true){
		if(en>n){
			cout<<"-1";
			break;
		}
		if(arr[st]+arr[en] == s){
				break;
		}	
		else if(arr[st]+arr[en]<=s){
			en++;
		}
		else if(arr[st]+arr[en]>=s){
			st++;
		}
	}
	
	//Output
	cout<<st<<" "<<en; 
	system("pause");
	return 0;
}