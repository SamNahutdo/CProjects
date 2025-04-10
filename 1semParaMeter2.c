//Samuel Angelo Udtohan
//1a 10:30am - 12:30pm
//parameter passing
//input price
//increase price
//output price
//display original price, increased price





//include library
#include <stdio.h>





//function calls
float input();
void increase(float *price);
void output(float originalPrice, float increasedPrice);






//main function
int main() {
    float originalPrice, increasedPrice;
    originalPrice = input();
    increasedPrice = originalPrice;
    increase(&increasedPrice);
    output(originalPrice, increasedPrice);
    return 0;
}






//input price
float input() {
    float price;
    do {
        printf("\n\t\t\t\t\t                             Enter the product price: ");
        scanf("%f", &price);
        if (price <= 0) {
            printf("\n\t\t\t\t\t                             Invalid price! Price must be greater than 0.\n");
        }
    } while (price <= 0); 
    return price;
}






//increase price
void increase(float *price) {
    if (*price <= 500) {
        *price *= 1.03; 
    } else if (*price > 500 && *price <= 1000) {
        *price *= 1.05; 
    } else if (*price > 1000 && *price < 3000) {
        *price *= 1.06; 
    } else {
        *price *= 1.07; 
    }
}






//output price
void output(float originalPrice, float increasedPrice) {
    printf("\n\t\t\t\t\t                             Original Price: %.2f\n", originalPrice);
    printf("\n\t\t\t\t\t                             Increased Price: %.2f\n", increasedPrice);
}


