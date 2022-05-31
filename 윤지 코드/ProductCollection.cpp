#include "ProductCollection.h"

ProductCollection::ProductCollection()
{
	productCount = 0;
}


void ProductCollection::addProduct(string name, string companyName, int price, int quantity)
{
	Product newProduct(name, companyName, price, quantity);
	ownedProduct[productCount] = newProduct;
	productCount++;
	//cout << ownedProduct[productCount-1].getProductDetails() << endl;
}
void ProductCollection::removeProduct(string name)
{
	productCount--;
}