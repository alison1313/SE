#pragma once
#include <iostream>
#include "Buyer.h"
#include "BuyerProductCollection.h"
#include <string>
using namespace std;

class SearchProductUI;
class BuyerProductCollection;

class Buyer
{private:
	//Product* purchasedProductList;
	BuyerProductCollection buyingproductCollection;
	BuyerProductCollection bouhtproductCollection;

public:
	void searchProduct(string productName);
	void listPurchased();
	void purchaseProduct();
	void saveSatisfaction();

	
};


