            result = num1 * num2;
            cout << "Результат: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Результат: " << result << endl;
            } else {
                cout << "Ошибка: деление на ноль" << endl;
            }
            break;
        default:
            cout << "Ошибка: неверный оператор" << endl;
    }

    return 0;
}
