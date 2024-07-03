#include <iostream>

using namespace std;

class Calculator {
public:
    void displayMenu() {
        cout<<"Simple Calculator"<<endl;
        cout<<"Select an operation:"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
    }

    void performOperation(int choice, double num1, double num2) {
        switch(choice) {
            case 1:
                cout<<"Result: "<<num1+num2<<endl;
                break;
            case 2:
                cout<<"Result: "<<num1-num2<<endl;
                break;
            case 3:
                cout<<"Result: "<<num1*num2<<endl;
                break;
            case 4:
                if(num2 != 0) {
                    cout<<"Result: "<<num1/num2<<endl;
                } else {
                    cout<<"Error: Division by zero is not allowed."<<endl;
                }
                break;
            default:
                cout<<"Invalid choice."<<endl;
                break;
        }
    }

    void run() {
        int choice;
        double num1, num2;
        while(true) {
            displayMenu();
            cin>>choice;
            if(choice == 5) {
                cout<<"Okay Fine,Exiting the program."<<endl;
                break;
            }
            cout<<"\nEnter the first number: ";
            cin>>num1;
            cout<<"Enter the second number: ";
            cin>>num2;
            performOperation(choice, num1, num2);
            cout<<endl;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.run();
    return 0;
}
