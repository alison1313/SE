#pragma once
#include <iostream>
#include <fstream>
#include "AddNewProductUI.h"
#include "Seller.h"
using namespace std;

class AddNewProduct
{
private:
    AddNewProductUI boundaryClass;
    Seller sellerUser;
public:
    AddNewProduct();
    AddNewProduct(ifstream& in, ofstream& out);
    ~AddNewProduct() {};
    void addNewProduct(string name, string companyName, int price, int quantity);
};

