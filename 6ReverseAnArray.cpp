//Reverse the given array after the specified position m using recursion;
#include <iostream>
#include <vector>
using namespace std;
void reverseArray(int l,int r,vector<int> &arr){
if(l>=r) return;
swap(arr[l],arr[r]);
reverseArray(l+1,r-1,arr);
}
void rev(vector<int>&arr,int m){
	reverseArray(m+1,arr.size()-1,arr);
}
int main()
{
	vector <int> arr;
	int num;
	cout<<"Enter how many elements are you entering in the array: "<<endl;
	cin>>num;
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<num;i++){
		int n;
		cin>>n;
		arr.push_back(n);
		
	}
	int m;
	cout<<"Enter m:";
	cin>>m;
	rev(arr,m);
	for(int num:arr){
		cout<<num;
	}
	
    return 0;
}