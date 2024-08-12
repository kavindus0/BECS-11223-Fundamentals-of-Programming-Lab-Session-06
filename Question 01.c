#include <stdio.h>

int main(){
/*    
Write a C program which reads a single letter of alphabet. If it is a lowercase between ’a’ and ’g’, the
program prints out the alphabet in uppercase form. If it is anything else, the program should print out
uppercase ’X’.
Test data and expected output:
Enter your character: b
Output is: B
Test data and expected output:
Enter your character: y
Output is: X
*/

	char x;
printf("Enter your character:");
scanf("%c",&x);
if (!(97<=x && 103<=x)){
printf("Output is: %c",x-32);
}
else{
printf("X");
   }


}
