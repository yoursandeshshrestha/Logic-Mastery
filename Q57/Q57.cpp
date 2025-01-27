#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(30);
    pq.push(10);
    pq.push(20);

    cout << "Priority Queue (Min-Heap): ";
    while (!pq.empty()) 
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
