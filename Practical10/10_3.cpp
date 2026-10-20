#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, id, index, step;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student ID: ";
        cin >> id;

        index = id % 10;
        step = 7 - (id % 7);
        int count = 0;

        while (table[index] != -1 && count < 10) {
            index = (index + step) % 10;
            count++;
        }

        if (count == 10)
            cout << "Hash table is full\n";
        else
            table[index] = id;
    }

    cout << "\nHash Table:\n";
    for (int i = 0; i < 10; i++)
        cout << i << " : " << table[i] << endl;

    return 0;
}