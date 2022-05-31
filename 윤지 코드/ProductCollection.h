#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

#define MAX 20

class ProductCollection
{
private:
    int productCount;
    Product ownedProduct[MAX];

public:
    ProductCollection();
    ~ProductCollection() {};

    void addProduct(string name, string companyName, int price, int quantity);
    void removeProduct(string name);
};