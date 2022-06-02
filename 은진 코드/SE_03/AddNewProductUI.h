#pragma once
#include <iostream>
class AddNewProduct;
class SellerProductCollection;
using namespace std;

class AddNewProductUI
{
private:
    AddNewProduct* controlClass;
public:
    AddNewProductUI() {};
    AddNewProductUI(AddNewProduct* controlClass);
    ~AddNewProductUI() {};
    void startInterface();
    SellerProductCollection* insertInfo(ifstream& in, ofstream& out);
};