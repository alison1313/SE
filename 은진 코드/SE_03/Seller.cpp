#include "Seller.h"

Seller::Seller()
{

}


void Seller::addNewProduct(string name, string companyName, int price, int quantity)
{
	sellingProductCollection->addProduct(name, companyName, price, quantity);
}

void Seller::calculateStatistics()
{

}