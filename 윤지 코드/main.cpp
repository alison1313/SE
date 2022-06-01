#define _CRT_SECURE_NO_WARNINGS

// 헤더 선언
#include "main.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();

void join();
void login();
void logout();
void destroy();

void addNewProduct();
void viewSellingProduct();
void viewSoldProduct();
void printStatistics();

void program_exit();

// 변수 선언
ifstream input;
ofstream output;

int main()
{
    // 파일 입출력을 위한 초기화
    input.open(INPUT_FILE_NAME);
    output.open(OUTPUT_FILE_NAME);

    doTask();

    input.close();
    output.close();

    return 0;
}



void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    AddNewProduct* addNewProductControl = new AddNewProduct();

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        //fscanf(in_fp, "%d %d ", menu_level_1, menu_level_2);
        input >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입“ 메뉴 부분
            {
                // join() 함수에서 해당 기능 수행 
                join();

                break;
            }
            case 2:
            {

                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 판매 의류 등록“ 메뉴 부분
            {
                // addNewProduct() 함수에서 해당 기능 수행 
                //addNewProduct();

                addNewProductControl->getBoundary()->insertInfo(input, output);
                break;
            }
            case 2: // "3.2. 등록 상품 조회“ 메뉴 부분
            {
                // viewSellingProduct() 함수에서 해당 기능 수행 
                viewSellingProduct();
                break;
            }
            case 3: // "3.3. 판매 완료 상품 조회“ 메뉴 부분
            {
                // viewSoldProduct() 함수에서 해당 기능 수행 
                viewSoldProduct();
                break;
            }
            default:
                break;
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:// "5.1. 판매 상품 통계“ 메뉴 부분
            {
                // printStatistics() 함수에서 해당 기능 수행 
                printStatistics();
                break;
            }
            default:
                break;
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
            {

                program_exit();
                is_program_exit = 1;
                delete addNewProductControl;
                break;
            }
            }
            break;
        }

        }

    }
    return;
}

void join()
{

}

void addNewProduct()
{

    AddNewProduct* addNewProduct = new AddNewProduct();
    addNewProduct->getBoundary()->insertInfo(input, output);

}

void viewSellingProduct()
{

}

void viewSoldProduct()
{

}

void printStatistics()
{

}

void program_exit()
{
            
}
