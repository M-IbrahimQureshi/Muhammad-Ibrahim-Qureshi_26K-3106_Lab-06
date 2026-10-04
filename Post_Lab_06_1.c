// Task 01
#include <stdio.h>
int main(){

	int Amount = 1;
	int Count = 0;
	int RBal = 50000;
	while(Amount > 0)
	{
		printf("Enter Withdrawl Amount: ");
		scanf("%d", &Amount);
		RBal = RBal - Amount;
		Count = Count + 1;
	}
	printf("Remaining Balance = %d\n", RBal);
	printf("N0 of Withdrawls = %d\n", Count);	
}
