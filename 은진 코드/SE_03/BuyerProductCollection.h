#pragma once
#include <iostream>
#include "Product.h"

using namespace std;

#define MAX 20

class BuyerProductCollection
{
private:
    // ������
    Product buyerProduct;   // �˻�, �����Ϸ��� ��ǰ
    Product purchasedProduct[MAX];
    //SellerProductCollection* spc;

public:
    BuyerProductCollection();
    //BuyerProductCollection(SellerProductCollection sellingProductList);
    ~BuyerProductCollection() {};

   
    void searchProduct(string name);
};


