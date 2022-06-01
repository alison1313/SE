#include "AddNewProduct.h"

AddNewProduct::AddNewProduct() {
	AddNewProductUI* boundary = new AddNewProductUI(this);
	//ddNewProductUI boundary(this);
	boundaryClass = boundary;
}

AddNewProduct::AddNewProduct(ifstream& in, ofstream& out) {
	//AddNewProductUI boundaryClass(this);
	AddNewProductUI* boundary = new AddNewProductUI(this);
	//AddNewProductUI boundary(this);
	boundaryClass = boundary;
	boundaryClass->insertInfo(in, out);
}

SellerProductCollection* AddNewProduct::addNewProduct(string name, string companyName, int price, int quantity) {
	sellerUser.addNewProduct(name, companyName, price, quantity);
	return sellerUser.getSellingCollection();
}