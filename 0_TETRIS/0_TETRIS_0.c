#include <stdio.h>
#include <windows.h>
void prt_field();
void gotoxy(int x_data, int y_data);
#define field_x 10
#define field_y 20
boolean field_data[field_x][field_y];
int x = 0;
int y = 0;

void main(void)
{
    system("chcp 65001"); //윈도우 cmd 창 UTF-8로 설정
    system("cls");

    prt_field();
    gotoxy(12,12);
    printf("a");
}

void prt_field()
{
    for (int j = 0; j < field_x + 2; j++){printf("□");}
    printf("\n");
    for (int i = 0; i < field_y; i++)
    {
        printf("□");
        for (int j = 0; j < field_x; j++)
        {
            if (field_data[j][i] == 0){printf("  ");}
            else{printf("■");}
        }
        printf("□");
        printf("\n");
    }
    for (int j = 0; j < field_x + 2; j++){printf("□");}
}

void gotoxy(int x_data, int y_data)
{
    COORD pos={x_data,y_data}; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}