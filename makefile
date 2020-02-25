CC = g++
Flags = -std=c++14 - Wall - g
OBJS = 

all: hw07ec

hw07ec: hw07ec.cpp ManageInventory.o
	$(CC)$(FLAGS)hw07ec.cpp -o hw07ec $(OBJS)
	
ManageInventory.o: ManageInventory.cpp ManageInventory.h
	$(CC)$(FLAGS) -c ManageInventory.cpp -o ManageInventory.o

clean:
	rm*.o hw07ec hw07ec.tar

tar:
	tar cf hw07ec.tar hw07ec.scr makefile hw07ec.cpp
