# Determine if a number is prime.

def checkPrime(num):
    if num % 2 == 0:
        print(f'{num} is prime')
    else:
        print(f'{num} is odd')

checkPrime(20)
checkPrime(1)
