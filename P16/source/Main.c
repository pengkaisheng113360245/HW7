#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
    FILE* fptr;
    char str[MAX], ch;
    int i = 0;

    if (fopen_s(&fptr, "output.txt", "a") != 0) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("�п�J�r��A��ENTER�䵲����J:\n");
    while ((ch = _getche()) != ENTER && i < MAX)
        str[i++] = ch;

    putc('\n', fptr);
    fwrite(str, sizeof(char), i, fptr);
    fclose(fptr);

    printf("\n�ɮת��[����!!\n");
    system("pause");
    return 0;
}
