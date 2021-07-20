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


void fourthgradefirstsemester1() //4학년 1학기
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
            fourthgradefirstsemester2();
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

void fourthgradefirstsemester2() // 인공지능 질문
{
    int choice;

    do
    {
        cout << "============================================================================" << endl;
        cout << "   당신은 평소에 시리나 빅스비가 어떻게 작동되는지에 대해 관심이 있습니까?  " << endl;
        cout << "============================================================================" << endl;
        cout << "1. 네                                                                       " << endl;
        cout << "2. 아 니 요                                                                 " << endl;
        cout << "============================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 질문 '네' 경우
            fourthgradefirstsemester3();
            break;
        case 2: // 인공지능 질문 '아니요' 경우
            fourthgradefirstsemester4();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradefirstsemester3() // 정보보안관리 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 때 배운 정보보안 내용에 심화과정을 배우고 싶습니까?       " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 --> 정보보안관리 질문 '네, 네' 경우
            fourthgradefirstsemester5();
            break;
        case 2: // 인공지능 --> 정보보안관리 질문 '네, 아니요' 경우
            fourthgradefirstsemester6();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradefirstsemester4() // 정보보안관리 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 때 배운 정보보안 내용에 심화과정을 배우고 싶습니까?       " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 --> 정보보안관리 질문 '아니요, 네' 경우
            fourthgradefirstsemester7();
            break;
        case 2: // 인공지능 --> 정보보안관리 질문 '아니요, 아니요' 경우
            fourthgradefirstsemester8();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void fourthgradefirstsemester5() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기에 캡스톤디자인1 수업을 수강하였습니까?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 인공지능               " << endl;
            cout << " 교수     : -                       " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 정보보안관리           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : -                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 캡스톤디자인2          " << endl;
            cout << " 교수     : 김점구, 정지문, 송은지 " << endl;
            cout << " 수업방식 : 실습                      " << endl;
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
        case 2: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 인공지능               " << endl;
            cout << " 교수     : -                       " << endl;
            cout << " 수업방식 : -                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 정보보안관리           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 :  -                      " << endl;
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

void fourthgradefirstsemester6() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기에 캡스톤디자인1 수업을 수강하였습니까?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 인공지능               " << endl;
            cout << " 교수     : -                      " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 캡스톤디자인2          " << endl;
            cout << " 교수     : 김점구, 정지문, 송은지 " << endl;
            cout << " 수업방식 : 실습                   " << endl;
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
        case 2: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 인공지능               " << endl;
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

void fourthgradefirstsemester7() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기에 캡스톤디자인1 수업을 수강하였습니까?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;                      
            cout << " 과목     : 정보보안관리           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 :  -                     " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 캡스톤디자인2          " << endl;
            cout << " 교수     : 김점구, 정지문, 송은지 " << endl;
            cout << " 수업방식 : 실습                   " << endl;
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
        case 2: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " 과목     : 정보보안관리           " << endl;
            cout << " 교수     : 황정희                 " << endl;
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

void fourthgradefirstsemester8() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기에 캡스톤디자인1 수업을 수강하였습니까?              " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;            
            cout << " 과목     : 캡스톤디자인2          " << endl;
            cout << " 교수     : 김점구, 정지문, 송은지 " << endl;
            cout << " 수업방식 : 실습                       " << endl;
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
        case 2: // 인공지능 --> 정보보안관리 --> 캡스톤디자인2 질문 '아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;      
            cout << "           추천과목이없습니다.     " << endl;           
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
