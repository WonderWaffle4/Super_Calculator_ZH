#include "super_calculator_zh.h"

long long eraseLen = 0;

void operationsList(string num1, string operation, string num2, string num){
    gotoxy(34, 2);
    for(long long i = 0; i < eraseLen; i++)
        cout << " ";
    eraseLen = itc_len(num1) + itc_len(num2) + itc_len(num) + 6;;
    gotoxy(34, 1);
    cout << "OPERATION:";
    gotoxy(34, 2);
    cout << num1 << " " << operation << " " << num2 << " = " << num;
}
