#include "SearchProductUI.h"
#include "SearchProduct.h"

SearchProductUI::SearchProductUI(SearchProduct* control) {
    controlClass = control;

    //searchProduct(productName);
    //상품검색(hat);
};

void SearchProductUI::searchProduct(ifstream& in, ofstream& out) {
    
    string name;
    in >> name;

    controlClass->searchProduct(name);

    out << "4.1. 상품 정보 검색" << endl;
   // out << ">" << 





}