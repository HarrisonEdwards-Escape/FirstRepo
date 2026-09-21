#include "Inventory.h"
#include "Item.h"

int SlotsUsed(int items)
{
	return items;
}

int SlotsFree(int items)
{
	return 10 - items;
}

int TotalWeight(int itemCount);