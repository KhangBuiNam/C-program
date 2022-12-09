#include <stdio.h>
#include <conio.h>
int main(void)
{
    system ("cls");
    int y=5; 
    int *yPtr =&y;
    printf ("The adress of y is %p "
            "\nThe value of yPtr is %p", &y, yPtr);
    printf ("The value of y is %d"
            "\nThe value of *yPtr is %d", y, *yPtr);
    printf("\n\nShowing that * and & are complements of"
            "each other \n&*yPtr = %p"
            "\n*&yPtr=%p",&*yPtr, *&yPtr);
    return 0;

}