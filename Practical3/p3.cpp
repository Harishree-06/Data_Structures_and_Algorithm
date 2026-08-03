#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int marks[n];
    int bubble[n];
    int selection[n];
    int insertion[n];

    cout << "Enter Marks for " << n << " students:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> marks[i];
        bubble[i] = marks[i];
        selection[i] = marks[i];
        insertion[i] = marks[i];
    }
    
    cout << "\n=== Bubble Sort ===" << endl;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(bubble[j] > bubble[j + 1])
            {
                int temp = bubble[j];
                bubble[j] = bubble[j + 1];
                bubble[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << bubble[i] << " ";
    }
    cout << endl;

    cout << "\n=== Selection Sort ===" << endl;

    for(int i = 0; i < n - 1; i++)
    {
        int index = i;

        for(int j = i + 1; j < n; j++)
        {
            if(selection[j] < selection[index])
            {
                index = j;
            }
        }

        int temp = selection[i];
        selection[i] = selection[index];
        selection[index] = temp;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << selection[i] << " ";
    }
    cout << endl;

    cout << "\n=== Insertion Sort ===" << endl;

    for(int i = 1; i < n; i++)
    {
        int temp = insertion[i];
        int k = i - 1;

        while(k >= 0 && insertion[k] > temp)
        {
            insertion[k + 1] = insertion[k];
            k--;
        }

        insertion[k + 1] = temp;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << insertion[i] << " ";
    }
    cout << endl;

    return 0;
}