#include <iostream>
#include <string>
using namespace std;

int recursiveSearch(string plates[], int n, string target, int index)
{
    if (index == n)
        return -1;

    if (plates[index] == target)
        return index;

    return recursiveSearch(plates, n, target, index + 1);
}

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

    int position = recursiveSearch(plates, n, target, 0);

    if (position != -1)
        cout << "License plate found at position " << position << endl;
    else
        cout << "License plate not found." << endl;

    return 0;
}