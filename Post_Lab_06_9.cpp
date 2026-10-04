// Task 09 Electricity Bill Analysis
#include <stdio.h>
int main(){
	int Unit[5];
	int U_Unit, UTotal, Max, Min;
	float SAmount, BTotal;
	SAmount = 0.0; BTotal = 0.0; Max=-1; Min=10000000;
	BTotal = 0; UTotal =0;
	for(int i=0; i<5; i=i+1){
		printf("Enter Units: ");
		scanf("%d", &U_Unit);
		Unit[i] = U_Unit;
	}
	for(int i=0; i<5; i=i+1){
		SAmount = 0.0;
		BTotal = BTotal + (Unit[i] * 10);
		if(Unit[i] > 500){
			SAmount = (Unit[i] *10) * 0.05;
		}
		BTotal = BTotal + SAmount;
		UTotal = UTotal + Unit[i];
		
		if(Unit[i] < Min)
			Min = Unit[i];
		if (Unit[i] > Max)
			Max = Unit[i];	
	}
	printf("Total Units = %d\n", UTotal);
	printf("Highest units = %d\n", Max);
	printf("Lowest units = %d\n", Min);
	printf("Total Amount = %.2f", BTotal);	
}
