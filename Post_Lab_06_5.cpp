// Task 05
// Restaurant Bill 
#include <stdio.h>
int main(){
	int Prize, WantItem, Total;
	float Discount, FPrize;
	Discount = 0.0;
	WantItem = 1;
	Total = 0;
	
	while(WantItem == 1){
		printf("Enter Prize of Item: ");
		scanf("%d", &Prize);
		Total = Total + Prize;
		printf("Press 1 to Add Item\tPress 0 to stop\nAnswer: ");
		scanf("%d", &WantItem);
	}
	if (Total >5000){
		Discount = 0.05;
		FPrize = Total - (Total*Discount);
	}
	else
		FPrize = Total;
	printf("Total Bill = %d\n", Total);
	printf("Discount = %.0f%%\n", Discount *100);
	printf("Final Bill = %.2f\n", FPrize);
	
}
