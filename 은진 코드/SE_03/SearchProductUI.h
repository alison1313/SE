#pragma once
#include <iostream>
class SearchProduct;
using namespace std;

// 상품검색 boundary

class SearchProductUI {
private:
	SearchProduct* controlClass;

public:
	SearchProductUI() {};
	SearchProductUI(SearchProduct* controlClass);
	~SearchProductUI() {};

	void searchProduct(ifstream& in, ofstream& out);
};

