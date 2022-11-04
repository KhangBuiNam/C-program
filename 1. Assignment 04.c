#include <stdio.h>
#include <conio.h>

void main(void){
    float a; //So thue 
    printf ("Nhap so thue trong mot nam :");
    scanf ("%f",&a);
    if (a<=60)
        printf ("Tax is 5 Pecent");
     else if (60 <= a< 120) printf ("Tax is 10");
        else if (120< a <=216) printf ("Tax is 15");
            else if (216<a<=384) printf ("Tax is 20");
                else if (384 <a<= 624) printf ("Tax is 25");
    getch();
    return 0;
}
