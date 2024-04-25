#include <stdio.h>
#include <stdlib.h>

int main () {

int secondSum, firstSum , multiplication ;
long numberOfCredit, numberOfCredit2 ;

printf("Enter the number: ");
scanf("%ld", &numberOfCredit);

long slice2 = 0;
numberOfCredit2 = numberOfCredit;

while (numberOfCredit2 != 0){

    numberOfCredit2  /=10;
    slice2++; 
}
int array1[slice2];

    // Initialize the array elements separately
    for (int i = 0; i < slice2; i++) {
        array1[i] = 0; // Initialize each element to 0
    }



for (int i = 0; i<slice2 ; i++ ){
    array1[i] = numberOfCredit %10;
    numberOfCredit /= 10;

}


  multiplication = 0;
  firstSum = 0;
for (int i =1;i<(slice2); i+=2 ){
       
       //printf(" .%d.",i);
      // printf("%d",array1[i]); 
     
      //printf("%d",array1[i]); 
       multiplication =  (array1[i]*2);
      //printf(" %d  ",multiplication);
      
      if (multiplication >9){
        multiplication = multiplication % 10 + (multiplication/10);
        }
      
      firstSum += multiplication;


}

printf("\n");
for (int i = 0; i<slice2 ; i++ ){
     printf("%d", array1[i]) ;

}

printf("\n");
if (slice2 %2 == 0){
 secondSum = 0;
 multiplication = 0;
for (int j =0; j<(slice2-1);j+=2 ){
       
      // printf("%d ",j);
       //printf("%d",array1[j]); 
       multiplication =  array1[j];
    
     printf(" %d ",multiplication);
      
      
      
      secondSum += multiplication; 
    
     //printf("%d", firstSum );
}
}
else {
    for (int j =0; j<(slice2);j+=2 ){
       
      // printf("%d ",j);
       //printf("%d",array1[j]); 
       multiplication =  array1[j];
    
     //printf(" %d ",multiplication);
      
      
      
      secondSum += multiplication; 
    
     //printf("%d", firstSum );
}
}
  int startingDigits=0;
  if (array1[slice2-2]==0){
  startingDigits= array1[slice2-1];
  startingDigits+= 10*(array1[slice2-2]);
  }
  else{
    startingDigits=(10* array1[slice2-1]);
  startingDigits+=(array1[slice2-2]);

  }
 
 printf("\n");
// 
  //
  //  printf("%d", firstSum );
    printf("\n");
  //  printf("%d", secondSum );
  //  printf("  %ld", slice2);
     printf ("%d",startingDigits);
   // Check validity
    if ((firstSum+secondSum) % 10 == 0) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
//int array [30] 
}