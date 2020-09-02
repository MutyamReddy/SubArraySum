#include<bits/stdc++.h>
using namespace std;
int subArraySum(int arr[],int n,int sum){
	int cur_sum=arr[0];
	int start=0;
	int i;
	for(i=1;i<n;i++){
		while(cur_sum>sum&& start<i-1){
			cur_sum=cur_sum-arr[start];
			start++;
		}
		if(cur_sum==sum){
			cout<<"sum found between "<<start<<" and "<<i-1;
			return 1;
		}
		if(i<n)
		cur_sum=cur_sum+arr[i];
	}
	cout<<"sum  not found";
	return 0;
}
int main() 
{ 
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23; 
    subArraySum(arr, n, sum); 
    return 0; 
} 
