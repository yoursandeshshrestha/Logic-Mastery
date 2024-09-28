# Generate a multiplication table for a given number

def multiplication_table(num):
    for i in range(1, 11):
        print(f"{num} * {i} = {num * i}")

multiplication_table(5)
