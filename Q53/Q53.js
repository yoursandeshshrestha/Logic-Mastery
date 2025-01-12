// linked list in js .

function Node(value) {
  this.value = value;
  this.next = null;
}

function append(head, value) {
  const newNode = new Node(value);
  if (!head) {
    return newNode;
  }
  let current = head;
  while (current.next) {
    current = current.next;
  }
  current.next = newNode;
  return head;
}

function print(head) {
  let current = head;
  while (current) {
    console.log(current.value);
    current = current.next;
  }
}
