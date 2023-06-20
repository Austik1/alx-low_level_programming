#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * return: 0 (Successful)
 */
int main(void){
	char a;
	int b; 
	long int c;
	long long int d;
	float f;
printf("size of char,%lu bytes\n",(unsigned long) sizeof(a));
printf("size of int,%lu bytes\n",(unsigned long) sizeof(b));
printf("size of long int,%lu bytes\n",(unsigned long) sizeofof(c));
printf("size of long long int,%lu bytes\n",(unsigned long) sizeofof(d));
printf("size of float,%lu bytes\n",(unsigned long) sizeofof(f));
return (0);
}
