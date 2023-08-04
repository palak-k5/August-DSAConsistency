#include<iostream>
using namespace std;
bool isPalindrome(int x) 
{
        long long rev=0;    //for large values of x
        int n=x;
        int r;
        if(n<0)             //for negative numbers
            return false;
        while(n)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        return (x==rev)?true:false;
}
int main()
{
    int n;
    cout<<"Enter a no ";
    cin>>n;
    bool r=isPalindrome(n);
    if(r)
        cout<<n<<" is a palindrome";
    else 
       cout<<n<<" is not a palindrome"; 
}