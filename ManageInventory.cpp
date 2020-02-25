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
//ManageInventory copy constructor
ManageInventory::ManageInventory(const ManageInventory& source){
	size = source.size;
	count = 0;
	p_pInventoryItems = new Item*[size];
	//Loop through each value in the original's array in order to make a deep copy
	for(int i = 0; i < source.count; i++){
		p_pInventoryItems[i] = new Item();
		p_pInventoryItems[i]->name = source.p_pInventoryItems[i]->name;
		p_pInventoryItems[i]->quantity = source.p_pInventoryItems[i]->quantity;
		p_pInventoryItems[i]->cost = source.p_pInventoryItems[i]->cost;
		count++;
	}
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
