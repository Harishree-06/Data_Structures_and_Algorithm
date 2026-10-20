#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> table[10];
    int n, code, index;

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter book code: ";
        cin >> code;

        index = code % 10;
        table[index].push_back(code);
    }

    cout << "\nLibrary Shelves:\n";
    for (int i = 0; i < 10; i++) {
        cout << i << " : ";

        for (int j = 0; j < table[i].size(); j++)
            cout << table[i][j] << " ";

        cout << endl;
    }

    return 0;
}