#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Duplicate numbers: ";

    for(int i=0;i<n;i++)
    {
        bool printed = false;

        for(int k=0;k<i;k++)
        {
            if(arr[i] == arr[k])
            {
                printed = true;
                break;
            }
        }

        if(printed)
            continue;

        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }

    return 0;
}