//find Max and Min in Minimum approch

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
        int i;
        int MaxStore;
        int MinStore;

        if (n%2==0)
        {
            if(arr[0] > arr[1])
            {
                MaxStore = arr[0];
                MinStore = arr[1]; 
            }
            else
            {
                MaxStore = arr[1];
                MinStore = arr[0];
            }
                i=2;
        }
        else
        {
            MaxStore = arr[0];
            MinStore = arr[0];
            i=1;
        }

        while(i<n-1)
        {
            if(arr[i] > arr[i+1])
            {
                if(arr[i] > MaxStore)
                    MaxStore = arr[i];
                
                if(arr[i+1] < MinStore)
                {
                    MinStore = arr[i+1];
                }
            }
            else
            {
                if(arr[i+1] > MaxStore)
                    MaxStore = arr[i+1];

                if(arr[i] < MinStore)
                    MinStore = arr[i];
            }
            i=i+2;
        }

                cout<<"Max value in Array is : "<<MaxStore<<endl;
                cout<<"Min value in Array is : "<<MinStore<<endl;

        return 0;
    }