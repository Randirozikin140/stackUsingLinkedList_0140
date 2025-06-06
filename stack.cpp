#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class stack {
private:
    Node *top;

public:
    stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node(); //1. Allocate memory for new node
        newNode->data = value;      //2. Assign value
        newNode->next = top;        //3. set the next pointer of the new node to the current top
        top = newNode;              //4. Update the top pointer to the new node   
        cout << "push value :" << value << endl;
        return value;               
    }

    bool isEmpty() {
        return top == NULL;
    }

    void pop() {
        Node *temp = top; 
        if (isEmpty()) {
            cout << "Stack is Empty :" << endl;
            return;
        }
        cout << "Popped value :" << top->data << endl;
        top = temp->next;
        temp = nullptr; 
    }

    void peek() {
        if (isEmpty()) 
        {
            cout << "List isEmpty :" << endl;
            return; 
        }
        else 
        {
            Node *current = top;
            while (current != NULL)

            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }
};

int main() {
    stack stack;

    int choice = 0;
    int value;

    while(choice != 4) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // Push the value onto the stack
            break;
        case 2:
            stack.pop(); // pop the topmost element from the stack
            break;
        case 3:
            stack.peek(); // Display the elements in the stack
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice.Try again." << endl;
            break;
        }

        cout << endl; 
    }

    return 0;
}
// code berhasil run dengan baik, stack berfungsi dengan baik, push, pop, dan peek berfungsi dengan baik.

