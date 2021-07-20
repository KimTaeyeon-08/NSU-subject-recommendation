#pragma warning (disable: 4996)
#include<cstdio>
#include<iostream>
#include<iomanip>
#include<string>
#include<Windows.h>

using namespace std;

void start();
void firstgradefirstsemester1(); //1학년 1학기
void firstgradesecondsemester1(); //1학년 2학기
void secondgradefirstsemester1(); //2학년 1학기
void secondgradesecondsemester1(); //2학년 2학기
void thirdgradefirstsemester1(); //3학년 1학기
void thirdgradesecondsemester1(); //3학년 2학기
void fourthgradefirstsemester1(); //4학년 1학기
void fourthgradesecondsemester1(); //4학년 2학기

int main() //시작화면
{
    int choice;

    do
    {
        cout << "****************************************************************" << endl;
        cout << "*          컴퓨터소프트웨어학과 전공과목추천 프로그램          *" << endl;
        cout << "****************************************************************" << endl;
        cout << "                                                                " << endl;
        cout << "    1. 시 작 하 기                                              " << endl;
        cout << "                                                                " << endl;
        cout << "    2. 끝 내 기                                                 " << endl;
        cout << "                                                                " << endl;
        cout << "****************************************************************" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            start();
            break;
        case 2:
            cout << " ㅣ 프로그램을 종료합니다 ㅣ " << endl;
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 또는 2를 입력해주세요 ! " << endl;
        }
    } while (choice != 2);
}

void start()
{
    int choice1;

    do
    {
        cout << "======================================" << endl;
        cout << "   당신의 학년과 학기는 ?             " << endl;
        cout << "======================================" << endl;
        cout << "1. 1 학 년 1 학 기                    " << endl;
        cout << "2. 1 학 년 2 학 기                    " << endl;
        cout << "3. 2 학 년 1 학 기                    " << endl;
        cout << "4. 2 학 년 2 학 기                    " << endl;
        cout << "5. 3 학 년 1 학 기                    " << endl;
        cout << "6. 3 학 년 2 학 기                    " << endl;
        cout << "7. 4 학 년 1 학 기                    " << endl;
        cout << "8. 4 학 년 2 학 기                    " << endl;
        cout << "======================================" << endl;
        cout << " 번호를 선택해주세요 : ";
        cin >> choice1;
        cout << endl;

        switch (choice1)
        {
        case 1: 
            firstgradefirstsemester1();
            break;
        case 2:
            firstgradesecondsemester1();
            break;
        case 3:
            secondgradefirstsemester1();
            break;
        case 4:
            secondgradesecondsemester1();
            break;
        case 5:
            thirdgradefirstsemester1();
            break;
        case 6:
            thirdgradesecondsemester1();
            break;
        case 7:
            fourthgradefirstsemester1();
            break;
        case 8:
            fourthgradesecondsemester1();
            break;
        default:
            cout << " ! 잘못된 번호입니다 ! " << endl;
            cout << " ! 1 ~ 8 사이에서 입력해주세요 ! " << endl;
        } 
    } while (choice1 != 8);
    return;
}

void gotohomepage()
{
    ShellExecute(0, 0, L"https://sso.nsu.ac.kr/login?redirect_url=https%3A%2F%2Fmypage.nsu.ac.kr%2Fmypage%2Fstudent", 0, 0, SW_SHOW);
}