// Your First C++ Program

#include <iostream>
#include <time.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <cstdio>
using namespace std;

// Vetor (criação e tamanho)
#define tamVet 600010 //Tamanho máximo do vetor
int vet[tamVet]; // Criação do vetor "vet" com tamanho "tamVet"

// Caminho dos arquivos
char arquivo_1[] = "Vetor-6000-Aleatorio.txt";
char arquivo_2[] = "Vetor-6000-Crescente.txt";
char arquivo_3[] = "Vetor-6000-Decrescente.txt";
char arquivo_4[] = "Vetor-60000-Aleatorio.txt";
char arquivo_5[] = "Vetor-60000-Crescente.txt";
char arquivo_6[] = "Vetor-60000-Decrescente.txt";
char arquivo_7[] = "Vetor-600000-Aleatorio.txt";
char arquivo_8[] = "Vetor-600000-Crescente.txt";
char arquivo_9[] = "Vetor-600000-Decrescente.txt";
char arquivo_10[] = "Vetor_Ordenado.txt";

// Variáveis de controle
int aux; //armazena a quantidade de elementos vindos do arquivo
int arquivoImprimir = 0;
int crescenteOuDecrescente = 0;
int algoritmoSelecionado = 0;
bool jaFoiOrdenado;
long long int movimentacoes;
long long int comparacoes;

//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

void bubble_sort(int vet[], int tam_vet, int crescente = 1) {
    int mov = 0;
    if (crescente == 1){
        for(int i = 0; i < tam_vet; i++){
            for(int j = 0; j < tam_vet - 1; j++){
                comparacoes++;
                if(vet[j] > vet[j + 1]){
                    movimentacoes = movimentacoes + 3;
                    mov = vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1] = mov;
                }
            }
	    }
    } else {
        for(int i = 0; i < tam_vet; i++){
            for(int j = 0; j < tam_vet - 1; j++){
                comparacoes++;
                if(vet[j] < vet[j + 1]){
                    movimentacoes = movimentacoes + 3;
                    mov = vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1] = mov;
                }
            }
	    }
    }
    jaFoiOrdenado = true;
}

void selection_sort (int vetor[], int max, int crescente = 1) {
    int i, j, min, auxiliar, maior_valor;

    if (crescente == 1) {
        for (i = 0; i < (max - 1); i++) {
            // O minimo é o primeiro número não ordenado ainda
            min = i;
            for (j = i+1; j < max; j++) {
                // Caso tenha algum numero menor ele faz a troca do minimo
                comparacoes++;
                if (vetor[j] < vetor[min]) {
                    min = j;
                }
            }
            // Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los
            comparacoes++;
            if (i != min) {
                movimentacoes = movimentacoes + 3;
                auxiliar = vetor[i];
                vetor[i] = vetor[min];
                vetor[min] = auxiliar; 
            }
        }
    } else {
        for (i = 0; i < (max - 1); i++) {
            // O minimo é o primeiro número não ordenado ainda
            maior_valor = i;
            for (j = i+1; j < max; j++) {
                // Caso tenha algum numero menor ele faz a troca do minimo
                comparacoes++;
                if (vetor[j] > vetor[maior_valor]) {
                    maior_valor = j;
                }
            }
            // Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los
            comparacoes++;
            if (i != maior_valor) {
                movimentacoes = movimentacoes + 3;
                auxiliar = vetor[i];
                vetor[i] = vetor[maior_valor];
                vetor[maior_valor] = auxiliar;
            }
        }
    }
    jaFoiOrdenado = true;
}

void leitura_arquivo(char arquivo[]) {
    char Linha[100];
    char *result;
    FILE * pFile;
    pFile = fopen (arquivo,"rt");
    if (pFile == NULL)
    {
        cout << "Arquivo não encontrado!" << endl;
    } else {
        while (!feof(pFile)) {
            result = fgets(Linha, 100, pFile);
			if (result)  // Se foi possível ler
	            //printf("Linha %d : %s",aux,Linha);
                vet[aux] = atoi(Linha);
            aux++;
        }
        cout << aux - 1 << " elementos lidos do arquivo." << endl;
        fclose (pFile);
    }
}

void qualArquivoOrdenar() {
    
    do
    {
        system("clear");
        cout << "=============================================================" << endl;
        cout << "            Qual dos arquivos você deseja ordenar?"  << endl;
        cout << "       Digite 1 para ordenar: Vetor-6000-Aleatorio.txt"  << endl;
        cout << "       Digite 2 para ordenar: Vetor-6000-Crescente.txt" << endl;
        cout << "       Digite 3 para ordenar: Vetor-6000-Decrescente.txt" << endl;
        cout << "       Digite 4 para ordenar: Vetor-60000-Aleatorio.txt" << endl;
        cout << "       Digite 5 para ordenar: Vetor-60000-Crescente.txt" << endl;
        cout << "       Digite 6 para ordenar: Vetor-60000-Decrescente.txt" << endl;
        cout << "       Digite 7 para ordenar: Vetor-600000-Aleatorio.txt" << endl;
        cout << "       Digite 8 para ordenar: Vetor-600000-Crescente.txt" << endl;
        cout << "       Digite 9 para ordenar: Vetor-600000-Decrescente.txt" << endl;
        cout << "=============================================================" << endl;

        cin >> arquivoImprimir;
    } while(arquivoImprimir < 1 || arquivoImprimir > 9);

    switch (arquivoImprimir){
        case 1:
            leitura_arquivo(arquivo_1);
            break;
        case 2:
            leitura_arquivo(arquivo_2);
            break;
        case 3:
            leitura_arquivo(arquivo_3);
            break;
        case 4:
            leitura_arquivo(arquivo_4);
            break;
        case 5:
            leitura_arquivo(arquivo_5);
            break;
        case 6:
            leitura_arquivo(arquivo_6);
            break;
        case 7:
            leitura_arquivo(arquivo_7);
            break;
        case 8:
            leitura_arquivo(arquivo_8);
            break;
        case 9:
            leitura_arquivo(arquivo_9);
            break;
        default:
            break;
    }
}

