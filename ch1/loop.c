// while loop
#include <stdio.h>
int main(){
   char a[3];
   while (a[0]!='Q'){
       puts("Enter something");
       scanf("%2s",a);
       printf("you got it");
       if (a[0]=='A'){
           printf("respect ++");
            break;
       }

   }

        
   return 0;
}
