// ��� ����
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
char Member_Name[MAX_STRING], Member_SSN[MAX_STRING], Member_Address[MAX_STRING], Member_ID[MAX_STRING], Member_password[MAX_STRING];
char name[MAX_STRING], SSN[MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];
// �Լ� ����
//void doTask();
void join();
//void program_exit();

typedef struct Member {
    char Member_Name[1000];
    char Member_SSN[1000];
    char Member_Address[1000];
    char Member_ID[1000];
    char Member_password[1000];
    struct Member* next;
}Member;

Member* FirstMember = NULL;

Member* makenode()
{
    Member* tmp = (Member*)malloc(sizeof(Member));
    tmp->next = NULL;
    return tmp;
}

void AddMember(Member** head, char Member_Name[], char Member_SSN[], char Member_ID[], char Member_password[]) {
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

void DeleteMember(char Member_Name[]) {
    int i;
    Member* temp;
    Member* prev;
    temp = FirstMember;
    if (strcmp(temp->Member_Name, Member_Name) == 0) {
        FirstMember = temp->next;
        free(temp);
    }
    else {
        for (i = 0; strcmp(temp->Member_Name, Member_Name) != 0; ++i) {
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
void Login(char Member_ID[], char Member_password[]) {
    int i;
    Member* temp;
    Member* prev;
    temp = FirstMember;
    if (strcmp(temp->Member_ID, Member_ID) == 0 & strcmp(temp->Member_password, Member_password) == 0) {
        

    }
}
// ���� ����
FILE* in_fp, * out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    ifstream fin;
    fin.open(INPUT_FILE_NAME);
    ofstream fout;
    fout.open(OUTPUT_FILE_NAME);
    

    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fin >> menu_level_1;
        fin >> menu_level_2;
        //printf("%d %d", menu_level_1, menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
                // join() �Լ����� �ش� ��� ���� 
                fin >> name;
                fin >> SSN;
                fin >> ID;
                fin >> password;
                strcpy(Member_Name, name);
                strcpy(Member_SSN, SSN);
                strcpy(Member_ID, ID);
                strcpy(Member_password, password);
                AddMember(&FirstMember, Member_Name, Member_SSN, Member_ID, Member_password);
                fout << "1.1 ȸ������\n";
                fout << Member_Name << ' ';
                fout << Member_SSN << ' ';
                fout << Member_ID << ' ';
                fout << Member_password<< '\n';
                break;
            case 2:
                printf("Ż���� ȸ��");
                fin >> name;
                strcpy(Member_Name, name);
                DeleteMember(Member_Name);
                break;
            }
            break;
        case 2:
            switch (menu_level_2)
            {
            case 1:
               printf("�α���");
               fin >> ID;
               fin >> password;
               strcpy(Member_ID, name);
               strcpy(Member_password, password);
               Login(Member_ID, Member_password);
               fout << "2.1 �α���\n";
               fout << ID << " " << password;
               Member * temp = FirstMember;
                for (int i = 1; temp != NULL; ++i) {
                    printf("-------");
                    printf("Name: %s \n", temp->Member_Name);
                    printf("SSN %s \n", temp->Member_SSN);
                    printf("ID %s \n", temp->Member_ID);
                    printf("password %s \n", temp -> Member_password);
                    temp = temp->next;
                }
                break;
               
            }
        case 3:
            switch (menu_level_2)
            {
            case 1:
                return 0;

            }

        }
    }


    return 0;
}






/*void doTask(INPUT_FILE_NAME, OUTPUT_FILE_NAME)
{
    // �޴� �Ľ��� ���� level ������ ���� ����
  
}*/


 void join()
        {
//fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);
            // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
            
        return;
            // �ش� ��� ����  

                // ��� ����
  //          fprintf(out_fp, "1.1. ȸ������\n");
  //          fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
        }


/*      void program_exit()
        {
            return;
        }*/