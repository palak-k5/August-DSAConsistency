#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void swap(int arr[],int i,int n)
{
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}
int main()
{

    int arr[]={1,2,3,4,5,6,7,8,9,0,3,0,1,0,1,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n/2)
    {
        swap(arr,i,n);
        i++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}