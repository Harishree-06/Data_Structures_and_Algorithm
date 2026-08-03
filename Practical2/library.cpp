#include<iostream>
using namespace std;

int main()
{
    cout << "Enter Number of Entries: ";
    int n;
    cin >> n;

    int book_code[n];

    cout << "Enter sorted book codes: ";
    for(int i = 0; i < n; i++)
    {
        cin >> book_code[i];
    }

    cout << "Enter book code to search: ";
    int code;
    cin >> code;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(code == book_code[mid])
        {
            cout << "Book found at position " << mid + 1;
            found = true;
            break;
        }
        else if(code > book_code[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(!found)
    {
        cout << "Book not found";
    }

    return 0;
}