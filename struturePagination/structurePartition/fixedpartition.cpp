 typedef struct { 
    unsigned int bv; // 0 = partição vazia
    char processo[5];
} particao;  particao RAM[10];

  int main() {
  int i;
  //inicialização da RAM, alocando processo na RAM e execução
  for (i=0; i<10; i++)
      RAM[i].bv=0;
  
  //alocação -> transformar em função
  for (i=0; i<10; i++)
     if (RAM[i].bv ==0) {
         printf("Digite um processo: ");
         RAM[i].bv = 1;
         scanf("%",&RAM[i].processo);
     }

  //Simulação do processador encerrando a execução de processo
  strcpy(RAM[2].processo,"");RAM[2].bv=0; printf("\n3o Processo finalizado\n");
  strcpy(RAM[2].processo,"");RAM[8].bv=0; printf("\n9o Processo finalizado\n");

  //Visualização da RAM simulada -> transforma em função
  printf("\nStatus da RAM\n");
  for (i=0; i<10; i++)
        printf("%da Partição da RAM: [%d|%s]\n",i+1,RAM[i].bv,RAM[i].processo);

  //Nova alocação
  for (i=0; i<10; i++)
     if (RAM[i].bv == 0) {
        printf("\n");
        printf("Digite um processo: ");
        RAM[i].bv = 1;
        scanf("%s",&RAM[i].processo);
      }

  // Nova visualização da RAM simulada
  printf("\nStatus da RAM\n");
  for (i=0; i<10; i++)
        printf("%da Partição da RAM: [%d|%s]\n",i+1,RAM[i].bv,RAM[i].processo);
  return(0);   
}
