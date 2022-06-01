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
ifstream input;
ofstream output;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
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

    AddNewProduct* addNewProductControl = new AddNewProduct();

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
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. �Ǹ� �Ƿ� ��ϡ� �޴� �κ�
            {
                // addNewProduct() �Լ����� �ش� ��� ���� 
                //addNewProduct();

                addNewProductControl->getBoundary()->insertInfo(input, output);
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
            break;
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
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
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
