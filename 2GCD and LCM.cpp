
#include<iostream>
using namespace std;
// Function to find GCD of two numbers 'x' and 'y'.
int GCD(int x, int y) {
    if (y == 0) {
        return x;
    }
    return GCD(y, x % y);
}

// Function to calculate LCM of two numbers 'x' and 'y'.
long long LCM(int x, int y) {
    long long product = (long long)x * (long long )y;
    
    //Calculating the GCD using the GCD function.
    int gcd = GCD(x, y);
    return product / gcd;
}
int main(){
	long long x,y,result;
	int gcd;
	int T;
	cout<<"Enter the no. of test cases: "<<endl;
	cin>>T;
	for (int i=0;i<T;i++){
	cout<<"Enter the first number."<<endl;
	cin>>x;
	cout<<"Enter the second number."<<endl;
	cin>>y;
	result = LCM(x,y);
	gcd = GCD(x,y);
	cout<<"GCD of two numbers is: "<<gcd<<endl;
	cout<<"LCM of two numbers is: "<<result<<endl;
	}
	
}