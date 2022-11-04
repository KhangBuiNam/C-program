#include <stdio.h>
#include <conio.h>
void main(void)
{
    int a,b;
    printf ("Nhap a va b:");
    scanf ("%d %d",&a ,&b);
    printf ("Gia tri bieu thuc la : %d ",(a+b)*(a+b)*(a+b));
    getch();
    return 0;
}