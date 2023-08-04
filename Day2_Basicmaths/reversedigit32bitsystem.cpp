#include<iostream>
using namespace std;
int reverse(int x) {
        int rev=0;     
        while(x)
        {
            if (rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev=rev*10+x%10; 
            x=x/10;     
        } 
        return rev;  

        
    }
int main()
{
    int n;
    cout<<"Enter a no ";
    cin>>n;
    int r=reverse(n);
    if(r) 
        cout<<"Reversed no ="<<r;
    else cout<<"value ouside the 32 bit range ";
}