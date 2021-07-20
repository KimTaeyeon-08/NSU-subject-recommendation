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
void firstgradesecondsemester1(); //1학년 2학기
void firstgradesecondsemester2(); //1학년 2학기

void firstgradesecondsemester1() //1학년 2학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   1학년 2학기 필수 전공은   " << endl;
        cout << "   프로그래밍언어1(C언어)    " << endl;
        cout << "   자료구조                  " << endl;
        cout << "   입니다.                   " << endl;
        cout << "=============================" << endl;
        cout << "1. 다 음                     " << endl;
        cout << "2. 이 전                     " << endl;
        cout << "=============================" << endl;
        cout << " 번호를 선택해주세요 : ";
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
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void firstgradesecondsemester2() // 논리회로 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 오픈북 방식의 시험을 선호하십니까?                      " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 프로그래밍언어1(C언어) " << endl;
            cout << " 교수     : 김현철                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공기초               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 논리회로               " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            수고하셨습니다           * " << endl;
            cout << endl << " * 수강신청을 위해 사이트로 이동합니다 * " << endl;
            cout << endl << " *************************************** " << endl;
            system("PAUSE");
            gotohomepage();
            main();
            break;
        case 2:
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 프로그래밍언어1(C언어) " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공기초               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 논리회로               " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            수고하셨습니다           * " << endl;
            cout << endl << " * 수강신청을 위해 사이트로 이동합니다 * " << endl;
            cout << endl << " *************************************** " << endl;
            system("PAUSE");
            gotohomepage();
            main();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}
