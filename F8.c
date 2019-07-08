#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 


int throwCoin();
char * saveResult();
int h = 0, t = 0;

int main(int argc, char *argv[]){

    srand (time(NULL));
    int throw;
    sscanf(argv[1],"%d", &throw);
    
    char launch[*argv[1] + 1];

    for(int i = 0; i < throw; i++){
        char *r = saveResult(); 
        strcat(launch, r);
    }

    printf("\n\n %s, #de caras = %d, # de sellos = %d \n\n", launch, h, t);

    return 0;

}

char * saveResult(){

    int throw = throwCoin();
    char *r;

    if (throw == 0)
    {
        h = h + 1;
        r = "C";

    } else {
        t = t + 1;
        r = "T";
    }

    return r;
}

int throwCoin(){

    int n = rand() % 2;
    
    return n;
}