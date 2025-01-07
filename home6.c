#include <stdio.h>
int main() {
    for(int i=0;i<5;i++){
        for(int y=0;y<10;y++){
           if(i==0) 
           { printf("#");}
    else  if(i==4){printf("#");}
        else { for(y=0;y<10;y++)
        {
            if(y==0){printf("#");}
            else if(y==9) {printf("#");}
            else{printf("*");}}
        }}
        
        printf("\n"); 
        } 
        
    return(0);
}