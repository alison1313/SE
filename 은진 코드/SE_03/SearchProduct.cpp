#include "SearchProduct.h"



SearchProduct::SearchProduct(){
    SearchProductUI* boundary = new SearchProductUI(this);
    boundaryClass = boundary;

    //this->boundaryClass = & SearchProductUI(this);
    /*SearchProductUI boundaryref = SearchProductUI(this);
    this->boundary = &boundaryref;*/
}

SearchProduct::SearchProduct(ifstream& in, ofstream& out) {
    SearchProductUI* boundary = new SearchProductUI(this);
    boundaryClass = boundary;

    //SearchProductUI boundaryClass(this);
    /*SearchProductUI boundaryClass = SearchProductUI(this);
    this->boundary = &boundaryClass;*/

    boundaryClass->searchProduct(in, out);
}

void SearchProduct::searchProduct(string name) {
    buyer.searchProduct(name);
}
