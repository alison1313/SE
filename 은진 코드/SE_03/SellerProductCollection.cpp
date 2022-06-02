#include "SellerProductCollection.h"

SellerProductCollection::SellerProductCollection()
{
	productCount = 0;
	next = NULL;
}


void SellerProductCollection::addProduct(string name, string companyName, int price, int quantity)
{
	Product newProduct(name, companyName, price, quantity);
	ownedProduct[productCount] = newProduct;

	//ownedProduct[productCount] = Product newProduct(name, companyName, price, quantity);

	
	productCount++;
	//cout << ownedProduct[productCount-1].getProductDetails() << endl;
}
void SellerProductCollection::removeProduct(string name)
{
	productCount--;
}