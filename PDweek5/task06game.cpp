#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printEnemy();
void eraseEnemy();
void moveEnemy();
void printMaze();

int eX = 2, eY = 2;
main()
{
    system("cls");
    printMaze();
    printEnemy();
while(true)
    {
        moveEnemy();
        Sleep(200);
    }
}
void printEnemy()
{
    gotoxy(eX,eY);
    cout << "(~~~) (~~~)";
    gotoxy(eX,eY+1);
    cout << "|=| | | |=|";
    gotoxy(eX,eY+2);
    cout << "|=| | | |=|";
    gotoxy(eX,eY+3);
    cout << " \\ / ";
    gotoxy(eX,eY+4);
    cout << " \\ / ";
}

void eraseEnemy()
{
    gotoxy(eX,eY);
    cout << " ";
    gotoxy(eX,eY+1);
    cout << " ";
    gotoxy(eX,eY+2);
    cout << " ";
    gotoxy(eX,eY+3);
    cout << " ";
    gotoxy(eX,eY+4);
    cout << " ";
}
void moveEnemy()
{
    eraseEnemy();
    eX = eX + 1;
    if(eX == 30)
    {
        eX = 2;
    }
    printEnemy();
}