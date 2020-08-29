#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2;
    char op;


    cout << "Enter first Number: ";
    cin >> num1;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the second Number: ";
    cin >> num2;
    int result;
    if(op == '+'){

        result = num1 + num2;
        }
    else if(op == '-'){
    result = num1 - num2;
    }

    else if(op == '/'){
    result = num1 / num2;
    }

    else if(op == '*'){
    result = num1 * num2;
    } else {
     cout << "Invalid Operator" << endl;


    }


    cout << result << endl;

    cout << "HERE YA GO" << endl;





    return 0;



}
