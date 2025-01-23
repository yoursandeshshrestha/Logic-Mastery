class PriorityQueue 
{
    constructor() 
  {
        this.queue = [];
    }

    enqueue(value) 
  {
        this.queue.push(value);
        this.queue.sort((a, b) => a - b); 
    }

    dequeue() 
  {
        if (this.isEmpty()) 
        {
            console.log("Queue is empty!");
            return null;
        }
        return this.queue.shift();
    }

    isEmpty() 
  {
        return this.queue.length === 0;
    }

    display() 
  {
        console.log("Priority Queue:", this.queue);
    }
}

const pq = new PriorityQueue();
pq.enqueue(30);
pq.enqueue(10);
pq.enqueue(20);

pq.display();

console.log("Dequeued:", pq.dequeue());
pq.display();
