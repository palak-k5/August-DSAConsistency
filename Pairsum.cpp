#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr{10,20,30,40,50,60,70};
    int target=80;
    sort(arr.begin(),arr.end());
    int l=0,r=arr.size()-1;
    while(l<r)
    {
        int sum=arr[l]+arr[r];
        if(sum==target)
        {
            cout<<arr[l]<<" , "<<arr[r]<<endl;
            break;
        }
        else if(sum<target)
            l++;
        else
            r++;
    }
}