#include <bits/stdc++.h>
using namespace std;
//take a pivot
//count the numbers which are less than pivot
//swap pivot with start+count
//make sure <a|a|>a by two pointers
//then apply recursion for left array and right array
int partition(int *arr,int s,int e){
	int pivot=arr[s],cnt=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			cnt++;
		}
	}
	int	pivot_idx=s+cnt;
	swap(arr[s],arr[pivot_idx]);
	int i=s,j=e;
	while(i<pivot_idx && j>pivot_idx){
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<pivot_idx && j>pivot_idx){
			swap(arr[i++],arr[j--]);
		}
	}
	return pivot_idx;
}
void qsort(int *arr,int s,int e){
	if(s>=e)
		return ;
	int p=partition(arr,s,e);
	qsort(arr,s,p-1);
	qsort(arr,p+1,e);
}
int main() {
	 int arr[9]={1,5,2,6,3,9,8,6,10};
	 int n=9;
	 qsort(arr,0,n-1);
	 for(auto i:arr)
		cout<<i<<" ";
	return 0;
}
