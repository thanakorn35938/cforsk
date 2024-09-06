#include <stdio.h>
//Main function
int main() {
    //input
    float price;
    float options;
    printf("Enter teacher post-tax rate 0.93 or 1.07: ");
    scanf("%f", &options);
    printf("Enter the price include vat: ");
    scanf("%f", &price);

    //Processing
    float priceWithoutVat = price / options;
    loop(10);

    //Output Handle Ex
    printf("The price without vat is: %.2f", priceWithoutVat);

}

//User-Defined Function - มี หรือ ไม่มีก็ได้
void loop(int i) {
    int i = 0;
    while (i < 10) {
        printf("Hello World\n");
        i++;
    }
}

/**
 * @brief 
 * It takes two integers as parameters and returns the result of the calculation.
 *
 * @param num1 The first integer value.
 * @param num2 The second integer value.
 * @return The result of the calculation.
 */
 * 
 */ This function performs a calculation based on the given input values.