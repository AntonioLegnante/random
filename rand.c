/*generazione di sequenze pseudo-casuali a caso*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int random;
    srand(time(NULL));
    
    printf("genera numeri casuali dalla sequenza 50 51 52 53 54\n");
    random = 50 + rand() % 5;
    printf("numero estratto = %d \n", random);

    printf("genera numeri casuali dalla sequenza 2 4 6 8 10\n");
    random = 1 + rand() % 5;    /*estrazione di una numero compreso da 0 e 5*/
    random *= 2;    /*stratagemma per generare i numeri desiderati*/
    printf("numero estratto = %d \n", random);

    printf("genera numeri casuali dalla sequenza 3 5 7 9 11\n");
    random = 1 + rand() % 5;    /*estrazione di una numero compreso da 0 e 5*/
    random = random * 2 + 1;    /*stratagemma per generare i numeri desiderati*/
    printf("numero estratto = %d \n", random);

    printf("genera numeri casuali dalla sequenza 6 10 14 18 22\n");
    random = 1 + rand() % 5;    /*estrazione di una numero compreso da 0 e 5*/
    random = (random * 2 + 1) * 2;    /*stratagemma per generare i numeri desiderati*/
    printf("numero estratto = %d \n", random);
    return 0;
}