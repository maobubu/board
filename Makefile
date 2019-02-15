CC = g++
CFLAGS = -Wall --std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))
DEPS = TicTacToeClasses.hpp TicTacToeFunctions.hpp
EXE = boardgame

#%.o : %.cpp
#	$(CC) $(CFLAGS) $@ $<

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o boardgame

