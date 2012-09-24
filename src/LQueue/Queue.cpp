#include "Queue.h"
#include <list>
#include <assert.h>

using namespace std;

Queue::Queue() {
  q = new list<int>;
}

Queue::~Queue(){
  
}

void Queue::enqueue(int value) {
  q->push_back(value);
}

int Queue::dequeue() {
  assert(!q->empty());
  int temp;
  temp = q->front();
  q->pop_front();
  return temp;
}

bool Queue::isEmpty() {
  return q->empty();
}
