/*
 * ManageInventory.cpp
 *
 *  Created on: Feb 24, 2020
 *      Author: Jack
 */
#include "hw07ec.h"
#include "ManageInventory.h"

ManageInventory::~ManageInventory(){
	for(int i = 0; i < size; i++){
		delete p_pInventoryItems[i];
	}
	delete[] p_pInventoryItems;
}
void ManageInventory::addItem(string name, int quantity, float cost){
	count++;
	if(count < size){
		p_pInventoryItems[count] = new Item();
	}
}
