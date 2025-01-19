class node<T> {
  value: T;
  next: node<T> | null;

  constructor(value: T) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList<T> {
  private head: node<T> | null;
  private size: number;

  constructor() {
    this.head = null;
    this.size = 0;
  }

  append(value: T): void {
    const newNode = new Node(value);
    if (this.head === null) {
      this.head = newNode;
    } else {
      let current = this.head;
      while (current.next !== null) {
        current = current.next;
      }
      current.next = newNode;
    }
    this.size++;
  }

  prepend(value: T): void {
    const newNode = new Node(value);
    newNode.next = this.head;
    this.head = newNode;
    this.size++;
  }

  remove(value: T): boolean {
    if (!this.head) {
      return false;
    }

    if (this.head.value === value) {
      this.head = this.head.next;
      this.size--;
      return true;
    }

    let current = this.head;
    while (current.next !== null && current.next.value !== value) {
      current = current.next;
    }

    if (current.next === null) {
      return false;
    }

    current.next = current.next.next;
    this.size--;
    return true;
  }

  find(value: T): node<T> | null {
    let current = this.head;
    while (current !== null) {
      if (current.value === value) {
        return current;
      }
      current = current.next;
    }
    return null;
  }

  getSize(): number {
    return this.size;
  }

  print(): void {
    let current = this.head;
    const values: T[] = [];
    while (current !== null) {
      values.push(current.value);
      current = current.next;
    }
    console.log(values.join(" -> "));
  }
}

// Example usage
const list = new LinkedList<number>();
list.append(10);
list.append(20);
list.append(30);
list.prepend(5);
list.print();
list.remove(20);
list.print();
console.log("Size:", list.getSize());
console.log("Find 10:", list.find(10));
