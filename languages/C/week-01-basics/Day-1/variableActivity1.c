#include <stdio.h>
#include <stdbool.h>
int main()
{
    int grade = 0;
    int check;
    bool stillchecking;

  do{

     printf("what is your grade? ");
  scanf("%d", &grade);

  if (grade > 0 && grade < 100){
   
    if (grade >= 98){
        printf("Highest Honors!\n");
    }

    else if (grade >= 95){
        printf("High Honors!\n");
    }

    else if (grade >= 90){
        printf("Honors!\n");
    }

    else if (grade >= 75){
        printf("No Honors\n");
    }

    else{
        printf("failed\n");
    }
  }

  else{printf("nothing\n");}
  
  
  printf("still checking? 1 for yes, 0 for no\n");
  scanf("%d", &check);
  check = stillchecking ? true : false;

  if(stillchecking) {
   printf( "Restarting.");
  }

  else{
  return 0;}
  
  }while (check = 1);
}z
