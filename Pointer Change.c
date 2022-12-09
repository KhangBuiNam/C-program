//Con tro hoan doi hai so
#include <stdio.h>
#include <conio.h>
int change(int *a, int *b);
int main()
{
    int a;
    int b;
    printf ("Nhap 2 so: \n");
    scanf ("%d %d", &a, &b);
    change (&a,&b);
    printf ("So sau khi trao doi: \n");
    printf ("so thu nhat : %d", a);
    printf ("\n so thu hai: %d",b);
    getch();
    return 0;
}
int change(int *a, int *b)
{
    int temp;
    temp = *a;
    *a= *b;
    *b= temp;
}