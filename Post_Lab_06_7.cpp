// Task 07 Student Marks Analysis
#include <stdio.h>
int main(){
	int Marks[5];
	int Total, Max, Min;
	float Avg;
	Total = 0; Max = -1; Min = 999;
	for(int i =0; i<5; i=i+1){
		printf("Enter Marks of Student %d: \n ", i+1 );
		scanf("%d", &Marks[i]);
	}
	for(int i = 0; i<5; i=i+1){
		Total = Total + Marks[i];
		if (Marks[i] < Min)
			Min = Marks[i];
		if (Marks[i] > Max) 
			Max = Marks[i];	
	}
	Avg = Total/5.0;
	printf("Total Marks = %d\n", Total);
	printf("Average Marks = %.2f\n", Avg);
	printf("Highest Marks = %d\n", Max);
	printf("Lowest Marks = %d\n", Min);
	
}
