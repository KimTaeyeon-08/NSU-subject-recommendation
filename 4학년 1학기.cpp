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
void fourthgradefirstsemester1();
void fourthgradefirstsemester2();
void fourthgradefirstsemester3();
void fourthgradefirstsemester4();
void fourthgradefirstsemester5();
void fourthgradefirstsemester6();
void fourthgradefirstsemester7();
void fourthgradefirstsemester8();


void fourthgradefirstsemester1() //4�г� 1�б�
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   4�г� 1�б� �ʼ� ������   " << endl;
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
            fourthgradefirstsemester2();
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

void fourthgradefirstsemester2() // �ΰ����� ����
{
    int choice;

    do
    {
        cout << "============================================================================" << endl;
        cout << "   ����� ��ҿ� �ø��� �򽺺� ��� �۵��Ǵ����� ���� ������ �ֽ��ϱ�?  " << endl;
        cout << "============================================================================" << endl;
        cout << "1. ��                                                                       " << endl;
        cout << "2. �� �� ��                                                                 " << endl;
        cout << "============================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� ���� '��' ���
            fourthgradefirstsemester3();
            break;
        case 2: // �ΰ����� ���� '�ƴϿ�' ���
            fourthgradefirstsemester4();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradefirstsemester3() // �������Ȱ��� ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� �� ��� �������� ���뿡 ��ȭ������ ���� �ͽ��ϱ�?       " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� --> �������Ȱ��� ���� '��, ��' ���
            fourthgradefirstsemester5();
            break;
        case 2: // �ΰ����� --> �������Ȱ��� ���� '��, �ƴϿ�' ���
            fourthgradefirstsemester6();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradefirstsemester4() // �������Ȱ��� ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� �� ��� �������� ���뿡 ��ȭ������ ���� �ͽ��ϱ�?       " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� --> �������Ȱ��� ���� '�ƴϿ�, ��' ���
            fourthgradefirstsemester7();
            break;
        case 2: // �ΰ����� --> �������Ȱ��� ���� '�ƴϿ�, �ƴϿ�' ���
            fourthgradefirstsemester8();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradefirstsemester5() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б⿡ ĸ���������1 ������ �����Ͽ����ϱ�?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '��, ��, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �ΰ�����               " << endl;
            cout << " ����     : -                       " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �������Ȱ���           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� : -                       " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ĸ���������2          " << endl;
            cout << " ����     : ������, ������, ������ " << endl;
            cout << " ������� : �ǽ�                      " << endl;
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
        case 2: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '��, ��, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �ΰ�����               " << endl;
            cout << " ����     : -                       " << endl;
            cout << " ������� : -                       " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �������Ȱ���           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� :  -                      " << endl;
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

void fourthgradefirstsemester6() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б⿡ ĸ���������1 ������ �����Ͽ����ϱ�?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '��, �ƴϿ�, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �ΰ�����               " << endl;
            cout << " ����     : -                      " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ĸ���������2          " << endl;
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
        case 2: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '��, �ƴϿ�, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �ΰ�����               " << endl;
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

void fourthgradefirstsemester7() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б⿡ ĸ���������1 ������ �����Ͽ����ϱ�?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '�ƴϿ�, ��, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;                      
            cout << " ����     : �������Ȱ���           " << endl;
            cout << " ����     : Ȳ����                 " << endl;
            cout << " ������� :  -                     " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ĸ���������2          " << endl;
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
        case 2: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '�ƴϿ�, ��, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " ����     : �������Ȱ���           " << endl;
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

void fourthgradefirstsemester8() // ĸ���� ������1 ����
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   ����� 3�г� 2�б⿡ ĸ���������1 ������ �����Ͽ����ϱ�?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. ��                                                                     " << endl;
        cout << "2. �� �� ��                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '�ƴϿ�, �ƴϿ�, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;            
            cout << " ����     : ĸ���������2          " << endl;
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
        case 2: // �ΰ����� --> �������Ȱ��� --> ĸ���������2 ���� '�ƴϿ�, �ƴϿ�, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;      
            cout << "           ��õ�����̾����ϴ�.     " << endl;           
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
