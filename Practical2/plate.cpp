#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of license plates: ";
    cin >> n;

    string plates[100];

    cout << "Enter license plates:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> plates[i];
    }

    string target;
    cout << "Enter target license plate: ";
    cin >> target;

    int position = -1;

    for (int i = 0; i < n; i++)
    {
        if (plates[i] == target)
        {
            position = i;
            break;     
        }
    }

    if (position != -1)
        cout << "License plate found at position " << position << endl;
    else
        cout << "License plate not found." << endl;

    return 0;
}