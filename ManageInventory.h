/*
 * ManageInventory.h
 *
 *  Created on: Feb 24, 2020
 *      Author: Jack
 */

#ifndef MANAGEINVENTORY_H_
#define MANAGEINVENTORY_H_

struct Item
{
	string name;
	int quantity;
	float cost;
};

const int MAX_SIZE = 50;

class ManageInventory{
	public:
	ManageInventory();
	ManageInventory(int size);
	~ManageInventory();
	void addItem(string name, int quantity, float cost);

	private:
	int size = MAX_SIZE;
	int count;
	Item ** p_pInventoryItems;
};

#endif /* MANAGEINVENTORY_H_ */
