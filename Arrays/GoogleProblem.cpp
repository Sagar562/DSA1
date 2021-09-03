#include <iostream>
using namespace std;

    int main()
    {
       int n;
       cin>>n;

       int arr[n];
       for (int i=0;i<n;i++)
       {
           cin>>arr[i];
       }

       int pd = arr[1] - arr[0];
       int j = 2;
       int ans = 2;
       int cour = 2;

        while (n>j)
        {
            if(pd == arr[j] - arr[j-1])
            {
                cour++;
            }
            else
            {
                pd = arr[j] - arr[j-1];
                cour = 2;
            }
            ans = max(ans,cour);
            j++;
        }
        cout<<ans<<endl;
        return 0;
    }