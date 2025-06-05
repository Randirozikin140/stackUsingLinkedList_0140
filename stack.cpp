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
};

