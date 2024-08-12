//
//  Question 02.c
//
//  Created by kavindu on 2024-08-12.
//

#include <stdio.h>

int main(){

float a,b,c;
printf("Input first side:");
scanf("%f",&a);
printf("Input second side:");
scanf("%f",&b);
printf("Input third side:");
scanf("%f",&c);
if((a==b) && (b==c) && (c==a)){
printf("Triangle is equilateral triangle");
} else if((a==b) || (b==c) || (c==a)){
printf("Triangle is Isosceles triangle");
}
else if(!(a==b) && !(b==c) && !(c==a)){
printf("Triangle is Scalene triangle");
}

    
    return 0;
    
}
