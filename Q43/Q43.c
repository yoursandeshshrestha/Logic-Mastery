/*Tower of Hanoi*/
#include <stdio.h>
void main() 
{
    int n; 

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    int moves = (1 << n) - 1; 
    char rods[] = {'A', 'B', 'C'}; 

    printf("The sequence of moves to solve the Tower of Hanoi with %d disks:\n", n);

    
    for (int i = 1; i <= moves; i++) 
    {
        int source = (i & i - 1) % 3; 
        int destination = ((i | i - 1) + 1) % 3; 
        
        printf("Move disk from %c to %c\n", rods[source], rods[destination]);
    }

}
