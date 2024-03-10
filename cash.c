#include <stdio.h>
#include <stdlib.h>



int main () {
 int  quater, dime, nickel, cent, change, coins, change2    ; 
quater = 25 ;
dime = 10 ;
nickel = 5; 
cent = 1;
coins = 0 ;

printf("change owed: ");
scanf("%d", &change);
change2 = change; 

if (change == 0 ){
    printf("0");
} else {

//while(change !=0) {
   while (change >25 ){
    change -=25 ;
    coins++;
   }
   //printf(" quotters %d",coins);
   while (change > 10 ) {
    change -=10 ;
    coins++;
   }//printf(" dimmes %d",coins);
   while (change >= 5 && change <10 ) {
    change -=5 ;
    coins++;
   // printf(" nickels %d",coins);
   }while (change >= 1 && change <5 ) {
    change -= 1 ;
    coins++;
   }//printf(" pennies %d",coins);





    printf("%d\n ",coins);
}



//printf("%d",change);



}