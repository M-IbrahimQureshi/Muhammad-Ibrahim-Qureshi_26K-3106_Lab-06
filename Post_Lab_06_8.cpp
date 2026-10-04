// Task 08 Shopping Cart
#include <stdio.h>
int main(){
    float Prize[5];
    float Cost, Total, Discount, FAmount;
    Total = 0.0; Discount= 0.0;

    for(int i =0; i<5; i=i+1){
        printf("Enter Prizze of Product\tAnswer: ");
        scanf("%f", &Cost);
        Prize[i] = Cost;
    }
    for(int i =0; i<5; i=i+1){
        Total = Total + Prize[i];
    }
    if (Total > 10000){
        Discount = 0.1;
        FAmount = Total - (Total*Discount);
    }
    else
        FAmount = Total;
    printf("Original Total = %.2f\n", Total);
    printf("Discount = %.2f%%\n", Discount*100);
    printf("Final Amount %.2f\n", FAmount);

}


