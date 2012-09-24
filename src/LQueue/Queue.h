#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <list>

class Queue {
  private:
    std::list<int>* q;
 
  public:
    Queue();
    ~Queue();
    void enqueue(int value);
    int dequeue(); 
    bool isEmpty();
};

#endif
