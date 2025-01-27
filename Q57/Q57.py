import heapq

pq = []

heapq.heappush(pq, 30)
heapq.heappush(pq, 10)
heapq.heappush(pq, 20)

print("Priority Queue (Min-Heap):", end=" ")
while pq:
    print(heapq.heappop(pq), end=" ")
