#include "AddNewProduct.h"

AddNewProduct::AddNewProduct() {
	AddNewProductUI boundaryClass(this);
}

AddNewProduct::AddNewProduct(ifstream& in, ofstream& out) {
	AddNewProductUI boundaryClass(this);
	boundaryClass.insertInfo(in, out);
}

void AddNewProduct::addNewProduct(string name, string companyName, int price, int quantity) {
	sellerUser.addNewProduct(name, companyName, price, quantity);
}