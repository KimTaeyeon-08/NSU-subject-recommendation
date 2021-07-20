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
void firstgradefirstsemester1(); //1학년 1학기
void firstgradefirstsemester2(); //1학년 1학기

void firstgradefirstsemester1() //1학년 1학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   1학년 1학기 필수 전공은   " << endl;
        cout << "   프로그래밍언어1(C언어)    " << endl;
        cout << "   컴퓨터개론                " << endl;
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
            firstgradefirstsemester2();
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

void firstgradefirstsemester2() // 컴퓨터개론 질문
{
    int choice;

    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 교과서 이와의 내용이 포함된 PPT 내용을 바탕으로 진행되는 수업을 선호합니까?   " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
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
            cout << " 과목     : 컴퓨터개론             " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공기초               " << endl;
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
            cout << " 과목     : 컴퓨터개론             " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공기초               " << endl;
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
