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
void thirdgradesecondsemester1();
void thirdgradesecondsemester2();
void thirdgradesecondsemester3();
void thirdgradesecondsemester4();
void thirdgradesecondsemester5();
void thirdgradesecondsemester6();
void thirdgradesecondsemester7();
void thirdgradesecondsemester8();

void thirdgradesecondsemester1() //3�г� 2�б�
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   3�г� 2�б� �ʼ� ������   " << endl;
        cout << "   �����ϴ�.                 " << endl;
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
            thirdgradesecondsemester2();
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

void thirdgradesecondsemester2() // ��ȭ���α׷��� ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� ���α׷����� ��ȭ�������� �� ���� �ͽ��ϱ�?                   " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� ���� '��' ���
            thirdgradesecondsemester3();
            break;
        case 2: // ��ȭ���α׷��� ���� '�ƴϿ�' ���
            thirdgradesecondsemester4();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradesecondsemester3() // �������ȱ�� ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� ��ŷ�� ���ȿ� ���� ������ �ֽ��ϱ�?                             " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� --> �������ȱ�� ���� '��, ��' ���
            thirdgradesecondsemester5();
            break;
        case 2: // ��ȭ���α׷��� --> �������ȱ�� ���� '��, �ƴϿ�' ���
            thirdgradesecondsemester6();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradesecondsemester4() // �������ȱ�� ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� ��ŷ�� ���ȿ� ���� ������ �ֽ��ϱ�?                             " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� --> �������ȱ�� ���� '�ƴϿ�, ��' ���
            thirdgradesecondsemester7();
            break;
        case 2: // ��ȭ���α׷��� --> �������ȱ�� ���� '�ƴϿ�, �ƴϿ�' ���
            thirdgradesecondsemester8();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradesecondsemester5() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б���� �پ���ǰ �غ� ������ ���Դϱ�?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '��, ��, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��ȭ���α׷���         " << endl;
            cout << " ����     : -                      " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �������ȱ��           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ĸ���������1          " << endl;
            cout << " ����     : ������, ������, ������ " << endl;
            cout << " ������� : -                      " << endl;
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
        case 2: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '��, ��, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��ȭ���α׷���         " << endl;
            cout << " ����     : -                       " << endl;
            cout << " ������� : -                       " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �������ȱ��           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� : -                       " << endl;
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

void thirdgradesecondsemester6() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б���� �پ���ǰ �غ� ������ ���Դϱ�?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '��, �ƴϿ�, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��ȭ���α׷���         " << endl;
            cout << " ����     : -                      " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;           
            cout << "-----------------------------------" << endl;
            cout << " ����     : ĸ���������1          " << endl;
            cout << " ����     : ������, ������, ������ " << endl;
            cout << " ������� : �ǽ�                   " << endl;
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
        case 2: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '��, �ƴϿ�, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��ȭ���α׷���         " << endl;
            cout << " ����     : -                      " << endl;
            cout << " ������� : -                      " << endl;
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

void thirdgradesecondsemester7() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б���� �پ���ǰ �غ� ������ ���Դϱ�?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '�ƴϿ�, ��, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;          
            cout << " ����     : �������ȱ��           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ĸ���������1          " << endl;
            cout << " ����     : ������, ������, ������ " << endl;
            cout << " ������� : �ǽ�                   " << endl;
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
        case 2: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '�ƴϿ�, ��, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;            
            cout << "-----------------------------------" << endl;
            cout << " ����     : �������ȱ��           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� : -                       " << endl;
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

void thirdgradesecondsemester8() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б���� �پ���ǰ �غ� ������ ���Դϱ�?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '�ƴϿ�, �ƴϿ�, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " ����     : ĸ���������1          " << endl;
            cout << " ����     : ������, ������, ������ " << endl;
            cout << " ������� : �ǽ�                       " << endl;
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
        case 2: // ��ȭ���α׷��� --> �������ȱ�� --> ĸ���������1 ���� '�ƴϿ�, �ƴϿ�, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << "         ��õ�����̾����ϴ�.       " << endl;
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