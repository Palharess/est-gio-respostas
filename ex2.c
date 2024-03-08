#include <stdio.h>

int fibo(int qtd){
    if(qtd == 0){
        return 0;
    }
    else if(qtd == 1) return 1;
    else{
        return fibo(qtd - 1) + fibo(qtd - 2);
    }
}


int main(){
    int i = 0, num, last;
    printf("Escreva o numero que vc deseja verificar: ");
    scanf("%d", &num);
    if(num >= 0){
        while(1){
            last =  fibo(i);
            if(last == num){
                printf("Pertence!\n");
                break;
            }
            else if (last > num){
                printf(("Nao pertence!\n"));
                break;
            }
            i++;
        }
    }
    else{
        printf(("Nao pertence!\n"));
    }
    return 0;
}