#include <stdio.h>
int main(){
    char card_name[3];
    puts("Enter card name:");
    scanf("%2s",card_name);
   // printf("%2s",card_name);
   int val=0;
   if (card_name[0]=='a'){
       val=10;
       printf("%i",val);
   }
   else if (card_name[0]=='b'){
       val=100;
       printf("%i",val);
   }
   else if (card_name[0]=='f'){
       val=1337;
       printf("%s %i","Your R reall 1337 heker",val);

   }
   else {
        printf("idk");
        
   }

    return 0;

}