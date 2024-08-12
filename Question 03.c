#include <stdio.h>

int main(){
/*
. Write a C program that accepts (from the keyboard) a positive integer less than 1000 and prints out the sum
of the digits of this number.
Test data and expected output:
Enter a positive no less than 1000: -4
Entered number is out of range
Enter a positive no less than 1000: 1234
Entered number is out of range
Enter a positive no less than 1000: 546
Sum of the digits of 546 is 15
*/
int x,y,z,a,b;
printf("Enter a positive no less than 1000: ");

scanf("%d",&a);
if(a>0 && a<1000){
while(a)
{
    
z = z + a % 10;
    a /= 10;

}
printf("\nSum of the digits of %d is",z);


}
else
{
printf("Entered number is out of range");}



return 0;
}
