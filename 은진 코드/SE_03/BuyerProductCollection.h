#pragma once
#include <iostream>
#include "Product.h"

using namespace std;

#define MAX 20

class BuyerProductCollection
{
private:
    // 구매자
    Product buyerProduct;   // 검색, 구매하려는 상품
    Product purchasedProduct[MAX];
    //SellerProductCollection* spc;

public:
    BuyerProductCollection();
    //BuyerProductCollection(SellerProductCollection sellingProductList);
    ~BuyerProductCollection() {};

   
    void searchProduct(string name);
};


