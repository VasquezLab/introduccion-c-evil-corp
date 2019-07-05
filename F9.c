#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <ctype.h>

#define MAX_LEN 128

int menu();
void generateNumbers();
void printQuestion();
void verify(int r);
void close();
void print_image(FILE *fptr);
int n1, n2, ask;

void main(){

    menu();

    int r;
    srand (time(NULL));
    generateNumbers();
    printQuestion();

}

void generateNumbers(){

    n1 = rand() % 10;
    n2 = rand() % 10;

}


void printQuestion(){
    printf("¿Cuánto es %d veces %d?\n", n1, n2);
    scanf("%d", &ask);

    
    char c = getchar();

    if(isdigit(c))
        printf("Porfavor ingresa un numero! \n\n");
        
    else if (ask == 6666)
    {
        close();
    }
}


void verify(int r){

    if (n1*n2 == r){
        printf("Muy bien!\n");
        generateNumbers();
        printQuestion();

    }else{
        printf("No. Por favor intenta nuevamente!\n");
        printQuestion();
    }
}

void close(){

    printf("Hasta pronto Loser!!! Que la Fuerza te acompañe\n");
    exit(0);
}


int menu(){

    char *filename = "menu.txt";
    FILE *fptr = NULL;
 
    if((fptr = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }
 
    print_image(fptr);
 
    fclose(fptr);

    fflush ( stdout );
    getchar();

    return 0;
}

void print_image(FILE *fptr)
{
    char read_string[MAX_LEN];
 
    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);
}