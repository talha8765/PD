#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printEnemy1();
void printEnemy2();
void printEnemy3();

void eraseEnemy1();
void eraseEnemy2();
void eraseEnemy3();
void erasePlayer();

void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void movePlayerLeft();
void movePlayerRight();

void printMaze();
void printPlayer();
int eX=3, eY=2;
int p=90, q=2;
int x=3, y=10;
int pX=45, pY=22;

main()
{
    system("cls");
    printMaze();
    printEnemy1();
    printEnemy2();
    printEnemy3();
    printPlayer();
    
while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
             movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
             movePlayerRight();
        }
        moveEnemy1();
        Sleep(200);
        moveEnemy2();
        Sleep(200);
        moveEnemy3();
        Sleep(200);
        
    }
}
void printMaze()
{
    cout<<"**********************************************************************************************************"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                      ******************                              **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                              *******************                                     **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**                                                                                                      **"<<endl;
    cout<<"**********************************************************************************************************"<<endl;
    cout<<"**********************************************************************************************************"<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void printEnemy1()
{
    
    gotoxy(eX,eY);
    cout << "+++++++++";
    gotoxy(eX,eY+1);
    cout << "++ . . ++";
    gotoxy(eX,eY+2);
    cout << " +     + ";
    gotoxy(eX,eY+3);
    cout <<"   ++++   " ;
    
}

void eraseEnemy1()
{
   
    gotoxy(eX,eY);
    cout << "         ";
    gotoxy(eX,eY+1);
    cout << "         ";
    gotoxy(eX+2,eY+2);
    cout << "         ";
    gotoxy(eX+3,eY+3);
    cout << "         ";
   
}

void moveEnemy1()
{
    
    eraseEnemy1();
    eX = eX + 1;
    if(eX == 50)
    {
        eX = 3;
    }
    printEnemy1();
}
void printEnemy2()
{
    
    gotoxy(p,q);
    cout << "+++++++++";
    gotoxy(p,q+1);
    cout << "++ . . ++";
    gotoxy(p,q+2);
    cout << " +     + ";
    gotoxy(p,q+3);
    cout << "  ++++   " ;
    
}
void eraseEnemy2()
{
   
    gotoxy(p,q);
    cout << "         ";
    gotoxy(p,q+1);
    cout << "         ";
    gotoxy(p,q+2);
    cout << "         ";
    gotoxy(p,q+3);
    cout << "         ";
   
}
void moveEnemy2()
{
     
    eraseEnemy2();
    q = q + 1;
    if(q == 15)
    {
        q = 2;
    }
    printEnemy2();
}
void printEnemy3()
{
    
    gotoxy(x,y);
    cout << " +++++++++";
    gotoxy(x+1,y+1);
    cout << "++ . . ++";
    gotoxy(x+2,y+2);
    cout << "+     + ";
    gotoxy(x+3,y+3);
    cout <<" ++++  " ;
    
}
void eraseEnemy3()
{
   
    gotoxy(x,y);
    cout << "          ";
    gotoxy(x+1,y+1);
    cout << "         ";
    gotoxy(x+2,y+2);
    cout << "        ";
    gotoxy(x+3,y+3);
    cout << "       ";
   
}
void moveEnemy3()
{
     
    eraseEnemy3();
    y = y + 1;
    x = x + 1;
    if(y == 15)
    {
        y = 10;
    }
    if( x == 40)
    {
        x = 3;
    }
    printEnemy3();
}
void printPlayer()
{
    
    gotoxy(pX,pY);
    cout << "      *       ";
    gotoxy(pX,pY+1);
    cout << "    ******   ";
    gotoxy(pX,pY+2);
    cout << "  **********  ";
    gotoxy(pX,pY+3);
    cout << " ************ ";
    gotoxy(pX,pY+4);
    cout << "**************"; 
    
}
void erasePlayer()
{
    
    gotoxy(pX,pY);
    cout << "              ";
    gotoxy(pX,pY+1);
    cout << "              ";
    gotoxy(pX,pY+2);
    cout << "              ";
    gotoxy(pX,pY+3);
    cout << "              ";
    gotoxy(pX,pY+4);
    cout << "              ";
     
}
void movePlayerLeft() 
{
    if (getCharAtxy(pX - 1, pY) == ' '){
        if(getCharAtxy(pX -1, pY+1) == ' '){
             if(getCharAtxy(pX -1, pY+1) == ' '){
                 if(getCharAtxy(pX -1, pY+3) == ' '){
                     if(getCharAtxy(pX -1, pY+4) == ' '){
                         erasePlayer();
                         pX = pX -1;
                         printPlayer();
                     }
                 }
             }
        }
    }
}
void movePlayerRight() 
{
    if(getCharAtxy(pX + 15, pY) == ' '){
        if(getCharAtxy(pX + 15, pY+1) == ' '){
            if(getCharAtxy(pX + 15, pY+1) == ' '){
                if(getCharAtxy(pX + 15, pY+1) == ' '){
                    if(getCharAtxy(pX + 15, pY+1) == ' '){
                        erasePlayer();
                        pX=pX+1;
                        printPlayer();
                    }
                }
            }
        }
    }
   
}
