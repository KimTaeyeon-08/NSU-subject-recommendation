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
void firstgradefirstsemester1(); //1�г� 1�б�
void firstgradefirstsemester2(); //1�г� 1�б�

void firstgradefirstsemester1() //1�г� 1�б�
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   1�г� 1�б� �ʼ� ������   " << endl;
        cout << "   ���α׷��־��1(C���)    " << endl;
        cout << "   ��ǻ�Ͱ���                " << endl;
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
            firstgradefirstsemester2();
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

void firstgradefirstsemester2() // ��ǻ�Ͱ��� ����
{
    int choice;

    do
    {
        cout << "========================================================================================" << endl;
        cout << "   ����� ������ �̿��� ������ ���Ե� PPT ������ �������� ����Ǵ� ������ ��ȣ�մϱ�?   " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. ��                                                                                   " << endl;
        cout << "2. �� �� ��                                                                             " << endl;
        cout << "========================================================================================" << endl;
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
            cout << " ����     : ��ǻ�Ͱ���             " << endl;
            cout << " ����     : ����ö                 " << endl;
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
            cout << " ����     : ��ǻ�Ͱ���             " << endl;
            cout << " ����     : ����ö                 " << endl;
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
