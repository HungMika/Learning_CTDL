#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;

    cout << "input your numbers \n";
    cin >> a >> b;

    cout << "select calculation from + - * / \n";
    cin >> c;

    switch (c)
    {
    case '+':
        cout << "result: " << a + b << endl;
        break;
    case '-':
        cout << "result: " << a - b << endl;
        break;
    case '*':
        cout << "result: " << a * b << endl;
        break;
    case '/':
        if (b != 0)
            cout << "result: " << a / b << endl;
        else
            cout << "Cannot divide by zero!" << endl;
        break;
    default:
        cout << "Invalid operation!" << endl;
        break;
    }

    return 0;
}
