#include<stdio.h>
int Pal(int num){
    int rem, sum =0 ;
    for(int i=0; i<=num; i++){
        rem = num % 10 ;
        sum = sum * 10 + rem;
        num = num / 10; 

    }
    if (sum == num){
        
    }
}