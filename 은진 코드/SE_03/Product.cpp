#include "Product.h"

Product::Product()
{
	productName = "";
	productCompanyName = "";
	productPrice = 0;
	productTotalQuantity = 0;
	productQuantityLeft = 0;
	productSatisfaction = 0;
}

Product::Product(string name, string companyName, int price, int quantity)
{
	productName = name;
	productCompanyName = companyName;
	productPrice = price;
	productTotalQuantity = quantity;
	productQuantityLeft = quantity;
	productSatisfaction = 0;
}

string Product::getProductDetails()
{
	return productName;
}
void Product::updateSatisfaction()
{

}