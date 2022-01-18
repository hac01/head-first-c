#include <stdio.h>

int main(){
    //create input var card_name create a var val check card_name ==k,q,j==10,a==11
    //check if val is in between 3 and 6
    //otherwise check if card was 10 

    char card_name[3];
    scanf("%2s",card_name);
    int val=0;
    if (card_name[0]=='K'){
        val=10;
    }
    else if (card_name[0]=='Q') {
        val=10;

    }
    else if (card_name[0]=='J'){
        val=10;
    }
    else if (card_name[0]=='A'){
        val=11;
    }
    else {
        val=atoi(card_name);
    }
    if ((val>=3) &&(val<=6)){
        puts("Count gone up");

    }
    else if(val==10){
        puts("Count has gone down");
    }
    return 0;
}