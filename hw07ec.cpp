//============================================================================
// Name        : hw07ec.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "hw07ec.h"

int main() {
	//Instantiate manage inventory obj
	ManageInventory * pinv = new ManageInventory(100);
	//Add 5 items to manage inventory obj
	pinv->addItem("Item1", 10, 25);
	pinv->addItem("Item2", 1, 250);
	pinv->addItem("Item3", 150, 5);
	pinv->addItem("Item4", 12, 22);
	pinv->addItem("Item5", 8, 45);

	return 0;
}
