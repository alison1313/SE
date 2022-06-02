// 헤더 선언
#define _CRT_SECURE_NO_WARNINGS
#include "main.h"
#include <string.h>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
char Member_Name[MAX_STRING], Member_SSN[MAX_STRING], Member_Address[MAX_STRING], Member_ID[MAX_STRING], Member_password[MAX_STRING];
char name[MAX_STRING], SSN[MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

// 함수 선언
void doTask();
void addNewProduct();
void viewSellingProduct();
void viewSoldProduct();
void printStatistics();

//void program_exit();

class User {
    string UserID;
    string password;
    string userName;
    string userSecurityNumber;
public:
    User() {};
    ~User() {};
};


class Member {
    Member* Member;
public:
    void join(ifstream& fin, ofstream&fout);
    void destroy(ifstream& fin, ofstream& fout);
    void login(ifstream& fin, ofstream& fout);
    //void logout(ifstream& fin, ofstream& fout);
    char Member_Name[1000];
    char Member_SSN[1000];
    char Member_Address[1000];
    char Member_ID[1000];
    char Member_password[1000];
    class Member* next;
};
Member* FirstMember = NULL;
Member* temp;
Member* makenode()
{
    Member* tmp = (Member*)malloc(sizeof(Member));
    tmp->next = NULL;
    return tmp;
}


class AddMember {
public:
    AddMember(Member** head, char Member_Name[], char Member_SSN[], char Member_ID[], char Member_password[]);
};
AddMember::AddMember(Member** head, char Member_Name[], char Member_SSN[], char Member_ID[], char Member_password[]) {
    if (!*head) {
        *head = makenode();
        strcpy((*head)->Member_Name, Member_Name);
        strcpy((*head)->Member_SSN, Member_SSN);
        strcpy((*head)->Member_ID, Member_ID);
        strcpy((*head)->Member_password, Member_password);
        return;
    }
    AddMember(&(*head)->next, Member_Name, Member_SSN, Member_ID, Member_password);
}
class DeleteMember {
public:
    DeleteMember(char Member_ID[]);
 
};
DeleteMember:: DeleteMember(char Member_ID[]) {
    int i;
    Member* temp;
    Member* prev;
    temp = FirstMember;
    prev = FirstMember;
    if (strcmp(temp->Member_ID, Member_ID) == 0) {
        FirstMember = temp->next;
        free(temp);
    }
    else {
        for (i = 0; strcmp(temp->Member_ID, Member_ID) != 0; ++i) {
            temp = temp->next;
            if (i != 0) {
                prev = prev->next;
            }
            if (i == 1) {
                prev = FirstMember;
            }
        }
        prev->next = temp->next;
        free(temp);
    }
}
class Login {
public:
    Login(char Member_ID[], char Member_password[]);
};
Login:: Login(char Member_ID[], char Member_password[]) {
    int i;

    temp = FirstMember;
    if ((strcmp(temp->Member_ID, Member_ID) == 0) & (strcmp(temp->Member_password, Member_password) == 0)) {
        printf("login 완료");
    }
    else {
        for (i = 0; ((strcmp(temp->Member_ID, Member_ID) != 0) || (strcmp(temp->Member_password, Member_password) != 0)); ++i) {
            temp = temp->next;
            if ((strcmp(temp->Member_ID, Member_ID) == 0) & (strcmp(temp->Member_password, Member_password) == 0)) {
                printf("login 완료");
            }

        }

    }

}
/*class Logout {
public:
    Logout(char Member_ID[]);
};
Logout::Logout(char Member_ID[]) {

}*/
void Member::join(ifstream& fin, ofstream& fout) {
    fin >> name;
    fin >> SSN;
    fin >> ID;
    fin >> password;
    strcpy(Member_Name, name);
    strcpy(Member_SSN, SSN);
    strcpy(Member_ID, ID);
    strcpy(Member_password, password);
    AddMember AddMember(&FirstMember, Member_Name, Member_SSN, Member_ID, Member_password);
    fout << "1.1 회원가입\n";
    fout << Member_Name << ' ';
    fout << Member_SSN << ' ';
    fout << Member_ID << ' ';
    fout << Member_password << '\n';
    return;
}

void Member::destroy(ifstream& fin, ofstream& fout) {
    printf("%s", Member_ID);
    fout << "1.2 회원탈퇴\n";
    fout << ID << "\n";
    DeleteMember DeleteMember(Member_ID);
    temp = FirstMember;
    for (int i = 1; temp != NULL; ++i) {
        printf("-------");
        printf("Name: %s \n", temp->Member_Name);
        printf("SSN %s \n", temp->Member_SSN);
        printf("ID %s \n", temp->Member_ID);
        printf("password %s \n", temp->Member_password);
        temp = temp->next;
    }
}

void Member::login(ifstream& fin, ofstream& fout) {
    printf("로그인");
    fin >> ID;
    fin >> password;
    strcpy(Member_ID, ID);
    strcpy(Member_password, password);
    Login(Member_ID, Member_password);
    fout << "2.1 로그인\n";
    fout << ID << " " << password << '\n';
    /*break;
    printf("로그인 완료\n");
    break;*/
    temp = FirstMember;
    for (int i = 1; temp != NULL; ++i) {
        printf("-------");
        printf("Name: %s \n", temp->Member_Name);
        printf("SSN %s \n", temp->Member_SSN);
        printf("ID %s \n", temp->Member_ID);
        printf("password %s \n", temp->Member_password);
        temp = temp->next;
    }
}
// 변수 선언
ifstream fin;
ofstream fout;


int main()
{
    // 파일 입출력을 위한 초기화
    fin.open(INPUT_FILE_NAME);
    fout.open(OUTPUT_FILE_NAME);

    doTask();

    fin.close();
    fout.close();

    return 0;
}






void doTask()
{


    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    AddNewProduct* addNewProductControl = new AddNewProduct();
    SellerProductCollection* sellingProductList = new SellerProductCollection();

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fin >> menu_level_1;
        fin >> menu_level_2;
        printf("%d %d", menu_level_1, menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입“ 메뉴 부분
                Member memb;
                memb.join(fin, fout);
                // join() 함수에서 해당 기능 수행 
                break;
            case 2:
                memb.destroy(fin, fout);
                
                break;
            }
            break;
        case 2: {
            switch (menu_level_2)
            {
            case 1: {
                Member memb;
                memb.login(fin, fout);
                break;
            }
            case 2:
                temp = FirstMember;
                for (int i = 1; temp != NULL; ++i) {
                    printf("-------");
                    printf("Name: %s \n", temp->Member_Name);
                    printf("SSN %s \n", temp->Member_SSN);
                    printf("ID %s \n", temp->Member_ID);
                    printf("password %s \n", temp->Member_password);
                    temp = temp->next;

                }
                break;
            }
        }
        case 3:
            switch (menu_level_2)
            {
            case 1:
                sellingProductList->setNext(addNewProductControl->getBoundary()->insertInfo(fin, fout));
                break;
            case 2:
                return;

            }
            break;
        }
    }
  
}



    //  void program_exit()
 //       {
  //          return 0;
 //       }