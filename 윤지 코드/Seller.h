#pragma once
#include <iostream>
#include "User.h"
#include "ProductCollection.h"
using namespace std;

class Seller:public User
{
private:
	ProductCollection sellingProductCollection;
	ProductCollection soldProductCollection;

public:
	Seller();
	~Seller() {};
	void addNewProduct(string name, string companyName, int price, int quantity);
	void calculateStatistics();
};
