// Task 06 Login Attempts
#include <stdio.h>
int main(){
	int Pin = 1234; int UserPin;
	int Count, Rem;
	Count = 0; Rem =3;
	while(Count!= 3 || Rem !=0)
	{
		printf("Enter Your pin\nAnswer: ");
		scanf("%d", &UserPin);
		if (UserPin == Pin){
			printf("Login Successful");
			return 0;
		}
		else{
			Count = Count + 1;
			Rem = Rem - 1;
			printf("\nRemaining Attempts = %d\n", Rem);
		}
	}
	printf("Account Locked");
	
}
