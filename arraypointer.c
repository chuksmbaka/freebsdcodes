#include<stdio.h>

//programm that counts the length of an array or file
int stringlen(char *str){//function accepts pointer to char or array name
	int n;
	for(n = 0; *str != '\0'; str++)
		n++;
	return n;
}


int main(){
	int strnumber=0;
	char str[30] = "My name is Chuks"; //A string of characters
	strnumber = stringlen(str); //arry name passed to the function
	printf("number of letter: %i\n", strnumber);

	//we can pass a part of the arra instaed of the whole by
	int halfarray = 0;
	halfarray = strnumber/2;
	int sumhalfarray = stringlen(str+halfarray);
	printf("sum of half the array: %i\n", sumhalfarray);
	return 0;
}


