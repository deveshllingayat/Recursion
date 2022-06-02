#include <iostream>
#include <string>
using namespace std;


bool isPalindromeHelper(int l,int r,string &s){
	if(l>=r) return true;
	if(s[l]!=s[r]) return false;
	return isPalindromeHelper(l+1,r-1,s);
}
bool isPalindrome(string &s){
	return isPalindromeHelper(0,s.size()-1,s);
}

int main()
{
	string s;
	cout<<"Enter any string.: ";
	cin>>s;
	if (isPalindrome(s)==1){
		cout<<"String is Palindrome.";
	}
	else{
		cout<<"String is not Palindrome";
	}
	
    return 0;
}