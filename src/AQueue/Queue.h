#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
  private:
    int front;
    int back;
    int size;
    int capacity;
    int* theQueue;
    void resize();

  public:
    Queue();
    ~Queue();
    void enqueue(int value);
    int dequeue();
    int queueSize();
    bool isEmpty();
};

#endif
