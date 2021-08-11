#include <stdio.h>
#include <windows.h>
void prt_field();
void gotoxy(int x_data, int y_data);
void mino_I(int px, int py, int rot);
void mino_O(int px, int py);
void mino_Z(int px, int py);
void mino_S(int px, int py);
void mino_L(int px, int py);
void mino_J(int px, int py);
void mino_T(int px, int py);


#define field_x 10
#define field_y 20
boolean field_data[field_x][field_y];
int x = 0;
int y = 0;

void main(void)
{
    system("chcp 65001"); //윈도우 cmd 창 UTF-8로 설정
    system("mode con cols=180 lines=60");
    system("cls");
    mino_T(5, 5);

    prt_field();

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

void mino_I(int px, int py, int rot)
{
    if(rot == 2){rot = 0;}
    switch (rot)
    {
        case 2 : rot = 0;
    case 0 :
    field_data[px][py-3] = 1;
    field_data[px][py-2] = 1;
    field_data[px][py-1] = 1;
    field_data[px][py] = 1;
            break;
    case 1 :
    field_data[px][py-3] = 1;
    field_data[px][py-2] = 1;
    field_data[px][py-1] = 1;
    field_data[px][py] = 1;
    default:
        break;
    }

    
}
void mino_O(int px, int py)
{
    field_data[px][py] = 1;
    field_data[px-1][py] = 1;
    field_data[px-1][py-1] = 1;
    field_data[px][py-1] = 1;
}
void mino_Z(int px, int py)
{
    field_data[px][py] = 1;
    field_data[px-1][py] = 1;
    field_data[px-1][py-1] = 1;
    field_data[px-2][py-1] = 1;
}
void mino_S(int px, int py)
{
    field_data[px][py] = 1;
    field_data[px-1][py] = 1;
    field_data[px][py-1] = 1;
    field_data[px+1][py-1] = 1;
}
void mino_L(int px, int py)
{
    field_data[px][py] = 1;
    field_data[px-1][py] = 1;
    field_data[px-1][py-1] = 1;
    field_data[px-1][py-2] = 1;
}
void mino_J(int px, int py)
{
    field_data[px][py] = 1;
    field_data[px-1][py] = 1;
    field_data[px][py-1] = 1;
    field_data[px][py-2] = 1;
}
void mino_T(int px, int py)
{
    field_data[px][py] = 1;
    field_data[px-1][py] = 1;
    field_data[px+1][py] = 1;
    field_data[px][py-1] = 1;
}