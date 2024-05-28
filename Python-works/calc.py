def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Cannot divide by zero"
    return x / y

while True:
    print("Options:")
    print("Enter 'a' for addition")
    print("Enter 's' for subtraction")
    print("Enter 'm' for multiplication")
    print("Enter 'd' for division")
    print("Enter 'e' to end the program")

    user_input = input(": ")

    if user_input == "e":
        break

    if user_input in ("a", "s", "m", "d"):
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if user_input == "a":
            print("Result: ", add(num1, num2))
        elif user_input == "s":
            print("Result: ", subtract(num1, num2))
        elif user_input == "m":
            print("Result: ", multiply(num1, num2))
        elif user_input == "d":
            print("Result: ", divide(num1, num2))
    else:
        print("Invalid input")
