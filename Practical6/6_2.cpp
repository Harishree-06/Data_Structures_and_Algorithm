#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> history;
    string currentPage;
    int operations;

    cout << "Enter first page: ";
    cin >> currentPage;

    cout << "Enter number of operations: ";
    cin >> operations;

    for (int i = 0; i < operations; i++) {
        int choice;
        string page;

        cout << "\n1. Visit page";
        cout << "\n2. Back";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            history.push(currentPage);

            cout << "Enter page: ";
            cin >> page;

            currentPage = page;
            cout << "Current page: " << currentPage << endl;
        }
        else if (choice == 2) {
            if (history.empty()) {
                cout << "No history left. Current page: " << currentPage << endl;
            }
            else {
                currentPage = history.top();
                history.pop();

                cout << "Current page: " << currentPage << endl;
            }
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}