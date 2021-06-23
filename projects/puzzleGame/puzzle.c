//NUMBER SHIFTING GAME:
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define ESC 0
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
void gotoxy(int x,int y )
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void setMatrix(int A[][4]);
void showMatrix(int A[][4]);
int readkey();
int checkwin(int A[][4]);
int shiftUP(int A[][4]);
int shiftDOWN(int A[][4]);
int shiftLEFT(int A[][4]);
int shiftRIGHT(int A[][4]);
void loading()
{
    int r,q,i;
    gotoxy(58,30);
    printf("LOADING GAME...");
    gotoxy(58,32);
    for(r=1; r<=30; r++)
    {
        for(q=0; q<=10000000; q++);
        printf("%c",177);
    }
}
int main()
{
    system("CLS");
    system("color 0a");
    gotoxy(58,16);
    printf("MADE_BY_ALI_JUTT____________________");
    gotoxy(58,18);
    printf("_______________PUZZLE_GAME__________");
    gotoxy(58,20);
    printf("____________________________________");
    loading();
    gotoxy(0,60);
    printf("PRESS ANY KEY TO CONTINUE...");
    getch();
    int A[4][4],move=400;
    setMatrix(A);
    while(move)
    {
        system("CLS");
        printf("\n\n\n\n\t\tMOVE REAMINING:%d",move);
        showMatrix(A);
        if(checkwin(A))
        {
            printf("\n\n\tCONGRATULATIONS YOU WIN!\n\tIN %d MOVES:",300-move);
            printf("\nPRESS ANY KEY  TO EXIT....");
            getch();
            printf("YOU LOSS THE GAME...");
            getch();
            exit(0);
        }
        switch(readkey())
        {
        case ESC:
            printf("EXIT<-GAME");
            getch();
            exit(0);
        case UP:
            if(!shiftUP(A))
                move++;
            break;
        case DOWN:
            if(!shiftDOWN(A))
                move++;
            break;
        case LEFT:
            if(!shiftLEFT(A))
                move++;
            break;
        case RIGHT:
            if(!shiftRIGHT(A))
                move++;
        default:
            move++;
        }
        system("CLS");
        move--;
    }
    getch();
}
int shiftUP(int A[][4])
{
    int i,j,temp,zeroFound=0;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(A[i][j]==0)
            {
                zeroFound=1;
                break;
            }
        }
        if(zeroFound)
            break;
    }
    if(i==3)
        return(0);//SHIFTING NOT POSSIBLE:
    else
    {
        temp=A[i][j];
        A[i][j]=A[i+1][j];
        A[i+1][j]=temp;
        return(1);
    }
}
int shiftDOWN(int A[][4])
{
    int i,j,temp,zeroFound=0;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(A[i][j]==0)
            {
                zeroFound=1;
                break;
            }
        }
        if(zeroFound)
            break;
    }
    if(i==0)
        return(0);//SHIFTING NOT POSSIBLE:
    else
    {
        temp=A[i][j];
        A[i][j]=A[i-1][j];
        A[i-1][j]=temp;
        return(1);
    }
}
int shiftLEFT(int A[][4])
{
    int i,j,temp,zeroFound=0;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(A[i][j]==0)
            {
                zeroFound=1;
                break;
            }
        }
        if(zeroFound)
            break;
    }
    if(j==3)
        return(0);//SHIFTING NOT POSSIBLE:
    else
    {
        temp=A[i][j];
        A[i][j]=A[i][j+1];
        A[i][j+1]=temp;
        return(1);
    }
}
int shiftRIGHT(int A[][4])
{
    int i,j,temp,zeroFound=0;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(A[i][j]==0)
            {
                zeroFound=1;
                break;
            }
        }
        if(zeroFound)
            break;
    }
    if(j==0)
        return(0);//SHIFTING NOT POSSIBLE:
    else
    {
        temp=A[i][j];
        A[i][j]=A[i][j-1];
        A[i][j-1]=temp;
        return(1);
    }
}
//checkWin Function:
int checkwin(int A[][4])
{
    int i,j,k=0;
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            k<15?k++:(k=0);
            if(A[i][j]!=k)
                return 0;

        }
    }
    return(1);
}
//READKEY RETURN THE PLAYING BUTTON TO MAIN:
int readkey()
{
    int ch;
    ch=getch();
    if(ch==224)
        ch=getch();
    switch(ch)
    {
    case 27:
        return (ESC);
    case 72:
        return (UP);
    case 80:
        return (DOWN);
    case 75:
        return (LEFT);
    case 77:
        return(RIGHT);
    default:
        return(5);
    }
}
//SHOWMATRIX SHOW THE DISPLAY OF MATRIX:
void showMatrix(int A[][4])
{
    int i,j;

    system("color 0b");
    printf("\n\n\n\n------------------------\n|");
    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(A[i][j]!=0)
                printf(" %-2d | ",A[i][j]);
            else
                printf("    | ");
        }
        printf("\n------------------------\n");
        if(i!=3)
            printf("|");
    }
}
//SETMATRIX SET THE RANDOM VALUES IN MATRIX:
void setMatrix(int A[][4])
{
    int pool[16]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int maxIndex=14,index,i,j;
    srand(time(NULL));


    for(i=0; i<=3; i++)
    {
        for(j=0; j<=3; j++)
        {
            if(maxIndex>=0)
            {
                index=rand()%(maxIndex+1);
                A[i][j]=pool[index];
                pool[index]=pool[maxIndex];
                maxIndex--;
            }
            else
                A[i][j]=0;
        }
    }
}
