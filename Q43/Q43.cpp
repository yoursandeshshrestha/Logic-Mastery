/*Tower Of Hanoi*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n; 

    cout << "Enter the number of disks: ";
    cin >> n;

    int moves = pow(2, n) - 1; 
    char rods[] = {'A', 'B', 'C'}; 

    cout << "The sequence of moves to solve the Tower of Hanoi with " << n << " disks:\n";

    
    for (int i = 1; i <= moves; i++) 
    {
    
        int source = (i & (i - 1)) % 3; 
        int destination = ((i | (i - 1)) + 1) % 3; 

        cout << "Move disk from " << rods[source] << " to " << rods[destination] << endl;
    }

    return 0;
}
