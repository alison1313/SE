#pragma once
#include <iostream>
#include "SellerProductCollection.h"
using namespace std;

class Seller
{
private:
	SellerProductCollection* sellingProductCollection;
	SellerProductCollection* soldProductCollection;

public:
	Seller();
	~Seller() {};
	void addNewProduct(string name, string companyName, int price, int quantity);
	void calculateStatistics();
	SellerProductCollection* getSellingCollection() { return sellingProductCollection; };
};
