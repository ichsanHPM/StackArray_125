#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
    string stack_array[5];
    int top;

public:
    //constructor
    stackArray() {
        top = -1;
    }

    void push() {
        if (top == 4) {
            cout << "number of data eceds the limits." << endl;
            return;
        }

        cout << "\nEnter a element : ";
        string element;
        getline(cin, element);

        top++;
        stack_array[top] = element;
        cout << endl;
        cout << element << "ditambahkan (pushed)" << endl;
    }

    void pop() {
        if (empty()) {
            cout << "\nstack is empty.canot pop." << endl;
            return;
        }

        cout << "\nThe popped element is : " << stack_array[top] << endl;
        top--;
    }

    //method for check if data empty
    bool empty() {
        return(top == -1);
    }

    void display() {
        if (empty()) {
            cout << "\nStack is empty." << endl;
        }
        else {
            for (int tmp = 0; tmp <= top; tmp++) {
                cout << stack_array[tmp] << endl;
            }
        }
    }
};

int main()
{
    stackArray s;
    while (true) {
        cout << endl;
        cout << "n=== stack menu ===\n";
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. display\n";
        cout << "4. exit\n";
        cout << "\nEnter your choice: ";
        string input;
        getline(cin, input);
        char ch = (input.empty() ? '0' : input[0]);

        switch(ch) {
        case '1': {
            s.push();
            break;
            }

        case '2':
            if (s.empty()) {
                cout << "\nstack is empty." << endl;
                break;
            }
            s.pop();
            break;

        case '3':
            s.display();
            break;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
