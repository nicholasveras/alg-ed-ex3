// N1 - Aumento de salário //

#include <stdio.h>
void main()
{
  float salario, aumento, novo_salario, porc;
  printf("Digite o salario = ");
  scanf("%f",&salario);
  printf("Porcentagem = ");
  scanf("%f",&porc);
  
  aumento = salario * (porc / 100);
  novo_salario = salario + aumento;
  printf("Aumento = R$ %.2f \n",aumento);
  printf("Novo Salario = R$ %.2f \n",novo_salario);
  system("pause");
}

// N1 - Seis números ímpares //

#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%i", &n);
    
    if (n % 2 == 0)
        n++;

    while (i < 6) {
        printf("%i\n", n);
        i++;
        n += 2;
    }
    
    return 0;
}

// 

// N1 - Coordenadas de um ponto //

#include <stdio.h>
int main () {

 double x, y;
 scanf("%lf %lf", &x, &y);

 if (x == 0.0 && y == 0.0) 
  printf("Origem\n");
 
 else if (x > 0 && y > 0)
  printf("Q1\n");
 
 else if (x < 0 && y > 0)
  printf("Q2\n");
 
 else if (x < 0 && y < 0)
  printf("Q3\n");
 
 else if (x > 0 && y < 0)
  printf("Q4\n");
 
 else if (x == 0)
  printf("Eixo Y\n");
 
 else if (y == 0) 
  printf("Eixo X\n"); 
 
 return 0;
}

// N2 - Cifra de Cesar //

#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){

char frase[20];
int i=0;
int chave;
system("clear");
printf("\n\nEscreva uma chave:");
scanf("%d",&chave);



printf("\nDigite a frase a ser encriptada:");

scanf("%s",frase);

printf("\n\nFrase encriptada com sucesso!\n\n");
printf("Encriptacao:  ");
for(i=0;i<strlen(frase);i++)
{

int enc=(int)frase[i]+chave;
printf("%c",(char)enc);
                 }

printf("\n\n");





}

// N2 - Experiências //

#include <stdio.h>

int main()
{
    int  n, qtd, i, tot=0;
    float coelho=0, rato=0, sapo=0;
    char cobaia;
    float perco, perrato, persap;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %c", &qtd, &cobaia);
        fflush(stdin);
        if(cobaia =='C')
            coelho+= qtd;
        else if (cobaia == 'R')
            rato+= qtd;
        else
            sapo+=qtd;       
        tot+= qtd;
    }
    perco = (coelho *100 /tot);
    perrato = (rato *100 /tot); 
    persap = (sapo *100 /tot);
    printf("Total: %d cobaias\n", tot);
    printf("Total de coelhos: %.0f\n", coelho);
    printf("Total de ratos: %.0f\n", rato);
    printf("Total de sapos: %.0f\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", perco);
    printf("Percentual de ratos: %.2f %%\n", perrato);
    printf("Percentual de sapos: %.2f %%\n", persap);
    return 0;
}


// N3 - Crescimento populacional //

#include <stdio.h>

int main()

{

   int n, c, m;

   int a, b;

   double ac, bc;

   scanf("%d", &n);

   for(m=1; m<=n; m++)

   {

       c = 0;

       scanf("%d %d %lf %lf", &a, &b, &ac, &bc);

       while(a <= b)

       {

           a *= (ac / 100.0) + 1.0;

           b *= (bc / 100.0) + 1.0;

           c++;

           if (c > 100)

           {

               printf("Mais de 1 seculo.\n");

               break;

           }

       }

       if (c <= 100)

           printf("%d anos.\n", c);

   }

   return 0;

}

// N3 - Digitador Gago //

#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
#define MAXSIZE 50
#define MAX 20000

typedef unsigned short us;

typedef struct string{

    char palavra[MAXSIZE];

} string;

string texto[1005];

void main ()
{
    char *tmp;
    int i, j;
    char teste[MAX] = { 0 };

    scanf("%[^\n]", teste);

    i = 0;
    tmp = strtok(teste, " ");
    strcpy(texto[i++].palavra, tmp);

    do
    {

        tmp = strtok('\0', " ");
        if (tmp)
            strcpy(texto[i++].palavra, tmp);

    } while (tmp);


    int k = 0;
    _Bool flag = false;
    for (j = 0; j < i; ++j)
        if (!flag)
        {
            if (strlen(texto[j].palavra) >= 4)
            {
                
                if (texto[j].palavra[k] == texto[j].palavra[k + 2] && texto[j].palavra[k + 1] == texto[j].palavra[k + 3])
                    printf("%s", &texto[j].palavra[k + 2]), flag = true;
                else
                    printf("%s", texto[j].palavra), flag = true;

            }
            else
                printf("%s", texto[j].palavra), flag = true;
        }
        else
        {

            if (strlen(texto[j].palavra) >= 4)
            {

                if (texto[j].palavra[k] == texto[j].palavra[k + 2] && texto[j].palavra[k + 1] == texto[j].palavra[k + 3])
                    printf(" %s", &texto[j].palavra[k + 2]), flag = true;
                else
                    printf(" %s", texto[j].palavra);

            }
            else
                printf(" %s", texto[j].palavra);

        }

    printf("\n");
        
}