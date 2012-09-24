BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra
SRC = ./LQueue

Queue.o: $(SRC)/Queue.h $(SRC)/Queue.cpp
	$(CPP) $(CPPFLAGS) -c $(SRC)/Queue.cpp

clean:
	rm -f $(SRC)/*.o
	rm -f *.o
	rm -f *~
