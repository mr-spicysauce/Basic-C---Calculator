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
    char yesOrNo;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator:  ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    //This could be done without new functions for each operator but I wanted to test using functions
   
    switch(op){
        case '+':
            answer = add(num1,num2);
            break;
        case '-':
            answer = subtract(num1,num2);
            break;
        case '*':
            answer = multiply(num1,num2);
            break;
        case '/':
            answer = divide(num1,num2);
            break;
        default:
             cout << "Invalid Operator";
            return 0;
    }

    /*
    How I would do this problem with if statements.
    However a swich case is best for this

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
    else{
        cout << "Invalid Operator";
        return 0;
    } */

    cout << endl << num1 << op << num2 << " = " << answer << endl;

    cout << "Want to calculate another number? y/n" << endl;
    cin >> yesOrNo;

    if(yesOrNo == 'y'){
        main();
    }
    else{
        return 0;
    }
}