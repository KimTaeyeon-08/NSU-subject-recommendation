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
void fourthgradesecondsemester1();
void fourthgradesecondsemester2();
void fourthgradesecondsemester3();
void fourthgradesecondsemester4();

void fourthgradesecondsemester1() //4�г� 2�б�
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
            void fourthgradesecondsemester2();
            break;
        case 2:
            void start();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradesecondsemester2() // ��������ǻ�� ����
{
    int choice;

    do
    {
        cout << "===========================================================================================" << endl;
        cout << "   ����� ����� �Ը��� �����͸� ��ǻ�͸� �̿��Ͽ� ȿ�������� �����ϴµ� ������ �ֽ��ϱ�?  " << endl;
        cout << "===========================================================================================" << endl;
        cout << "1. ��                                                                                      " << endl;
        cout << "2. �� �� ��                                                                                " << endl;
        cout << "===========================================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��������ǻ�� ���� '��' ���
            fourthgradesecondsemester3();
            break;
        case 2: // ��������ǻ�� ���� '�ƴϿ�' ���
            fourthgradesecondsemester4();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradesecondsemester3() // �Ӻ����ý��� ����
{
    int choice;

    do
    {
        cout << "=========================================================================" << endl;
        cout << "   ����� ���� ����̽��� ����� S/W ���α׷����� �����غ��� �ͽ��ϱ�?    " << endl;
        cout << "=========================================================================" << endl;
        cout << "1. ��                                                                    " << endl;
        cout << "2. �� �� ��                                                              " << endl;
        cout << "=========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��������ǻ�� --> �Ӻ����ý��� ���� '��, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��������ǻ��         " << endl;
            cout << " ����     : ������                 " << endl;
            cout << " ������� : -                       " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : �Ӻ����ý���         " << endl;
            cout << " ����     : -                       " << endl;
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
            gotohomepage();
            main();
            break;
        case 2: // ��������ǻ�� --> �Ӻ����ý��� ���� '��, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " ����     : ��������ǻ��         " << endl;
            cout << " ����     : ������                 " << endl;
            cout << " ������� : -                      " << endl;
            cout << " ����     : ��������               " << endl;
            cout << "-----------------------------------" << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            �����ϼ̽��ϴ�           * " << endl;
            cout << endl << " * ������û�� ���� ����Ʈ�� �̵��մϴ� * " << endl;
            cout << endl << " *************************************** " << endl;
            gotohomepage();
            main();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradesecondsemester4() // �Ӻ����ý��� ����
{
    int choice;

    do
    {
        cout << "=========================================================================" << endl;
        cout << "   ����� ���� ����̽��� ����� S/W ���α׷����� �����غ��� �ͽ��ϱ�?    " << endl;
        cout << "=========================================================================" << endl;
        cout << "1. ��                                                                    " << endl;
        cout << "2. �� �� ��                                                              " << endl;
        cout << "=========================================================================" << endl;
        cout << " ��ȣ�� �������ּ��� : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // ��������ǻ�� --> �Ӻ����ý��� ���� '�ƴϿ�, ��' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;         
            cout << " ����     : �Ӻ����ý���         " << endl;
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
            gotohomepage();
            main();
            break;
        case 2: // ��������ǻ�� --> �Ӻ����ý��� ���� '�ƴϿ�, �ƴϿ�' ���
            cout << "-----------------------------------" << endl;
            cout << "            �� õ �� ��            " << endl;
            cout << "-----------------------------------" << endl;
            cout << "        ��õ������ �����ϴ�.       " << endl;
            cout << "-----------------------------------" << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            �����ϼ̽��ϴ�           * " << endl;
            cout << endl << " * ������û�� ���� ����Ʈ�� �̵��մϴ� * " << endl;
            cout << endl << " *************************************** " << endl;
            gotohomepage();
            main();
            break;
        default:
            cout << " ! �߸��� ��ȣ�Դϴ� ! " << endl;
            cout << " ! 1 �Ǵ� 2�� �Է����ּ��� ! " << endl;
        }
    } while (choice != 2);
}