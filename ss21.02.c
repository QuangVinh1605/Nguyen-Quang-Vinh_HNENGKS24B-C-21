#include <stdio.h> 
int main(){
	FILE *fptr;
	char firstChar; 
	fptr=fopen("bt01.txt","r");
	firstChar = fgetc(fptr);
    if (firstChar == EOF) {
        printf("File bt01.txt rong.\n");
    } else {
        printf("Ki tu dau tien trong file la: '%c'\n", firstChar);
    }
    fclose(fptr); 
} 
