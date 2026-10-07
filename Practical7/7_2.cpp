#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* front = NULL;
    Node* rear = NULL;

    int choice, value;

    do {
        cout << "\n1. Arrive";
        cout << "\n2. Attend";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter patient number: ";
            cin >> value;

            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;

            if (front == NULL) {
                front = newNode;
                rear = newNode;
            } else {
                rear->next = newNode;
                rear = newNode;
            }

            cout << "Current front patient: " << front->data << endl;
        }
        else if (choice == 2) {
            if (front == NULL) {
                cout << "Error: No patients waiting\n";
            } else {
                cout << "Attended patient: " << front->data << endl;

                Node* temp = front;
                front = front->next;
                delete temp;

                if (front == NULL)
                    rear = NULL;
                else
                    cout << "Current front patient: " << front->data << endl;
            }
        }
        else if (choice == 3) {
            if (front == NULL)
                cout << "Queue is empty\n";
            else
                cout << "Current front patient: " << front->data << endl;
        }

    } while (choice != 4);

    return 0;
}