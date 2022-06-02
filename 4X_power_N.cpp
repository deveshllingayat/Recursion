#include <iostream>
using namespace std;
//Traditional method
int xPower(int n,int p){
	int num= n;
	for(int i=1;i<p;i++){
		num *= n;
	}
	return num;
}
//Using recursion
int xPowerN(int X,int N){
	if(N==0) return 1;
	int partialAns = xPowerN(X,N-1);
	return X * partialAns;
}
//to reduce complexity we will be doing below function
long long power(int X,int N){
	if(N==0) return 1;
	long long temp = power(X,N/2);
	if(N%2 == 1) return temp*temp*X;
	return temp*temp;
}

int main()
{
	int n,p;
	cout<<"Enter integer to be powered: "<<endl;
	cin>>n;
	cout<<"Enter the power: "<<endl;
	cin>>p;
	cout<<power(n,p)<<endl;
	cout<<"The solution of "<<n<<" to the power "<<p<<" is: "<<xPower(n,p)<<endl;
	cout<<"The solution of "<<n<<" to the power "<<p<<" is: "<<xPowerN(n,p)<<endl;
 
    return 0;
}