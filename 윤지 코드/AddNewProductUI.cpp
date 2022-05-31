#include "AddNewProductUI.h"
#include "AddNewProduct.h"

AddNewProductUI::AddNewProductUI(AddNewProduct* control) {
	this->controlClass = control;
}
void AddNewProductUI::startInterface() {

}

void AddNewProductUI::insertInfo(ifstream& in, ofstream& out) {
	string name, companyName;
	int price, quantity;
	in >> name >> companyName >> price >> quantity;

	controlClass->addNewProduct(name, companyName, price, quantity);

	out << "3.1 �Ǹ� �Ƿ� ���" << endl;
	out << "> " << name << " " << companyName << " " << price << " " << quantity << endl;
}