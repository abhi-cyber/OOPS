#include <iostream>
using namespace std;

/*
    sytanx of a function <> -> Mandatory [] -> Not Mandatory

    // Declaration

    <return type> <function name>([Parameters if any] < with Data Typeˀ>){
        set of statements
    }

    // Calling

    <function name>([Parameters if any]);

    // When a function return something it need to be asigned to a variable
*/

long fact(int num){
    int i, factorial;
    factorial = 1;
    for(i = num; i >=1; i--){
        factorial *= num;
        num --;
    }
    return factorial;
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    long res = fact(num);
    cout << "Factorial of " << num << " is: " << res << endl;
    return 0;
}