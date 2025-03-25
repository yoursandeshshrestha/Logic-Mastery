#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    unordered_map<int, int> frequency;
    for (int num : arr) 
    {
        frequency[num]++;
    }

    int max_count = 0, most_frequent;
    for (auto &pair : frequency) 
    {
        if (pair.second > max_count) {
            max_count = pair.second;
            most_frequent = pair.first;
        }
    }

    cout << "The most frequent element is " << most_frequent 
         << " and it appears " << max_count << " times.\n";

    return 0;
}
