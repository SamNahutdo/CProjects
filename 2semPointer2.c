//Samuel Anglo Udtohan
//1a 10:30am - 12:30pm
//pointer2



//include library
#include <stdio.h>






//function calling
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;     
}





//main function
int main() {
    int num1, num2;



    printf("\n\n\t\t\t\t\t                        Enter two integers: ");
    scanf("%d %d", &num1, &num2);




    printf("\n\n\t\t\t\t\t                        Before swap: num1 = %d, num2 = %d\n", num1, num2);




    swap(&num1, &num2);
    printf("\n\n\t\t\t\t\t                        After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}