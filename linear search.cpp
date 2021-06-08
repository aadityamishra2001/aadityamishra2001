//LINEAR SEARCH


#include<iostream>
using namespace std;

int main()
{
    int arr[100],i,key,flag=0,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"\nEnter the array elements :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the element to be searched:";
    cin>>key;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]=key)
        {
            flag==1;
            break;
        }
    }
    if(flag=1)
    {
        cout<<"\nThe element is found at position: "<<i+1;
    }
    else
    {
        cout<<"Element is not found....";
    }
}
