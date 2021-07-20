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
void secondgradesecondsemester1(); //2학년 2학기
void secondgradesecondsemester2(); //2학년 2학기
void secondgradesecondsemester3(); //2학년 2학기
void secondgradesecondsemester4(); //2학년 2학기
void secondgradesecondsemester5(); //2학년 2학기
void secondgradesecondsemester6(); //2학년 2학기
void secondgradesecondsemester7(); //2학년 2학기
void secondgradesecondsemester8(); //2학년 2학기
void secondgradesecondsemester9(); //2학년 2학기
void secondgradesecondsemester10(); //2학년 2학기
void secondgradesecondsemester11(); //2학년 2학기
void secondgradesecondsemester12(); //2학년 2학기
void secondgradesecondsemester13(); //2학년 2학기
void secondgradesecondsemester14(); //2학년 2학기
void secondgradesecondsemester15(); //2학년 2학기
void secondgradesecondsemester16(); //2학년 2학기

void secondgradesecondsemester1() //2학년 2학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   2학년 2학기 필수 전공은   " << endl;
   cout << "   객체지향프로그래밍2, 데이터베이스 " << endl;
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
            secondgradesecondsemester2();
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

void secondgradesecondsemester2() // 객체지향프로그래밍2 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 객체지향론을 이용하여 심화된 프로젝트를 진행해보고 싶습니까?    " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 질문 '네' 경우
            secondgradesecondsemester3();
            break;
        case 2: // 객체지향프로그래밍2 질문 '아니요' 경우
            secondgradesecondsemester4();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester3() // 데이터베이스 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 교재의 내용 위주로 진행되는 수업을 선호합니까?        " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 질문 '네, 네' 경우
            secondgradesecondsemester5();
            break;
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 질문 '네, 아니요' 경우
            secondgradesecondsemester6();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester4() // 데이터베이스 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 교재의 내용 위주로 진행되는 수업을 선호합니까?        " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 질문 '아니요, 네' 경우
            secondgradesecondsemester7();
            break;
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 질문 '아니요, 아니요' 경우
            secondgradesecondsemester8();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester5() //확률과통계질문
{
    int choice;

    do
    {
        cout << "==========================================================================================" << endl;
        cout << "   당신은 컴퓨터에서 처리되는 과정의 확률에 대한 수학적 지식이 필요하다고 생각합니까?     " << endl;
        cout << "==========================================================================================" << endl;
        cout << "1. 네                                                                                     " << endl;
        cout << "2. 아 니 요                                                                               " << endl;
        cout << "==========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 질문 '네, 네, 네' 경우
            secondgradesecondsemester9();
            break;
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 질문 '네, 네, 아니요' 경우
            secondgradesecondsemester10();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester6() //이산수학 질문
{
    int choice;

    do
    {
        cout << "==========================================================================================" << endl;
        cout << "   당신은 컴퓨터에서 처리되는 과정의 확률에 대한 수학적 지식이 필요하다고 생각합니까?     " << endl;
        cout << "==========================================================================================" << endl;
        cout << "1. 네                                                                                     " << endl;
        cout << "2. 아 니 요                                                                               " << endl;
        cout << "==========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 질문 '네, 아니요, 네' 경우
            secondgradesecondsemester11();
            break;
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 질문 '네, 아니요, 아니요' 경우
            secondgradesecondsemester12();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester7() // 이산수학 질문
{
    int choice;

    do
    {
        cout << "==========================================================================================" << endl;
        cout << "   당신은 컴퓨터에서 처리되는 과정의 확률에 대한 수학적 지식이 필요하다고 생각합니까?     " << endl;
        cout << "==========================================================================================" << endl;
        cout << "1. 네                                                                                     " << endl;
        cout << "2. 아 니 요                                                                               " << endl;
        cout << "==========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 질문 '아니요, 네, 네' 경우
            secondgradesecondsemester13();
            break;
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 질문 '아니요, 네, 아니요' 경우
            secondgradesecondsemester14();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester8() // 이산수학 질문
{
    int choice;

    do
    {
        cout << "==========================================================================================" << endl;
        cout << "   당신은 컴퓨터에서 처리되는 과정의 확률에 대한 수학적 지식이 필요하다고 생각합니까?     " << endl;
        cout << "==========================================================================================" << endl;
        cout << "1. 네                                                                                     " << endl;
        cout << "2. 아 니 요                                                                               " << endl;
        cout << "==========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 질문 '아니요, 아니요, 네' 경우
            secondgradesecondsemester15();
            break;
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 질문 '아니요, 아니요, 아니요' 경우
            secondgradesecondsemester16();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradesecondsemester9() //데이터통신 질문
{
    int choice;

    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
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

void secondgradesecondsemester10() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
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

void secondgradesecondsemester11() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
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

void secondgradesecondsemester12() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '네, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍2    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
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

void secondgradesecondsemester13() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
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

void secondgradesecondsemester14() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공필수               " << endl;
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

void secondgradesecondsemester15() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 확률과 통계            " << endl;
            cout << " 교수     : 송은지                 " << endl;
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

void secondgradesecondsemester16() //데이터통신 질문
{
    int choice;
    do
    {
        cout << "===================================================" << endl;
        cout << "   당신은 시험시간이 여유로운 것을 선호합니까?     " << endl;
        cout << "===================================================" << endl;
        cout << "1. 네                                              " << endl;
        cout << "2. 아 니 요                                        " << endl;
        cout << "===================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터통신             " << endl;
            cout << " 교수     : 전은아                 " << endl;
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
        case 2: // 객체지향프로그래밍2 --> 데이터베이스 --> 이산수학 --> 데이터통신 질문 '아니요, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << "        추천 과목이 없습니다.      " << endl;
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
