# Return the factorial of a number.

def Factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * Factorial(n-1)
    
print(Factorial(5))