#include <stdio.h>
#include <stdlib.h>

void inicia(char s[3][3])
{
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            s[i][j]=' ';
        }
    }
}

void mostra(char s[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        printf("\n");
        for(j=0; j<3; j++)
        {
            printf("|  %c   ", s[i][j]);
        }
    printf("|");
    }

    if((s[0][0]=='x' && s[0][1]=='x'&& s[0][2]=='x')||
           (s[1][0]=='x' && s[1][1]=='x' && s[1][2]=='x')||
           (s[2][0]=='x' && s[2][1]=='x' && s[2][2]=='x')||
           (s[0][0]=='x' && s[1][0]=='x' && s[2][0]=='x')||
           (s[0][1]=='x' && s[1][1]=='x' && s[2][1]=='x')||
           (s[0][2]=='x' && s[1][2]=='x' && s[2][2]=='x')||
           (s[0][0]=='x' && s[1][1]=='x' && s[2][2]=='x')||
           (s[0][2]=='x' && s[1][1]=='x' && s[2][0]=='x'))
        {
            printf("\n\a\t\tJogador x venceu! \n");
            system("pause");
            exit(1);
        }

    if((s[0][0]=='o' && s[0][1]=='o' && s[0][2]=='o')||
           (s[1][0]=='o' && s[1][1]=='o' && s[1][2]=='o')||
           (s[2][0]=='o' && s[2][1]=='o' && s[2][2]=='o')||
           (s[0][0]=='o' && s[1][0]=='o' && s[2][0]=='o')||
           (s[0][1]=='o' && s[1][1]=='o' && s[2][1]=='o')||
           (s[0][2]=='o' && s[1][2]=='o' && s[2][2]=='o')||
           (s[0][0]=='o' && s[1][1]=='o' && s[2][2]=='o')||
           (s[0][2]=='o' && s[1][1]=='o' && s[2][0]=='o'))
        {
            printf("\n\a\t\tJogador o venceu! \n");
            system("pause");
            exit(1);
        }

        /* if(cont==9)
        {
            printf("Patida empatada! \n");
        } */

}

main()
{
    char velha[3][3];
    int x, y, z, w;
    inicia(velha);

    while(1)
    {
        printf("\n\n Faca sua jogada (x): \n");
        scanf("%d %d", &x, &y);
        velha[x][y]='x';
        system("cls");
        mostra(velha);
        printf("\n");

        printf("\n\n Faca sua jogada (o): \n");
        scanf("%d %d", &z, &w);
        velha[z][w]='o';
        system("cls");
        mostra(velha);
        printf("\n");
    };
}
