#include "SearchProductUI.h"
#include "SearchProduct.h"

SearchProductUI::SearchProductUI(SearchProduct* control) {
    controlClass = control;

    //searchProduct(productName);
    //��ǰ�˻�(hat);
};

void SearchProductUI::searchProduct(ifstream& in, ofstream& out) {
    
    string name;
    in >> name;

    controlClass->searchProduct(name);

    out << "4.1. ��ǰ ���� �˻�" << endl;
   // out << ">" << 





}