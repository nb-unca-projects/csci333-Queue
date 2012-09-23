BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src
TYPE = /LQueue

CPP = g++
CPPFLAGS = -Wall -Wextra

all: $(BUILD)/main $(TEST)/queue_test

$(BUILD)/main: $(SRC)$(TYPE)/Queue.cpp $(SRC)$(TYPE)/Queue.o
	cd $(SRC); $(MAKE)

$(TEST)/queue_test: $(TEST)/Queue.cpp $(SRC)$(TYPE)/Queue.o
	cd $(TEST); $(MAKE)

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean

