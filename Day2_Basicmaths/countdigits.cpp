// you are given a number "n"
// find the no of digits of 'n' that completely divide n.
// eg n=330
//op = 2

#include<iostream>
using namespace std;
int countDigits(int n){
	int count=0;
	int dig;
	int N=n;
	while(n)
	{
		dig=n%10;
        if (dig)
			count+=(N%dig==0)?1:0;
            // if (N % dig == 0)
            //     count++;
        n=n/10;
	}
	return count;
}
int main()
{
    int n;
    cout<<"Enter a no ";
    cin>>n;
    int r=countDigits(n);
    cout<<"no of digits of 'n' that completely divide n ="<<r;
    
}