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
void secondgradefirstsemester1(); //2학년 1학기
void secondgradefirstsemester2(); //2학년 1학기
void secondgradefirstsemester3(); //2학년 1학기
void secondgradefirstsemester4(); //2학년 1학기
void secondgradefirstsemester5(); //2학년 1학기
void secondgradefirstsemester6(); //2학년 1학기
void secondgradefirstsemester7(); //2학년 1학기
void secondgradefirstsemester8(); //2학년 1학기
void secondgradefirstsemester9(); //2학년 1학기
void secondgradefirstsemester10(); //2학년 1학기
void secondgradefirstsemester11(); //2학년 1학기
void secondgradefirstsemester12(); //2학년 1학기
void secondgradefirstsemester13(); //2학년 1학기
void secondgradefirstsemester14(); //2학년 1학기
void secondgradefirstsemester15(); //2학년 1학기
void secondgradefirstsemester16(); //2학년 1학기

void secondgradefirstsemester1() //2학년 1학기
{
    int choice;

    do
    {
        cout << "=============================" << endl;
        cout << "   2학년 1학기 필수 전공은   " << endl;
   cout<< "    객체지향프로그래밍1, 소프트웨어공학" << endl;
        cout << "             입니다.             " << endl;
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
            secondgradefirstsemester2();
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

void secondgradefirstsemester2() // 객체지향프로그래밍 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 팀프로젝트를 선호합니까?                              " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 질문 '네' 경우
            secondgradefirstsemester3();
            break;
        case 2: // 객체지향프로그래밍 질문 '아니요' 경우
            secondgradefirstsemester4();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester3() // 컴퓨터구조 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 컴퓨터 내부 프로세스나 기계어에 관심이 있습니까?      " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 질문 '네, 네' 경우
            secondgradefirstsemester5();
            break;
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 질문 '네, 아니요' 경우
            secondgradefirstsemester6();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester4() // 컴퓨터구조 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 컴퓨터 내부 프로세스나 기계어에 관심이 있습니까?      " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 질문 '아니요, 네' 경우
            secondgradefirstsemester7();
            break;
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 질문 '아니요, 아니요' 경우
            secondgradefirstsemester8();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester5() //자료구조 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 서술형 시험방식을 선호합니까?                         " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 질문 '네, 네, 네' 경우
            secondgradefirstsemester9();
            break;
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 질문 '네, 네, 아니요' 경우
            secondgradefirstsemester10();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester6() //자료구조 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 서술형 시험방식을 선호합니까?                         " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 질문 '네, 아니요, 네' 경우
            secondgradefirstsemester11();
            break;
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 질문 '네, 아니요, 아니요' 경우
            secondgradefirstsemester12();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester7() // 자료구조 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 서술형 시험방식을 선호합니까?                         " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 질문 '아니요, 네, 네' 경우
            secondgradefirstsemester13();
            break;
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 질문 '아니요, 네, 아니요' 경우
            secondgradefirstsemester14();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester8() // 자료구조 질문
{
    int choice;

    do
    {
        cout << "================================================================" << endl;
        cout << "   당신은 서술형 시험방식을 선호합니까?                         " << endl;
        cout << "================================================================" << endl;
        cout << "1. 네                                                           " << endl;
        cout << "2. 아 니 요                                                     " << endl;
        cout << "================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 질문 '아니요, 아니요, 네' 경우
            secondgradefirstsemester15();
            break;
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 질문 '아니요, 아니요, 아니요' 경우
            secondgradefirstsemester16();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void secondgradefirstsemester9() //이산수학 질문
{
    int choice;

    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 네, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터구조             " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 네, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터구조             " << endl;
            cout << " 교수     : 김정길                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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

void secondgradefirstsemester10() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터구조             " << endl;
            cout << " 교수     : 김정길                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택              " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터구조             " << endl;
            cout << " 교수     : 김정길                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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

void secondgradefirstsemester11() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                      " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
            cout << " 교수     : 송은지                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                      " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                      " << endl;
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

void secondgradefirstsemester12() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
            cout << " 교수     : 김점구                 " << endl;
            cout << " 수업방식 : 이론 + 실습            " << endl;
            cout << " 종류     : 전공필수               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
            cout << " 교수     : 송은지                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '네, 아니요, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 객체지향프로그래밍1    " << endl;
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

void secondgradefirstsemester13() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                 " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택               " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
            cout << " 교수     : 송은지                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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

void secondgradefirstsemester14() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 네, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터구조             " << endl;
            cout << " 교수     : 김정길                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
            cout << " 교수     : 송은지                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 네, 아니요, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 컴퓨터구조             " << endl;
            cout << " 교수     : 김정길                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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

void secondgradefirstsemester15() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 아니요, 네, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
            cout << " 교수     : 송은지                        " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 아니요, 네, 아니요' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 자료구조               " << endl;
            cout << " 교수     : 정지문                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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

void secondgradefirstsemester16() //이산수학 질문
{
    int choice;
    do
    {
        cout << "========================================================================================" << endl;
        cout << "   당신은 컴퓨터 알고리즘, 프로그래밍 언어를 이해하는데 유용한 수학을 배우고 싶습니까?  " << endl;
        cout << "========================================================================================" << endl;
        cout << "1. 네                                                                                   " << endl;
        cout << "2. 아 니 요                                                                             " << endl;
        cout << "========================================================================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 아니요, 아니요, 네' 경우
            cout << "-----------------------------------" << endl;
            cout << "            추 천 목 록            " << endl;
            cout << "-----------------------------------" << endl;
            cout << " 과목     : 이산수학               " << endl;
            cout << " 교수     : 송은지                       " << endl;
            cout << " 수업방식 : 이론                   " << endl;
            cout << " 종류     : 전공선택                       " << endl;
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
        case 2: // 객체지향프로그래밍 --> 컴퓨터구조 --> 자료구조 --> 이산수학 질문 '아니요, 아니요, 아니요, 아니요' 경우
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
