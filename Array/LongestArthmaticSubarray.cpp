//Longest Arthmatic Subarray ^Google Kick Start
/*
	An arithmatic array is an array that contain least two integers and the difference between consecutive  integers are equal For example [9,10],[3,3,3]and [9,7,5,3] are arithmatic array while [1,3,3,7],[2,1,2], and [1,2,4] are not arithmatic array. 
*/
#include<iostream>
using namespace std;
//Sample test case
// 7 10 7 4 6 8 10 11
int main(){
	system("cls");
	int arr[100],n;
	int pd=0,cur=0,ans=1,ans2=1;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	pd = arr[1] -  arr[0];
	
	for(int i=1;i<n-1;i++){
		cur = arr[i+1] - arr [i];
		if(pd == cur){
			++ans;
		}else{
			if(ans > ans2){
				ans2 = ans;
			}
			ans = 2;
		}
		pd = cur;
	}
	cout<<ans2;
	system("pause");
	return 0;
}