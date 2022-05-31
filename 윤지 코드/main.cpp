#define _CRT_SECURE_NO_WARNINGS

// ��� ����
#include "main.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
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

// ���� ����
// FILE* in_fp, * out_fp;
ifstream input;
ofstream output;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    /*FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");*/
    input.open(INPUT_FILE_NAME);
    output.open(OUTPUT_FILE_NAME);

    doTask();

    input.close();
    output.close();

    return 0;
}



void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;


    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        //fscanf(in_fp, "%d %d ", menu_level_1, menu_level_2);
        input >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                // join() �Լ����� �ش� ��� ���� 
                join();

                break;
            }
            case 2:
            {

                break;
            }
            }
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. �Ǹ� �Ƿ� ��ϡ� �޴� �κ�
            {
                // addNewProduct() �Լ����� �ش� ��� ���� 
                addNewProduct();
                break;
            }
            case 2: // "3.2. ��� ��ǰ ��ȸ�� �޴� �κ�
            {
                // viewSellingProduct() �Լ����� �ش� ��� ���� 
                viewSellingProduct();
                break;
            }
            case 3: // "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ�� �޴� �κ�
            {
                // viewSoldProduct() �Լ����� �ش� ��� ���� 
                viewSoldProduct();
                break;
            }
            default:
                break;
            }
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:// "5.1. �Ǹ� ��ǰ ��衰 �޴� �κ�
            {
                // printStatistics() �Լ����� �ش� ��� ���� 
                printStatistics();
                break;
            }
            default:
                break;
            }
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {

                program_exit();
                is_program_exit = 1;
                break;
            }
            }
        }

        }

    }
    return;
}

void join()
{
    char userType[MAX_STRING], name[MAX_STRING], SSN [MAX_STRING],
        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    // fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);

    // �ش� ��� ����  
            

    // ��� ����
    // fprintf(out_fp, "1.1. ȸ������\n");
    // fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

void addNewProduct()
{
    //char productName[MAX_STRING], productCompanyName[MAX_STRING];
    //int productPrice, productQunatity;

    // �Է� ���� : ��ǰ��, ����ȸ���, ����, ������ ���Ϸκ��� ����
    //fscanf(in_fp, "%s %s %d %d", productName, productCompanyName, productPrice, productQunatity);

    AddNewProduct controlClass(input, output);

    //addNewProductUI.insertInfo(in_fp);


    // �ش� ��� ����  


    // ��� ����
    //fprintf(out_fp, "3.1. �Ǹ� �Ƿ� ���\n");
    //fprintf(out_fp, "%s %s %d %d\n", productName, productCompanyName, productPrice, productQunatity);
}

void viewSellingProduct()
{
    char productName[MAX_STRING], productCompanyName[MAX_STRING];
    int productPrice, productQunatity;

    // �ش� ��� ����  


    // ��� ����
    // fprintf(out_fp, "3.2. ��� ��ǰ ��ȸ\n");

//    fprintf(out_fp, "%s %s %d %d\n", productName, productCompanyName, productPrice, productQunatity);
}

void viewSoldProduct()
{
    char productName[MAX_STRING], productCompanyName[MAX_STRING];
    int productPrice, productQunatity;

    // �ش� ��� ����  


    // ��� ����
    // fprintf(out_fp, "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ\n");

//    fprintf(out_fp, "%s %s %d %d\n", productName, productCompanyName, productPrice, productQunatity);
}

void printStatistics()
{
    char productName[MAX_STRING];
    int productPrice, productQunatity;

    // �ش� ��� ����  


        // ��� ����
    // fprintf(out_fp, "5.1. �Ǹ� ��ǰ ���\n");

//    fprintf(out_fp, "%s %d %d\n", productName, productPrice, productQunatity);
}

void program_exit()
{
            
}
