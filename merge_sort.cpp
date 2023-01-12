#include <bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
	int mid=s+(e-s)/2;
	int len1=mid-s+1;
	int len2=e-mid;
	//copy left array and right array into new arrays
	int *arr1=new int[len1];
	int *arr2=new int[len2];
	
	int mainindex=s;
	for(int i=0;i<len1;i++){
		arr1[i]=arr[mainindex++];
	}
	
	mainindex=mid+1;
	for(int i=0;i<len2;i++){
		arr2[i]=arr[mainindex++];
	}
	
	int index1=0;
	int index2=0;
	mainindex=s;
	//merge
	while(index1 < len1 && index2 < len2){
		if(arr1[index1]<arr2[index2]){
			arr[mainindex++]=arr1[index1++];
		}
		else
			arr[mainindex++]=arr2[index2++];
	}
	while(index1<len1)
		arr[mainindex++]=arr1[index1++];
	while(index2<len2)
		arr[mainindex++]=arr2[index2++];
	delete []arr1;
	delete []arr2;
}
void mergesort(int *arr,int s,int e){
	if(s>=e)
		return ;
	int mid=s+(e-s)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	merge(arr,s,e);
}
int main() {
	int arr[5]={9,6,3,0,5};
	int size=5;
	mergesort(arr,0,size-1);
	for(auto i:arr)
	cout<<i<<" ";
	return 0;
}
