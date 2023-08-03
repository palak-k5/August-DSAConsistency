void swap(int arr[],int i,int n)
{
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}