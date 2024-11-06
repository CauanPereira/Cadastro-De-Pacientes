#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <stddef.h>

struct registro {
	
	int codigo;
	char nome[256];
	char cpf[30];
	char vacina[255];
	char data[50];
	char lote[30];
};

int main (){
	
	setlocale(LC_ALL, "Portuguese");
  	int opcao = 0, cont,acha,g;
	struct registro posicao[3300];
	char busca[30];
	    
	while (opcao > -1 && opcao != 4){
		
	  printf("MENU DE CADASTROS \n \n");
	  
      printf("1- Cadastra Vacina\n");
	  printf("2- Lista de Aplicacoes\n");
	  printf("3- Consultar por CPF\n");
	  printf("4- Sair\n\n");
	  printf("Escolha a opcão desejavel:");
	  scanf("%d",&opcao);
	  fflush(stdin);
    
      system ("cls");
      switch(opcao)		 
       {	
		 case 1	:
		 	
		 	printf("Digite a quantidade de cadastros que deseja: ");
		 	scanf("%d", &cont);
			fflush(stdin);
			
		 	system("cls");
		 	
			cont--;

			for(int i = 0; i <= cont; i++){

				system("cls");
				
			    printf("INSIRA SEUS DADOS EM TODOS OS CAMPOS ABAIXO\n\n");
			 	
		    	printf("Codigo:%d",posicao[i].codigo = i);
		 	    printf("\n--------------------------------------\n");
		 	    
		     	printf("Digite seu Nome:");
				gets(posicao[i].nome);
				fflush(stdin);
		 	    printf("--------------------------------------\n");
		 	    
		     	printf("Digite seu CPF:");
			 	scanf("%s", posicao[i].cpf);
			 	fflush(stdin);
		 	    printf("--------------------------------------\n"); 
		 	    
		     	printf("Digite o nome da Vacina:"); 
		 	    scanf("%s", posicao[i].vacina);
				fflush(stdin);
		 	    printf("--------------------------------------\n"); 
		 	    
		    	printf("Digite a Data:");
		 	    scanf("%s", posicao[i].data);
				fflush(stdin);
		 	    printf("--------------------------------------\n");

		     	printf("Digite o Numero de Lote:");
		    	scanf("%s", posicao[i].lote);
				fflush(stdin);
		    	printf("--------------------------------------\n");	
		    	system("cls");
		    	
		    }
	
	  	break;
		 	
	    case 2 :
	    	system("cls");
	    
	    
	    	if (cont < 0) 
	    	{
	    		printf("\t ERRO! NENHUM CADASTROS FOI REALIZADO!\n\n");
	    		
			}else{
				
				if (cont >= 0 ){
				
			     	printf("PACIENTES CADASTRADOS:\n\n");
				
				    for(int i = 0; i <= cont; i++){
				
		     	        printf("Codigo: %d", posicao[i].codigo);
				        printf("\nNome: %s", posicao[i].nome);
				        printf("\nCPF: %s", posicao[i].cpf);
				        printf("\nVacina: %s", posicao[i].vacina);
			            printf("\nData: %s", posicao[i].data);
				        printf("\nLote: %s", posicao[i].lote);
				        printf("\n-----------------------------------");
				        printf("\n-----------------------------------\n");
			       }
	        	}
			  }
	
	    	system("pause");
			system("cls");  	
	    break;
		 	 
		case 3:
			 
			printf("Digite o CPF que deseja encontrar:"); 
			scanf("%s", &busca);
            fflush(stdin);
			system("cls");
		    acha=0;
		    g = 0;
		    
		    while(acha == 0 &&  g <= cont){
			 	
                if(!strcmp(posicao[g].cpf, busca)){
                	
                 	acha = 1;	
				} else
				
				    g++;               
            } 
            
			if (acha==1)       
            {	 
                printf("CPF ENCONTRADO, SEUS DADOS SÃO:\n");
                                     
                printf("\nCodigo: %d\n", posicao[g].codigo);
			    printf("Nome: %s\n", posicao[g].nome);
			    printf("CPF: %s\n", posicao[g].cpf);
			    printf("Vacina: %s\n", posicao[g].vacina);
			    printf("Data: %s\n", posicao[g].data);
			    printf("Lote: %s\n\n", posicao[g].lote);
			    
                }
				else
  
                    printf("\nCPF NAO ENCONTRADO!\n\n");
					system("pause");
					system("cls");      
		    break;
		 	
		 	case 4 :
		 		printf("MENU DE CADASTROS \n \n");
	  
                printf("1- Cadastra Vacina\n");
	            printf("2- Lista de Aplicacoes\n");
	            printf("3- Consultar por CPF\n");
	            printf("4- Sair\n\n");
	            
		 		printf("Secessão Encerrada"); 
		 		
		 	break;
		 	default:
		 	system("cls");
		 	printf("\tOPÇÃO INVALIDA, DIGITE AS OPÇÕES PRESENTES NO MENU!!\n\n");
		 	system("pause");
			system("cls");
		 	break;
      	}	
     } 
	 
	return (0);
}