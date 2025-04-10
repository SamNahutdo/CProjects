//Samuel Angelo udtohan
//1a 10:30am - 12:30pm
//Pointer1


//include library
#include <stdio.h>




//main function
int main() {
    int num, *ptr;



    printf("\n\n\t\t\t\t\t                        Enter an integer: ");
    scanf("%d", &num);



    ptr = &num;
    printf("\n\n\t\t\t\t\t                        Before increase: %d\n", num);



    *ptr += 10;
    printf("\n\n\t\t\t\t\t                        After increase: %d\n", num);

    return 0;
}
