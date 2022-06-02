#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
    string productName;
    string productCompanyName;
    int productPrice;
    int productTotalQuantity;
    int productQuantityLeft;
    int productSatisfaction;
    //string productSellerID;

public:
    Product();
    Product(string name, string companyName, int price, int quantity);
    ~Product() {};

    string getProductDetails();
    void updateSatisfaction();
};