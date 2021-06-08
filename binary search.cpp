//BINARY SEARCH CPP
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n , int x)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        int middle=(right+left)/2;
        
        if(x==arr[middle])
          return middle;
          if(x>arr[middle])
           left=middle+1;
           else
           right=middle-1;
    }return-1;
}

int main()
{
    int arr[100],n,s,i;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the data to be searched :";
    cin>>s;
    
    int f=BinarySearch(arr,n,s);
    
    if(f==-1)
    {
        cout<<"Element is not found...";
    }
    else
    {
        cout<<"Element is found at index: "<<f<<endl<<"position: "<<f+1;
    }
    return 0;
}
