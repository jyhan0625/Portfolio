def is_prime(n):

    temp = 0
    for i in range(1, n+1):
        if n%i == 0:
            temp += 1

    if temp == 2:
        return True
    else:
        return False


numbers = int(input("Enter the number: "))

if is_prime(numbers):
    print("This number is prime number")

else:
    print("This number is not prime number")
