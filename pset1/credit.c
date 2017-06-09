#include <stdio.h>
int main(){
	char number[80];
	const char* card[11] = {0};
	char invalid[8] = "INVALID";
	int length, sumOddDigit, sumEvenDigit, ok, retry = {0};
	sumEvenDigit = 0;
	printf("Number: ");
	do{
		if(retry){printf("Retry: ");}
		scanf("%s%n",number,&length);
		ok = true;
		for(int i=0; i<=length-1; i++){
			if((number[i] = number[i]-48) > 9){ok = false; retry = true;}}
	}while(!ok);
	if(number[0]==4 && length==13 || (length == 16)){*card = "VISA";}
	else if( (number[0]==3) && ((number[1]==4) || (number[1]==7)))
		*card = "AMEX";
	else if((number[0]==5) && (1<=number[1]<=5)){*card = "MASTERCARD";}
	for(int i=length-1; i>=0; i-=2){sumOddDigit += number[i];}
	for(int i=length; i>0; i-=2){
		sumEvenDigit += ((number[i]*2>9)?number[i]*2-9:number[i]*2);}
	printf("%s\n",( ((sumEvenDigit + sumOddDigit)%10)?invalid:*card));
}
