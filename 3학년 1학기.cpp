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
void thirdgradefirstsemester1();
void thirdgradefirstsemester2();
void thirdgradefirstsemester3();
void thirdgradefirstsemester4();
void thirdgradefirstsemester5();
void thirdgradefirstsemester6();
void thirdgradefirstsemester7();
void thirdgradefirstsemester8();
void thirdgradefirstsemester9();
void thirdgradefirstsemester10();
void thirdgradefirstsemester11();
void thirdgradefirstsemester12();
void thirdgradefirstsemester13();
void thirdgradefirstsemester14();
void thirdgradefirstsemester15();
void thirdgradefirstsemester16();
void thirdgradefirstsemester17();
void thirdgradefirstsemester18();
void thirdgradefirstsemester19();
void thirdgradefirstsemester20();
void thirdgradefirstsemester21();
void thirdgradefirstsemester22();
void thirdgradefirstsemester23();
void thirdgradefirstsemester24();
void thirdgradefirstsemester25();
void thirdgradefirstsemester26();
void thirdgradefirstsemester27();
void thirdgradefirstsemester28();
void thirdgradefirstsemester29();
void thirdgradefirstsemester30();
void thirdgradefirstsemester31();
void thirdgradefirstsemester32();

void thirdgradefirstsemester1() //3학년 1학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   3학년 1학기 필수 전공은   " << endl;
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
            thirdgradefirstsemester2();
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

void thirdgradefirstsemester2() // 데이터베이스 구축 및 실습 질문
{
    int choice;

    do
    {
        cout << "=================================================================" << endl;
        cout << "   당신은 2학년 때 배운 데이터베이스 내용을 활용하고 싶습니까?   " << endl;
        cout << "=================================================================" << endl;
        cout << "1. 네                                                            " << endl;
        cout << "2. 아 니 요                                                      " << endl;
        cout << "=================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 질문 '네' 경우
            thirdgradefirstsemester3();
            break;
        case 2: // 데이터베이스 구축 및 실습 질문 '아니요' 경우
            thirdgradefirstsemester4();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester3() // 모바일 프로그래밍 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 앱 개발에 관심이 많습니까?                            " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 질문 '네, 네' 경우
            thirdgradefirstsemester5();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 질문 '네, 아니요' 경우
            thirdgradefirstsemester6();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester4() // 모바일 프로그래밍 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 앱 개발에 관심이 많습니까?                            " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 질문 '아니요, 네' 경우
            thirdgradefirstsemester7();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 질문 '아니요, 아니요' 경우
            thirdgradefirstsemester8();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester5() //컴퓨터 네트워크 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 실습과제 위주의 수업을 선호합니까?                    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 질문 '네, 네, 네' 경우
            thirdgradefirstsemester9();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 질문 '네, 네, 아니요' 경우
            thirdgradefirstsemester10();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester6() //컴퓨터 네트워크 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 실습과제 위주의 수업을 선호합니까?                    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 질문 '네, 아니요, 네' 경우
            thirdgradefirstsemester11();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 질문 '네, 아니요, 아니요' 경우
            thirdgradefirstsemester12();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester7() // 컴퓨터 네트워크 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 실습과제 위주의 수업을 선호합니까?                    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 질문 '아니요, 네, 네' 경우
            thirdgradefirstsemester13();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 질문 '아니요, 네, 아니요' 경우
            thirdgradefirstsemester14();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester8() // 컴퓨터 네트워크 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 실습과제 위주의 수업을 선호합니까?                    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 질문 '아니요, 아니요, 네' 경우
            thirdgradefirstsemester15();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 질문 '아니요, 아니요, 아니요' 경우
            thirdgradefirstsemester16();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester9() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 네, 네, 네' 경우
            thirdgradefirstsemester17();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 네, 네, 아니요' 경우
            thirdgradefirstsemester18();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester10() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 네, 아니요, 네' 경우
            thirdgradefirstsemester19();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 네, 아니요, 아니요' 경우
            thirdgradefirstsemester20();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester11() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 아니요, 네, 네' 경우
            thirdgradefirstsemester21();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 아니요, 네, 아니요' 경우
            thirdgradefirstsemester22();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester12() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 아니요, 아니요, 네' 경우
            thirdgradefirstsemester23();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '네, 아니요, 아니요, 아니요' 경우
            thirdgradefirstsemester24();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester13() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 네, 네, 네' 경우
            thirdgradefirstsemester25();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 네, 네, 아니요' 경우
            thirdgradefirstsemester26();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester14() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 네, 아니요, 네' 경우
            thirdgradefirstsemester27();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 네, 아니요, 아니요' 경우
            thirdgradefirstsemester28();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester15() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 아니요, 네, 네' 경우
            thirdgradefirstsemester29();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 아니요, 네, 아니요' 경우
            thirdgradefirstsemester30();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester16() // 창업실습 질문
{
    int choice;

    do
    {
        cout << "=====================================================================================" << endl;
        cout << "   당신은 자신의 역량을 발휘하여 창업할 생각이 있고 창업에 대해 배워보고 싶습니까?   " << endl;
        cout << "=====================================================================================" << endl;
        cout << "1. 네                                                                                " << endl;
        cout << "2. 아 니 요                                                                          " << endl;
        cout << "=====================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 아니요, 아니요, 네' 경우
            thirdgradefirstsemester31();
            break;
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 질문 '아니요, 아니요, 아니요, 아니요' 경우
            thirdgradefirstsemester32();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester17() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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

void thirdgradefirstsemester18() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                       " << endl;
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

void thirdgradefirstsemester19() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                      " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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

void thirdgradefirstsemester20() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 네, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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

void thirdgradefirstsemester21() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                        " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                        " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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

void thirdgradefirstsemester22() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
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
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester23() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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

void thirdgradefirstsemester24() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '네, 아니요, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 데이터베이스구축및실습 " << endl;
            cout << " 교수     : 황정희                 " << endl;
            cout << " 수업방식 :                        " << endl;
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

void thirdgradefirstsemester25() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                           " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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

void thirdgradefirstsemester26() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                       " << endl;
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

void thirdgradefirstsemester27() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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

void thirdgradefirstsemester28() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;           
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;            
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 네, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " 과목     : 모바일 프로그래밍      " << endl;
            cout << " 교수     : 나상엽                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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

void thirdgradefirstsemester29() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;         
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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

void thirdgradefirstsemester30() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;          
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
            cout << " 교수     : 전은아                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;         
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;       
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터 네트워크        " << endl;
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
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void thirdgradefirstsemester31() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;         
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 창업실습               " << endl;
            cout << " 교수     : 문송철                 " << endl;
            cout << " 수업방식 : 이론+실습              " << endl;
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

void thirdgradefirstsemester32() // IOT실습 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 사물인터넷에 대한 전반적인 내용을 배우고 싶습니까?    " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;           
            cout << " 과목     : IOT실습                " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론+실습                       " << endl;
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
        case 2: // 데이터베이스 구축 및 실습 --> 모바일 프로그래밍 --> 컴퓨터 네트워크 --> 창업실습 --> IOT실습 질문 '아니요, 아니요, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << "          추천과목이없습니다.      " << endl;
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