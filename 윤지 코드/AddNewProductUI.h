#pragma once
#include <iostream>
class AddNewProduct;
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
    void insertInfo(ifstream& in, ofstream& out);
};