void ordemCrescenteOuDecrescente() {
    do
    {
        system("clear");
        cout << "=============================================================" << endl;
        cout << "             Em que ordem você deseja ordenar?"  << endl;
        cout << "                 Digite 1 para crescente"  << endl;
        cout << "                Digite 2 para decrescente" << endl;
        cout << "=============================================================" << endl;

        cin >> crescenteOuDecrescente;
    } while(crescenteOuDecrescente < 1 || crescenteOuDecrescente > 2);
}

void escolherAlgoritmo() {
    do
    {
        system("clear");
        cout << "=============================================================" << endl;
        cout << "            Qual algoritmo você deseja utilizar?"  << endl;
        cout << "                 Digite 1 para Bubble_Sort"  << endl;
        cout << "                Digite 2 para Selection_Sort" << endl;
        cout << "=============================================================" << endl;

        cin >> algoritmoSelecionado;
    } while(algoritmoSelecionado < 1 || algoritmoSelecionado > 2);
}

void imprimeVetor() {
    
    int imprimir;
    do {
        system("clear");
        cout << "=============================================================" << endl;
        cout << "                Você deseja imprimir o vetor? S\\N"  << endl;
        cout << "                  Digite 1 para sim e 2 para não."  << endl;
        cout << "=============================================================" << endl;

        cin >> imprimir;
    } while(imprimir <1 || imprimir > 2);

    if (imprimir == 1) {
        flush_in(); 
        getchar();
        if (jaFoiOrdenado) {
            cout << "Vetor ordenado: ";
        } else {
            cout << "Vetor desordenado: ";
        }
        for(int i = 0; i < aux - 1; i++){
            cout << " " << vet[i];
        }
        cout << endl;
    }
}

void imprimeNoArquivo() {
    FILE * pFile;
    pFile = fopen (arquivo_10,"w");
    if (pFile == NULL)
    {
        cout << "Arquivo não encontrado!" << endl;
    } else {
        for (int i = 0; i < aux - 1; i++)
        {
            fprintf(pFile, "%d ", vet[i]);
        }
        
        fclose (pFile);
    }
}

int main() {

    int sairOuContinuar;
    do {
        movimentacoes = 0;
        comparacoes = 0;
        aux = 0;
        jaFoiOrdenado = false;
        qualArquivoOrdenar();
        flush_in(); 
        getchar();

        imprimeVetor();
        flush_in(); 
        getchar();

        escolherAlgoritmo();
        flush_in(); 
        getchar();

        ordemCrescenteOuDecrescente();

        unsigned long int inicio = clock();

        if (algoritmoSelecionado == 1){
            bubble_sort(vet, aux - 1, crescenteOuDecrescente);
        } else {
            selection_sort(vet, aux - 1, crescenteOuDecrescente);
        }        

        unsigned long int final = clock();

        imprimeNoArquivo();
        imprimeVetor();
        flush_in(); 
        getchar();
        system("clear");

        cout << "=============================================================" << endl;
        cout << "                    Relatório da ordenação"  << endl;
        double milisegundos = (final - inicio)/(double)CLOCKS_PER_SEC;
        int int_segundos = (int) milisegundos;
        cout << "Tempo gasto em computador real em milisegubdos: " << milisegundos << endl;
        
        cout << "Tempo convertido para MM:SS:LL => ";
        if (int_segundos / 60 < 10) {
            cout << "0" << int_segundos / 60 << ":";
        } else {
            cout << int_segundos / 60 << ":";
        }
        if (int_segundos % 60 < 10) {
          cout << "0" << int_segundos % 60 << ":";
        } else {
            cout << int_segundos % 60 << ":";
        }
        cout << (int)((milisegundos - int_segundos) * 10000) << endl;

        cout << "Quantidade de Comparações: " << comparacoes << endl;
        cout << "Quantidade de Movimentações: " << movimentacoes << endl;
        cout << "=============================================================" << endl;

        cout << "=============================================================" << endl;
        cout << "      Você deseja continuar ou encerrar o programa? E\\C"  << endl;
        cout << "         Digite 1 para encerrar ou 2 para continuar."  << endl;
        cout << "=============================================================" << endl;

        cin >> sairOuContinuar;
        while (sairOuContinuar < 1 || sairOuContinuar > 2){
            system("clear");
            cout << "=============================================================" << endl;
            cout << "      Você deseja continuar ou encerrar o programa? E\\C"  << endl;
            cout << "         Digite E para encerrar ou C para continuar."  << endl;
            cout << "=============================================================" << endl;

            char sairOuContinuar;
            cin >> sairOuContinuar;
        }
    } while(sairOuContinuar > 1);
    return 0;
}