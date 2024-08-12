#include <stdio.h>

int main(){
/*
 For first 50 units Rs. 50/unit
For next 100 units Rs. 75/unit
For next 100 units Rs. 120/unit
For unit above 250 Rs. 150/unit
An additional surcharge of 20% is added to the bil
 */

printf("Enter No Of Units: ");
int y;
scanf("%d",&y);
if(y<0){
printf("Enter Correct Number");}
else if (y<=50){
printf("Charge is %f",y*50 + (y*50)*0.2);

}
else if (y<=150){
printf("Charge is %f",50*50 + (y-50)*75 + (50*50+(y-50)*75)*0.2);

}
else if (y<=250){
printf("Charge is %f",50*50 + 100*75 + (y-150)*120 + (50*50+100*75+(y-150)*120)*0.2);
}
else if (y<=250){
printf("Charge is %f",50*50 + 100*75 + (y-150)*120 + (50*50+100*75+(y-150)*120)*0.2);

}
else{
printf("Charge is %f",50*50 + 100*75 + (150)*120 +(y-250)*150+ (50*50+100*75+(150)*120+(y-250)*150)*0.2);

}


return 0;
}
