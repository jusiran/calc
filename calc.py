a = float(input("Введите первое число: "))
operation = input("Введите операцию (+, -, *, /): ")
b = float(input("Введите второе число: "))

if operation == "+":
    print(a + b)
elif operation == "-":
    print(a - b)
elif operation == "*":
    print(a * b)
elif operation == "/":
    if b != 0:
        print(a / b)
    else:
        print("Ошибка!")
else:
    print("Ошибка!")
