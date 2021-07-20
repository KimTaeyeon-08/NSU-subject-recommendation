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

void fourthgradesecondsemester1() //4학년 2학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   4학년 1학기 필수 전공은   " << endl;
        cout << "   없습니다.                 " << endl;
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
            void fourthgradesecondsemester2();
            break;
        case 2:
            void start();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradesecondsemester2() // 빅데이터컴퓨팅 질문
{
    int choice;

    do
    {
        cout << "===========================================================================================" << endl;
        cout << "   당신은 방대한 규모의 데이터를 컴퓨터를 이용하여 효율적으로 관리하는데 관심이 있습니까?  " << endl;
        cout << "===========================================================================================" << endl;
        cout << "1. 네                                                                                      " << endl;
        cout << "2. 아 니 요                                                                                " << endl;
        cout << "===========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 빅데이터컴퓨팅 질문 '네' 경우
            fourthgradesecondsemester3();
            break;
        case 2: // 빅데이터컴퓨팅 질문 '아니요' 경우
            fourthgradesecondsemester4();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradesecondsemester3() // 임베디드시스템 질문
{
    int choice;

    do
    {
        cout << "=========================================================================" << endl;
        cout << "   당신은 작은 디바이스에 연결된 S/W 프로그래밍을 구축해보고 싶습니까?    " << endl;
        cout << "=========================================================================" << endl;
        cout << "1. 네                                                                    " << endl;
        cout << "2. 아 니 요                                                              " << endl;
        cout << "=========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 빅데이터컴퓨팅 --> 임베디드시스템 질문 '네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 빅데이터컴퓨팅         " << endl;
            cout << " 교수     : 조연성                 " << endl;
            cout << " 수업방식 : -                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 임베디드시스템         " << endl;
            cout << " 교수     : -                       " << endl;
            cout << " 수업방식 : -                       " << endl;
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
            gotohomepage();
            main();
            break;
        case 2: // 빅데이터컴퓨팅 --> 임베디드시스템 질문 '네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 빅데이터컴퓨팅         " << endl;
            cout << " 교수     : 조연성                 " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            수고하셨습니다           * " << endl;
            cout << endl << " * 수강신청을 위해 사이트로 이동합니다 * " << endl;
            cout << endl << " *************************************** " << endl;
            gotohomepage();
            main();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradesecondsemester4() // 임베디드시스템 질문
{
    int choice;

    do
    {
        cout << "=========================================================================" << endl;
        cout << "   당신은 작은 디바이스에 연결된 S/W 프로그래밍을 구축해보고 싶습니까?    " << endl;
        cout << "=========================================================================" << endl;
        cout << "1. 네                                                                    " << endl;
        cout << "2. 아 니 요                                                              " << endl;
        cout << "=========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 빅데이터컴퓨팅 --> 임베디드시스템 질문 '아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;         
            cout << " 과목     : 임베디드시스템         " << endl;
            cout << " 교수     : -                      " << endl;
            cout << " 수업방식 : -                      " << endl;
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
            gotohomepage();
            main();
            break;
        case 2: // 빅데이터컴퓨팅 --> 임베디드시스템 질문 '아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << "        추천과목이 없습니다.       " << endl;
            cout << "-----------------------------------" << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << "                                   " << endl;
            cout << endl << " *************************************** " << endl;
            cout << endl << " *            수고하셨습니다           * " << endl;
            cout << endl << " * 수강신청을 위해 사이트로 이동합니다 * " << endl;
            cout << endl << " *************************************** " << endl;
            gotohomepage();
            main();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}