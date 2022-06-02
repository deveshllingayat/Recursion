/* 
Recursion
*/

#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0 || n==1) return 1;
	int partialAns = factorial(n-1);
	return n*partialAns;
}
int main(){
	int n;
	cin>>n;
	if(n<0){
		cout<<"ERROR";
	}
	else{
		cout<<factorial(n);
	}
}
