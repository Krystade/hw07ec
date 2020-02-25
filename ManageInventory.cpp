/*
 * ManageInventory.cpp
 *
 *  Created on: Feb 24, 2020
 *      Author: Jack
 */
#include "ManageInventory.h"


//Default ManageInventory constructor
ManageInventory::ManageInventory(){
	size = MAX_SIZE;
	count = 0;
	p_pInventoryItems = new Item*[size];
}
//Overloaded ManageInventory constructor
ManageInventory::ManageInventory(int size){
	this->size = size;
	count = 0;
	p_pInventoryItems = new Item*[size];
}
//ManageInventory destructor
ManageInventory::~ManageInventory(){
	for(int i = 0; i < size; i++){
		delete p_pInventoryItems[i];
	}
	delete[] p_pInventoryItems;
}
//Function to add a new Item into the p_pInventoryItems array
void ManageInventory::addItem(string name, int quantity, float cost){
	p_pInventoryItems[count] = new Item();
	p_pInventoryItems[count]->name = name;
	p_pInventoryItems[count]->quantity = quantity;
	p_pInventoryItems[count]->cost = cost;
	count++;
}
