#include <stdio.h>


int main(){
    int indice = 13, soma = 0, k = 0;
    while(k < indice){
        k++;
        soma+= k; 
    }

    printf("%d", soma); // resultado vai ser 91


    return 0;
}