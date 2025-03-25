/*Matrix multiplication*/
#include <iostream>
using namespace std;

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3] = {0};
    
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++) 
        {
            cout << "Enter value at position (" << i << ", " << j << "): ";
            cin >> arr1[i][j];
        }
    }


  cout << "Enter the elements of the second matrix:" << endl;
  
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << "Enter value at position (" << i << ", " << j << "): ";
            cin >> arr2[i][j];
        }
    }


    for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Resultant matrix:" << endl;
  
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
