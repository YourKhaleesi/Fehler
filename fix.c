#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void readString (char string[]);//- liest Text von Konsole ein (max. Länge 100)
int getStringLength (char string[]);// – liefert Länge von string 
void copyString (char toString[], char fromString[]);// – kopiert fromString nach toString 
void printString(char string[]);
void turnString (char string[]);// – string von hinten nach vorn 

int main(void){
	char a[100];
	char b[100];
	//int length = getStringLength(a);
	printf("was moechten Sie speichern?\n");
	readString(a);
	
	printf("Der String ist %d Zeichen lang\n",getStringLength(a));
	
	copyString (b, a);
	printf("Der String wurde kopiert: %s\n",b);
	printString(b);
	
	
	turnString(a);
	printString(a);
	return 0;
}
void readString (char string[]){ //- liest Text von Konsole ein (max. Länge 100)
	fflush(stdin);
	fgets(string, 100, stdin); 
	printf("%s",string);	
}
 int getStringLength (char string[]){
	int length=0;
	for(int i=0; string[i] != '\0'; i++){
		length++;
	}
	return length;
}

void copyString (char toString[], char fromString[]){
	for(int i=0; fromString[i] != '\0';i++){
	toString[i]=fromString[i];
	//strcpy(toString,fromString);
}
}
void printString(char string[]){
	int l = getStringLength(string);
	//for(int i=0; i < l; i++){
	//	printf("%d", string[i]);
	//}
	printf("%s", string);
}

void turnString (char string[]){
	int length=getStringLength(string);
	int stringEnd=length-2;
	int stringBegin=0;
	char temp;
	
	for(int i=0; i<(length/2) ;i++){
		temp=string[stringBegin];
		string[stringBegin]=string[stringEnd];
		string[stringEnd]=temp;
		stringBegin++;
		stringEnd--;
	}
}
		
		
	
