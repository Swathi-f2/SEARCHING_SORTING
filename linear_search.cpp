 #include <bits/stdc++.h>
using namespace std;
int search(int arr[],int k,int size){
	if(size==0)
	return -1;
	if(arr[0]==k)
	return size; //if you give return 1 it says that element is found.
	else
	return search(arr+1,k,size-1);
 
}
int main() {
	int arr[5]={1,4,2,5,10};
	int k=10,size=5;
	int i=search(arr,k,size);
	if(i==-1)
	cout<<-1;
	else
	cout<<5-i;
	return 0;
}
