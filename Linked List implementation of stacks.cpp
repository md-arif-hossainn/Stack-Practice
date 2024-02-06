#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* top = NULL;

void Push(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop() {
    if (top == NULL) return;
    Node* temp = top;
    top = top->link;
    delete temp;
}

bool isEmpty() {
    return (top == NULL);
}

int Top() {
    return top->data;
}

void Print() {
    Node* temp = top;
    if (isEmpty()) {
        cout << "Stack is Empty";
        return;
    }

    cout << "Top| ";
    while (temp != NULL) {
        cout << temp->data << " > ";
        temp = temp->link;
    }
    cout << "|End";
}

int main() {
    int choice = -1; // Initialize choice to some default value
    int enter;
    cout << "--------- Welcome to Stack -------\n\n";

    while (choice != 0) {
        cout << "\nPlease ENTER your choice\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. What is Top ?\n";
        cout << "4. Is Stack Empty ?\n";
        cout << "5. Print Stack\n";
        cout << "0. Exit\n";

        cout << "Choice: ";
        cin >> choice;
        cout << "\n";

        switch (choice) {
            case 1:
                cout << "Enter the number for Push\n";
                cin >> enter;
                Push(enter);
                break;

            case 2:
                Pop();
                cout << "It's popped!\n";
                break;

            case 3:
                enter = Top();
                cout << "Top is = " << enter << "\n";
                break;

            case 4:
                if (isEmpty())
                    cout << "Yes, It's empty\n";
                else
                    cout << "Nope, It contains elements\n";
                break;

            case 5:
                cout << "Stack Elements: \n";
                Print();
                break;

            case 0:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Enter numbers between 0 and 5 !\n";
                break;
        }
    }

    return 0;
}
