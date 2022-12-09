//Tinh trung binh cong
#include <stdio.h>
#include <conio.h>

void main(void)
{
    int a[50],i,n,sum =0;
    printf ("nhap vao gia tri n: ");
    scanf ("%d",&n);
    //Nhap du lieu vao mang
    for (i=0;i<n;i++)
    {
        printf ("Nhap cac gia tri cua day: ");
        scanf ("%d",&a[i]);

    }
//Tinh tong gia tri n
    for (i=0;i<n;i++)
    {
        sum+= a[i];
    }
    printf ("Gia tri trung binh cong la: %2f\n", (float)sum/n);
    getch();
}