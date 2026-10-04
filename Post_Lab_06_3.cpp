// Task 03 Mobile Recharge
#include <stdio.h>
int main(){
	int Amount, Total, Count;
	Total = 0; Count = 0; Amount = 1;
	while(Amount > 0)
	{	
		printf("Press 0 to Stop\nEnter Balance Amount: ");
		scanf("%d", &Amount);
		if(Amount >0){
			Total = Total + Amount;
			Count = Count + 1;
		}
		if (Total > 5000)
			printf("Recharge Limit Reached");
	}
	printf("Total Recharge = %d", Total);
	printf("No of Recharge = %d", Count);	
}
