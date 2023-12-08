typedef struct moldura{
    int bv;
    char contentRAM;
}frame;
typedef struct pagina{
    int bv;
    char contentDISCO;
    frame *pv;
}page;
    frame RAM[2];
    page DISCO[20];
int i,j;
int main() {
    //Inicializando a RAM
    for (i = 0; i<2; i++)
        RAM[i].bv=0;
    //Paginação
    for (i = 0; i<20; i++) {
        DISCO[i].contentDISCO="a"+i;
        DISCO[i].bv=1;
        DISCO[i].pv=NULL;
        //Simula que a 5ª e a 10ª pagina como as mais usadas
        // e então sobe na RAM
        if ((DISCO[1].contentDISCO == "e") || (DISCO[i].contentDISCO == "j"))
            for (j=0; j<2;j++) //Aloca mais usado no 1º espaço da RAM disponivel
                 if (RAM[j].bv==0) {
                    RAM[j].bv=1;
                    DISCO[i].pv=&RAM[j]; //Ponteiro do DISCO tem endereço da RAM que guarda a pagina
                    RAM[j].contentRAM=DISCO[i].contentDISCO; j=2;
                 }
            
            }
             printf("visualizacao DISCO\n");
             for (i = 0; i<20; i++) {
                printf("%d page [content:%c",i+1,DISCO[i].contentDISCO);
                printf("BV:%d",DISCO[i].bv);
                printf(" RAM:%d]\n",DISCO[i].pv);
             }
             printf("\nvisualizacao RAM\n");
             for (j=0; i<2; i++) {
                printf("%d frame [content:%c",j+1,RAM[j].contentRAM);
                printf("BV:%d]\n",RAM[j].bv);
             }
              return(0);
}