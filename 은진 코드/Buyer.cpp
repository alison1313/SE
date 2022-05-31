#include "Buyer.h"

SearchProduct::SearchProduct() {

    SearchProductUI boundaryref = SearchProductUI(this);
    this->boundary = &boundaryref;

 };

         
SearchProductUI::SearchProductUI(SearchProduct* pr) {
    this->controller = pr;

    //searchProduct(productName);
    //상품검색(hat);
 };
