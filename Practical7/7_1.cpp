#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter queue size: ";
    cin >> n;

    int queue[100];
    int front = -1, rear = -1;
    int choice, value;

    do {
        cout << "\n1. Join";
        cout << "\n2. Serve";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (rear == n - 1) {
                cout << "Error: Queue is full\n";
            } else {
                cout << "Enter token number: ";
                cin >> value;

                if (front == -1)
                    front = 0;

                rear++;
                queue[rear] = value;

                cout << "Current front token: " << queue[front] << endl;
            }
        }
        else if (choice == 2) {
            if (front == -1 || front > rear) {
                cout << "Error: Queue is empty\n";
            } else {
                cout << "Served token: " << queue[front] << endl;
                front++;

                if (front > rear) {
                    front = -1;
                    rear = -1;
                } else {
                    cout << "Current front token: " << queue[front] << endl;
                }
            }
        }
        else if (choice == 3) {
            if (front == -1) {
                cout << "Queue is empty\n";
            } else {
                cout << "Current front token: " << queue[front] << endl;
            }
        }

    } while (choice != 4);

    return 0;
}