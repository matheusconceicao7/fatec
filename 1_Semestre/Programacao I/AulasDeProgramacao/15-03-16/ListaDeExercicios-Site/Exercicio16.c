/**16. Escreva um programa que leia três números do teclado e os imprima na tela na ordem inversa da entrada.
**/

int main(void){
    int numero[3];
    int i =0;

    printf("Digite 3 numeros: \n");
    for(i=0; i<3; i++){
        printf("\nDigite o numero da posicao %d: ",(i+1));
        scanf("%d",&numero[i]);
    }
    printf("\n\nOs numeros digitados foram, em ordem inversa: ");
    for(i=2; i>=0; i--){
        printf("\n%d", numero[i]);
    }
}
