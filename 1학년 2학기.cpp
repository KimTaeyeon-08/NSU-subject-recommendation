#pragma warning (disable: 4996)
#include<cstdio>
#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>

using namespace std;

void gotohomepage();
void main();
void start();
void firstgradesecondsemester1(); //1�г� 2�б�
void firstgradesecondsemester2(); //1�г� 2�б�

void firstgradesecondsemester1() //1�г� 2�б�
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   1�г� 2�б� �ʼ� ������   " << endl;
        cout << "   ���α׷��־��1(C���)    " << endl;
        cout << "   �ڷᱸ��                  " << endl;
        cout << "   �Դϴ�.                   " << endl;
        cout << "=============================" << endl;
        cout << "1. �� ��                     " << endl;
        cout << "2. �� ��                     " << endl;
        cout << "=============================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            firstgradesecondsemester2();
            break;
        case 2:
            start();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void firstgradesecondsemester2() // ��ȸ�� ����
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   ����� ���º� ����� ������ ��ȣ�Ͻʴϱ�?                      " << endl;
        cout << "================================================================" << endl;
        cout << "1. ��                                                           " << endl;
        cout << "2. �� �� ��                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ���α׷��־��1(C���) " << endl;
            cout << " ����     : ����ö                 " << endl;
            cout << " ������� : �̷� + �ǽ�            " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��ȸ��               " << endl;
            cout << " ����     : ������                 " << endl;
            cout << " ������� : �̷�                   " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            �����ϼ̽��ϴ�           * " << endl;
            cout << endl << " * ������û�� ���� ����Ʈ�� �̵��մϴ� * " << endl;
            cout << endl << " *************************************** " << endl;
            system("PAUSE");
            gotohomepage();
            main();
            break;
        case 2:
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ���α׷��־��1(C���) " << endl;
            cout << " ����     : ������                 " << endl;
            cout << " ������� : �̷� + �ǽ�            " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��ȸ��               " << endl;
            cout << " ����     : ������                 " << endl;
            cout << " ������� : �̷�                   " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            �����ϼ̽��ϴ�           * " << endl;
            cout << endl << " * ������û�� ���� ����Ʈ�� �̵��մϴ� * " << endl;
            cout << endl << " *************************************** " << endl;
            system("PAUSE");
            gotohomepage();
            main();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}
