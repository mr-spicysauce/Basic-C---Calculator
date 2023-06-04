#include <iostream>

using namespace std;


double add(double num1, double num2){
    return num1 + num2;
}

double subtract(double num1, double num2){
    return num1 - num2;
}

double multiply(double num1, double num2){
    return num1 * num2;
}

double divide(double num1, double num2){
    return num1 / num2;
}

int main(){

    double num1, num2;
    char op;
    double answer;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator:  ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+'){
        answer = add(num1,num2);
    }
    else if(op == '-'){
        answer = subtract(num1,num2);
    }
    else if(op == '*'){
        answer = multiply(num1,num2);
    }
    else if(op == '/'){
        answer = divide(num1,num2);
    }
    
    cout << endl << num1 << op << num2 << " = " << answer;
    return 0;
}