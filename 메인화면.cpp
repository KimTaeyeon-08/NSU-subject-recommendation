#pragma warning (disable: 4996)
#include<cstdio>
#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>

using namespace std;

void start();
void firstgradefirstsemester1(); //1�г� 1�б�
void firstgradesecondsemester1(); //1�г� 2�б�
void secondgradefirstsemester1(); //2�г� 1�б�
void secondgradesecondsemester1(); //2�г� 2�б�
void thirdgradefirstsemester1(); //3�г� 1�б�
void thirdgradesecondsemester1(); //3�г� 2�б�
void fourthgradefirstsemester1(); //4�г� 1�б�
void fourthgradesecondsemester1(); //4�г� 2�б�

int main() //����ȭ��
{
    int choice;

    do
    {
        cout << "****************************************************************" << endl;
        cout << "*          ��ǻ�ͼ���Ʈ�����а� ����������õ ���α׷�          *" << endl;
        cout << "****************************************************************" << endl;
        cout << "                                                                " << endl;
        cout << "    1. �� �� �� ��                                              " << endl;
        cout << "                                                                " << endl;
        cout << "    2. �� �� ��                                                 " << endl;
        cout << "                                                                " << endl;
        cout << "****************************************************************" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            start();
            break;
        case 2:
            cout << " �� ���α׷��� �����մϴ� �� " << endl;
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void start()
{
    int choice1;

    do
    {
        cout << "======================================" << endl;
        cout << "   ����� �г�� �б�� ?             " << endl;
        cout << "======================================" << endl;
        cout << "1. 1 �� �� 1 �� ��                    " << endl;
        cout << "2. 1 �� �� 2 �� ��                    " << endl;
        cout << "3. 2 �� �� 1 �� ��                    " << endl;
        cout << "4. 2 �� �� 2 �� ��                    " << endl;
        cout << "5. 3 �� �� 1 �� ��                    " << endl;
        cout << "6. 3 �� �� 2 �� ��                    " << endl;
        cout << "7. 4 �� �� 1 �� ��                    " << endl;
        cout << "8. 4 �� �� 2 �� ��                    " << endl;
        cout << "======================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice1;
        cout << endl;

        switch (choice1)
        {
        case 1: 
            firstgradefirstsemester1();
            break;
        case 2:
            firstgradesecondsemester1();
            break;
        case 3:
            secondgradefirstsemester1();
            break;
        case 4:
            secondgradesecondsemester1();
            break;
        case 5:
            thirdgradefirstsemester1();
            break;
        case 6:
            thirdgradesecondsemester1();
            break;
        case 7:
            fourthgradefirstsemester1();
            break;
        case 8:
            fourthgradesecondsemester1();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 ~ 8 ���̿��� �Է����ּ��� ! " << endl;
        } 
    } while (choice1 != 8);
    return;
}

void gotohomepage()
{
    ShellExecute(0, 0, L"https://sso.nsu.ac.kr/login?redirect_url=https%3A%2F%2Fmypage.nsu.ac.kr%2Fmypage%2Fstudent", 0, 0, SW_SHOW);
}