#include<bits/stdc++.h>
using namespace std;

class Stack {
    int *data;
    int top, maxstk;

public:

    Stack() {
        maxstk = 5;
        data = new int[maxstk];
        top = -1;
    }

    Stack(int n) {
        maxstk = n;
        data = new int[maxstk];
        top = -1;
    }

    void push(int item) {
        if(top == maxstk - 1) {
            cout << "Stack overflow" << endl;
            return;
        }

        data[++top] = item;
    }

    int pop() {
        if(top == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        }

        return data[top--];
    }

    int peep() {
        if(top == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        }

        return data[top];
    }

    bool isEmpty() {
        return (top == -1);
    }

    void display() {

        if(top == -1) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Stack is:" << endl;

            for(int i = top; i >= 0; i--) {
                cout << data[i] << endl;
            }
        }
    }
};

int main() {

    Stack s1;

    int ch, item;

    do {

        cout << "\n1.Push\n2.Pop\n3.Peep\n4.Display\n5.Exit\n";
        cout << "Enter your choice: ";

        cin >> ch;

        switch(ch) {

            case 1:
                cout << "Enter item to push: ";
                cin >> item;
                s1.push(item);
                break;

            case 2:
                item = s1.pop();

                if(item != -1) {
                    cout << "Popped item is: " << item << endl;
                }

                break;

            case 3:
                item = s1.peep();

                if(item != -1) {
                    cout << "Top item is: " << item << endl;
                }

                break;

            case 4:
                s1.display();
                break;

            case 5:
                cout << "Program exited" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }

    } while(ch != 5);

    return 0;
}