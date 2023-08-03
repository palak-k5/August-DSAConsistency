#  include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v{1,2,3,4,4,1,7,3,7};
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        ans=ans^v[i];
    }    
    cout<<ans;
}