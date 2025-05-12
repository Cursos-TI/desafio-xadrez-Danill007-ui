#include<stdio.h>

void movertorre(int casas){
    if(casas > 0){
        printf("cima (torre)\n");
        movertorre (casas - 1);
    }
}

void moverbispo(int casas){
    if(casas > 0){
        printf("direita-cima(bispo)\n");
        moverbispo(casas - 1);
    }
}

void moverrainha (int casas){
    if(casas > 0){
        printf("esquerda(rainha)\n");
        moverrainha(casas - 1);
    }
}

int main (){
    
    movertorre(5);
    
    moverbispo(5);

    moverrainha(8);
    
    for (int movimentocomp = 1; movimentocomp > 0; movimentocomp--) {
    for (int cavalo = 1; cavalo <= 2; cavalo++) {
        printf("cima (cavalo) \n");
    }
        printf("direita (cavalo) \n");
    }
    



    return 0;
} 