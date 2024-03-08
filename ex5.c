#include <stdio.h>
#include <string.h>



int main(){
    char frase[100];
    char temp;
    scanf("%[^\n]", frase);
    int tamanho = strlen(frase); // função pronta apenas para pegar o tamanho, como poderia predeterminar um tamanho não vi problema em utilizar
    for(int i = 0; i < tamanho/2; i++){
        temp = frase[i];
        frase[i] = frase[tamanho - 1 - i];
        frase[tamanho - 1 - i] = temp;
    }
    printf("%s", frase); // invertida

    return 0;
}
