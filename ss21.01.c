#include <stdio.h>

int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	char fullName[50]="lap trinh co ban C"; 
	int age=20; 
	fprintf(fptr,"%s",fullName,age);
	return 0; 
}

