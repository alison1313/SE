#include <iostream>
#include <fstream>
#include "Buyer.h"
#include "SearchProduct.h"
#include "SearchProductUI.h"
#include "AddNewProduct.h"
#include "AddNewProductUI.h"


using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
//FILE* in_fp, * out_fp;

string searchProductName;
ifstream input(INPUT_FILE_NAME);
ofstream output(OUTPUT_FILE_NAME);

string productName;
//SellerProductCollection* sellingProductList = new SellerProductCollection();

int main()
{ // 파일 입출력을 위한 초기화
    //FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
   // FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
    
        doTask();
    
        input.close();
        output.close();

        return 0;
}


void doTask()
{ // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    string name;

    // fin.open(INPUT_FILE_NAME);
     //fout.open(OUTPUT_FILE_NAME);

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        //fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        input >> menu_level_1;
        input >> menu_level_2;
        //fin >> productName;

        AddNewProduct* addNewProductControl = new AddNewProduct();
      
        SellerProductCollection* sellingProductList = new SellerProductCollection();
       
        //BuyerProductCollection BPC = new BuyerProductCollection(sellingProductList);
        SearchProduct* searchProductControl = new SearchProduct();

        // cout << menu_level_1 << " " << menu_level_2 << endl;  // 숫자 1,2 읽음
        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 판매 의류 등록“ 메뉴 부분
            {
                // addNewProduct() 함수에서 해당 기능 수행 
                //addNewProduct();

                sellingProductList->setNext(addNewProductControl->getBoundary()->insertInfo(input, output));
                break;
            }
            case 2: // "3.2. 등록 상품 조회“ 메뉴 부분
            {
                // viewSellingProduct() 함수에서 해당 기능 수행 
               // viewSellingProduct();
                break;
            }
            case 3: // "3.3. 판매 완료 상품 조회“ 메뉴 부분
            {
                // viewSoldProduct() 함수에서 해당 기능 수행 
               // viewSoldProduct();
                break;
            }
            default:
                break;
            }
            break;
        }
            case 4:
            {
                switch (menu_level_2)
                {
                    case 1: // "4.1. 상품검색“ 메뉴 부분
                    { 
                        
                        cout << menu_level_1 << " " << menu_level_2 << " " << searchProductName << endl;

                      //output << menu_level_1 << " " << menu_level_2 << " " << searchProductName << endl;
                        
                        // 검색하기 함수
                       // searchProduct(); // 컨트롤은 기능 = 이름

                       searchProductControl->getBoundary()->searchProduct(input, output);
                        break;
                    }
                    case 2:
                    {


                        break;
                    }
                    case 3:
                    {

                        break;
                    }
           
                }
            }
            case 6:
            {
                break;
            }
        }

        




        //void join()
        //{
        //    char user_type[MAX_STRING], name[MAX_STRING], SSN [[MAX_STRING],
        //        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
        //    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
        //    //fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
        //    // 해당 기능 수행 
        //    //...
        //        // 출력 형식
        //       // fprintf(out_fp, "1.1. 회원가입\n"); fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
        //}
        //void program_exit()
        //{
        //    ....
        //}
    }
}

void searchProduct() {

    SearchProduct controlClass(input, output);
}


