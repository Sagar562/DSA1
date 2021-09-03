#include<iostream>
using namespace std;


    int main()
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    int sum=0;
        for(int i=0;i<n;i++)
        {
            int mid = (arr[0]+arr[n-1])/2;
            sum = arr[0] + mid;
        }
        cout<<sum<<endl;

        return 0;
    }