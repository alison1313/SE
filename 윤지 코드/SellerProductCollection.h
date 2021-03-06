#pragma once
#include <iostream>
#include "Product.h"
using namespace std;

#define MAX 20

class SellerProductCollection
{
private:
    int productCount;
    Product ownedProduct[MAX];
    SellerProductCollection* next;

public:
    SellerProductCollection();
    ~SellerProductCollection() {};

    void addProduct(string name, string companyName, int price, int quantity);
    void removeProduct(string name);
    void setNext(SellerProductCollection* pt) { next = pt; };
    SellerProductCollection* getNext() { return next; };
};