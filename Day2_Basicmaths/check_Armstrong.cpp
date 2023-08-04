#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkArmstrong(int n){
	//Write your code here
	int sum=0;
	int r;
	int num=n;
	while(num)
	{
		r=num%10;
		sum=sum+pow(r,(int(log10(n)+1)));
		num/=10;
	}
	if(sum==n)
		return true;
	return false;
}
int main()
{
    int n;
    cout<<"Enter a no ";
    cin>>n;
    bool r=checkArmstrong(n);
    if(r)
        cout<<n<<" is a Armstrong";
    else 
       cout<<n<<" is not a Armstrong"; 
}
