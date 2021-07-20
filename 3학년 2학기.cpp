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

void thirdgradesecondsemester1() //3학년 2학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   3학년 2학기 필수 전공은   " << endl;
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
            thirdgradesecondsemester2();
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

void thirdgradesecondsemester2() // 심화프로그래밍 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 프로그래밍을 심화적으로좀 더 배우고 싶습니까?                   " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 질문 '네' 경우
            thirdgradesecondsemester3();
            break;
        case 2: // 심화프로그래밍 질문 '아니요' 경우
            thirdgradesecondsemester4();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradesecondsemester3() // 정보보안기술 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 해킹과 보안에 대해 관심이 있습니까?                             " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 --> 정보보안기술 질문 '네, 네' 경우
            thirdgradesecondsemester5();
            break;
        case 2: // 심화프로그래밍 --> 정보보안기술 질문 '네, 아니요' 경우
            thirdgradesecondsemester6();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradesecondsemester4() // 정보보안기술 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 해킹과 보안에 대해 관심이 있습니까?                             " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 --> 정보보안기술 질문 '아니요, 네' 경우
            thirdgradesecondsemester7();
            break;
        case 2: // 심화프로그래밍 --> 정보보안기술 질문 '아니요, 아니요' 경우
            thirdgradesecondsemester8();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradesecondsemester5() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기부터 줄업작품 준비를 시작할 것입니까?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 심화프로그래밍         " << endl;
            cout << " 교수     : -                      " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 정보보안기술           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 캡스톤디자인1          " << endl;
            cout << " 교수     : 김점구, 정지문, 송은지 " << endl;
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
        case 2: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 심화프로그래밍         " << endl;
            cout << " 교수     : -                       " << endl;
            cout << " 수업방식 : -                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 정보보안기술           " << endl;
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

void thirdgradesecondsemester6() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기부터 줄업작품 준비를 시작할 것입니까?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 심화프로그래밍         " << endl;
            cout << " 교수     : -                      " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;           
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 캡스톤디자인1          " << endl;
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
        case 2: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 심화프로그래밍         " << endl;
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

void thirdgradesecondsemester7() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기부터 줄업작품 준비를 시작할 것입니까?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;          
            cout << " 과목     : 정보보안기술           " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : -                      " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 캡스톤디자인1          " << endl;
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
        case 2: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;            
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 정보보안기술           " << endl;
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

void thirdgradesecondsemester8() // 캡스톤 디자인1 질문
{
    int choice;

    do
    {
        cout << "==========================================================================" << endl;
        cout << "   당신은 3학년 2학기부터 줄업작품 준비를 시작할 것입니까?                " << endl;
        cout << "==========================================================================" << endl;
        cout << "1. 네                                                                     " << endl;
        cout << "2. 아 니 요                                                               " << endl;
        cout << "==========================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " 과목     : 캡스톤디자인1          " << endl;
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
        case 2: // 심화프로그래밍 --> 정보보안기술 --> 캡스톤디자인1 질문 '아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << "         추천과목이없습니다.       " << endl;
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