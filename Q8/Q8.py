# Return the sum of digits of a number.

def sumOfDigits(num):
    sum = 0
    while num > 0:
        sum += num % 10
        num //= 10
    return sum

print(sumOfDigits(1234))