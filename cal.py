def add(a,b):
    result=a+b
    print(f"{a} + {b} ={ result}")

def sub(a,b):
    result=a-b
    print(f"{a} - {b} ={ result}")

def mul(a,b):
    result=a*b
    print(f"{a} * {b} ={ result}")

def div(a,b):
    result=a/b
    print(f"{a} / {b} ={ result}")



def power(a, b):
    result = a ** b
    print(f"{a} ^ {b} = {result}")




while True:
    
    print("BASIC MATHEMATICS CALCULATOR")

    print("\nChoose operation")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Power")
    print("6.Exit")

    choice = input("Enter choice: ")
    if(choice=="6"):
        print("Exiting...")
        break
    x = float(input("Enter number one: "))
    y = float(input("Enter number two: "))
    

    if(choice=="1"):
        add(x,y)
    elif(choice=="2"):
        sub(x,y)
    elif(choice=="3"):
        mul(x,y)
    elif(choice=="4"):
        div(x,y)
    elif(choice=="5"):
        power(x,y)
    else:
        print("Invalid Input")


