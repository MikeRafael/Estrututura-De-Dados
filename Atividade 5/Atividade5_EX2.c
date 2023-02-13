#include <stdio.h>


int soma(int valor){
    if(valor == 0){
        return 0;
    }else{
        return valor + soma(valor -1);
     }
}

    main(){
    int num=0, r=0;
    
    printf("Digite o numero:");
    scanf("%d", &num);
    
    r=soma(num);
    printf("Valor somado %d\n", r);
}
