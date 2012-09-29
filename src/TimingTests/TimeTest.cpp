#include <iostream>
#include <ctime>
#include "../AQueue/Queue.h"

int main() {
  int start, end, elapsed;
  double seconds;

  start = clock();

  Queue* q = new Queue();
  for(int i=1; i<9999999; ++i) {
    q->enqueue(i);
  }
  for(int j=1; j<9999999; ++j) {
    q->dequeue();
  }

  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;

  std::cout << "elapsed time: " << seconds << " seconds " << std::endl;
}
