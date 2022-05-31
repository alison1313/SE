#pragma once
#include <string>
using namespace std;

class SearchProductUI;
class BuyerProductCollection;

class Buyer
{private:
	//Product* purchasedProductList;
	BuyerProductCollection* buyingproductCollection;
	BuyerProductCollection* bouhtproductCollection;

public:
	//void searchProduct(string productName);
	void listPurchased();
	void purchaseProduct();
	void saveSatisfaction();
};

class BuyerProductCollection {
private:
	//Product
};
class Product {
private:
	//string productName = "";
};


// ��ǰ�˻� control
class SearchProduct {
private:
	SearchProductUI* boundary;

public:
	SearchProduct();
	void showProduct();

};

// ��ǰ�˻� boundary
class SearchProductUI {
private:
	SearchProduct* controller;

public:
	SearchProductUI(SearchProduct* controller);
	void searchProduct(string productName);
};