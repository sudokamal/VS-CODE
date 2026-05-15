#include <bits/stdc++.h>
#include <conio.h>   // for getch()

using namespace std;

int main() {
    int ch, a, b;

    do {
        system("cls");

        cout << "1. Add\n";
        cout << "2. Sub\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {

        case 1:
            cout << "Enter 2 numbers: ";
            cin >> a >> b;
            cout << "Sum is " << a + b << endl;
            break;

        case 2:
            cout << "Enter 2 numbers: ";
            cin >> a >> b;
            cout << "Difference is " << a - b << endl;
            break;

        case 3:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid input" << endl;
        }

        getch();

    } while (ch != 3);

    return 0;
}