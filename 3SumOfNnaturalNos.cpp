#include <iostream>
using namespace std;

int sum(int n){
	if(n==1) return 1;
	int partialAns = sum(n-1);
	return n + partialAns;
}

int main()
{
  int N;
  cin>>N;
  cout<<"Sum of First "<<N<<" Natural numbers is : "<<sum(N)<<endl;
    return 0;
}