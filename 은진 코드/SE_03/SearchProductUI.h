#pragma once
#include <iostream>
class SearchProduct;
using namespace std;

// ��ǰ�˻� boundary

class SearchProductUI {
private:
	SearchProduct* controlClass;

public:
	SearchProductUI() {};
	SearchProductUI(SearchProduct* controlClass);
	~SearchProductUI() {};

	void searchProduct(ifstream& in, ofstream& out);
};

