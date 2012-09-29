#ifndef __QUEUE_H__
#define __QUEUE_H__

class Node {
  private:
    int value;
    Node* next;
  public:
    Node();
    void setNext(Node* n);
    void setValue(int v);
    int getValue();
    Node* getNext();
};

class Queue {
  private:
    Node* front;
    int size;
    Node* back;

  public:
    Queue();
    ~Queue();
    void enqueue(int value);
    int dequeue();
    int queueSize();
    bool isEmpty();  
};

#endif
