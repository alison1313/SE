#include "AddNewProductUI.h"
#include "AddNewProduct.h"
#include "SellerProductCollection.h"

AddNewProductUI::AddNewProductUI(AddNewProduct* control) {
	controlClass = control;
}
void AddNewProductUI::startInterface() {

}

SellerProductCollection*  AddNewProductUI::insertInfo(ifstream& in, ofstream& out) {
	string name, companyName;
	int price, quantity;
	in >> name >> companyName >> price >> quantity;

	out << "3.1 판매 의류 등록" << endl;
	out << "> " << name << " " << companyName << " " << price << " " << quantity << endl;

	return controlClass->addNewProduct(name, companyName, price, quantity);
}