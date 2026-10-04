// Task 02 Student Marks
#include <stdio.h>
int main(){
	float Marks, Total, Avg;
	int Count;
	Total = 0.0; Count = 0;
	while(Marks != -1){
		printf("Enter Marks\tPress -1 to Stop\nAnswer: ");
		scanf("%f", &Marks);
		if (Marks != -1){
			Total = Total + Marks;
			Count = Count + 1;
		}
	}
	Avg = Total/Count;
	printf("Total Marks = %.2f\n", Total);
	printf("Number of Students = %d\n", Count);
	printf("Average marks = %.2f\n", Avg);
	
}
