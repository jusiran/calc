#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2, result;

    cout << "Введите оператор (+, -, , /): ";
    cin >> op;
    cout << "Введите два операнда: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Результат: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Результат: " << result << endl;
            break;
        case '':
            result = num1 * num2;
            cout << "Результат: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Результат: " << result << endl;
            } else {
                cout << "Ошибка: деление на ноль!" << endl;
            }
            break;
        default:
            cout << "Ошибка: неверный оператор!" << endl;
    }

    return 0;
}



