#include "Buyer.h"

SearchProduct::SearchProduct() {

    SearchProductUI boundaryref = SearchProductUI(this);
    this->boundary = &boundaryref;

 };

         
SearchProductUI::SearchProductUI(SearchProduct* pr) {
    this->controller = pr;

    //searchProduct(productName);
    //��ǰ�˻�(hat);
 };
