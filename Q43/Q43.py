#Tower Of Hanoi 
n = int(input("Enter the number of disks: "))

rods = ['A', 'B', 'C']

moves = (1 << n) - 1  

print(f"The sequence of moves to solve the Tower of Hanoi with {n} disks:")

for i in range(1, moves + 1):
    s
    source = (i & (i - 1)) % 3
    destination = ((i | (i - 1)) + 1) % 3

    print(f"Move disk from {rods[source]} to {rods[destination]}")
