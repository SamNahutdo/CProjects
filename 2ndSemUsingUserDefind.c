//Samuel Angelo Udtohan
//Allen Almonical


#include <stdio.h>

float acceptUnitPrice() {
    float unit_price;





    printf("\n\n\t\t\t\t\t                                **********************************");
    printf("\n\t\t\t\t\t                                **   Welcome to Sam System!    ***");
    printf("\n\t\t\t\t\t                                **********************************\n");
    printf("\n\t\t\t\t\t                                Enter the unit price of the product: ");
    scanf("%f", &unit_price);
    return unit_price;
}






int acceptQty() {
    int quantity;
    printf("\n\t\t\t\t\t                                Enter the quantity of the product: ");
    scanf("%d", &quantity);
    return quantity;
}






float computeDiscount(float unit_price) {
    return unit_price * 0.05; 
}






float computeDiscountedPrice(float unit_price, float discount) {
    return unit_price - discount;
}






float computeAmountPayable(float discounted_price, int quantity) {
    return discounted_price * quantity;
}







void displayAmountPayable(float amount_payable) {
    printf("\n\t\t\t\t\t                                Amount payable:   $%.2f\n", amount_payable);
}








int main() {







    float unit_price = acceptUnitPrice();
    int quantity = acceptQty();

    float discount = computeDiscount(unit_price);
    float discounted_price = computeDiscountedPrice(unit_price, discount);
    float amount_payable = computeAmountPayable(discounted_price, quantity);

    displayAmountPayable(amount_payable);

    return 0;
}
