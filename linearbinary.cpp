#include <bits/stdc++.h>
using namespace std;
int linearit(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
            break;
        }
    }
        return -1;
}
int binaryit(int arr[],int n,int x)
{
    sort(arr,arr+n);
    int l=0;
    int h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else if(arr[mid]>x)
        {
            h=mid-1;
        }
    }
    return -1;
}
int linearre(int arr[],int n,int x)
{
    if(n<0)
    {
        return -1;
    }
    else
    {
        if(arr[n]==x)
        {
            return n;
        }
        else
        {
            return(linearre(arr,n-1,x));
        }
    }
}
int binaryrec(int arr[],int l,int h,int x)
{
    int mid=(l+h)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return(binaryrec(arr,l,mid-1,x));
    }
    else
    {
      return(binaryrec(arr,mid+1,h,x));   
    }
}
int main()
{
   int n,arr[10],i,x,choice;
   cout<<"Enter the size of the array"<<endl;
   cin>>n;
   cout<<"Enter the elements of the array"<<endl;
   for(i=0;i<n;++i)
   {
       cin>>arr[i];
   }
   cout<<"Enter the element to be searched"<<endl;
   cin>>x;
cout<<"Enter the operation to be performed"<<endl;
cin>>choice;
switch(choice)
{
    case 1: 
    {
        int r=linearit(arr,n,x);
        if(r==-1)
        {
            cout<<"element not found"<<endl;
        }
        else
        {
            cout<<"element found at "<<r<<endl;
        }
        break;
    }
    case 2:
    {
        int r=binaryit(arr,n,x);
        if(r==-1)
        {
            cout<<"element not found"<<endl;
        }
        else
        {
            cout<<"element found at "<<r<<endl;
        }
        break;
    }
    case 3:
    {
        int r=linearre(arr,n,x);
        if(r==-1)
        {
            cout<<"element not found"<<endl;
        }
        else
        {
            cout<<"element found at "<<r<<endl;
        }
        break;
    }
    case 4:
    {
        int l=0,h;
        int r=binaryrec(arr,l,h=n-1,x);
        if(r==-1)
        {
            cout<<"element not found"<<endl;
        }
        else
        {
            cout<<"element found at "<<r<<endl;
        }
        break;
    }
    
    default:
    {
        cout<<"Enter valid choice"<<endl;
    }
}
return 0;
}


