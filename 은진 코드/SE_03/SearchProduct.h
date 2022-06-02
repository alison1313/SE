#pragma once

#include <iostream>
#include <fstream>
#include "SearchProductUI.h"
#include "Buyer.h"
using namespace std;

// ��ǰ�˻� control
class SearchProduct {
private:
	SearchProductUI* boundaryClass;
	Buyer buyer;

public:
	SearchProduct();
	SearchProduct(ifstream& in, ofstream& out);
	~SearchProduct() { delete boundaryClass; };
	void searchProduct(string name);
	SearchProductUI* getBoundary() { return boundaryClass; };

};

