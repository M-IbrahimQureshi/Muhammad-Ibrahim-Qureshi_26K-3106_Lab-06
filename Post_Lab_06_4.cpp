// Task 04 Online Shopping
#include <stdio.h>
int main(){
	int Prize, WantAdd, Total;
	Total = 0;
	WantAdd = 1;
	float Discount = 0.0;
	float FAmount;
	while(WantAdd == 1)
	{
		printf("Enter Prize of Item: ");
		scanf("%d", &Prize);
		Total = Total + Prize;
		printf("Press 1 to add Another item\t0 to stop");
		scanf("%d", &WantAdd);
	}
	if (Total > 10000){
		Discount = 0.1;
		FAmount = Total - (Total * Discount);
	}
	else
		FAmount = Total;	
	printf("Total Prize = %d\n", Total);
	printf("Discount = %f%%\n", Discount*100);
	printf("Final Amount = %f\n", FAmount);
	
}
