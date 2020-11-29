// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}// } Driver Code Ends


/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
bool findTriplets(int arr[], int n)
{ 
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        a.push_back(arr[i]);
    }
    sort(a.begin(),a.end());
    int l,r;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            return false;
        }
        for(l = i+1,r=n-1 ; l<n;)
        {
            if(l==r)
            {
                break;
            }
            if((a[i]+a[l]+a[r])==0)
            {
                return true;
            }
            else if((a[i]+a[l]+a[r])>0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return false;
}
