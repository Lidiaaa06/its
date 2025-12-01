#pragma warning (disable:4996)
#include<stdio.h>

int main()
{   
  //controlla se il numero inserito dall'utente e' primo
 /* int num;
  int div=2;

  printf("inserisci un numero per verificare se e' primo: ");
  scanf("%d", &num);

  do
  {
      int risult = num % div;

      if (risult == 0)
      {
          printf("il numero %d non e' primo\n", num, div, risult);

          return 0;
      }
     
      div++;
  } while (div < num);

  printf("il numero %d e' primo \n", num);
  */


   
  //controlla se il numero inserito dall'utente e' primo
  int num,num2,count;
  int div=2;

  printf("inserisci un numero: ");
  scanf("%d", &num);
  printf("inserisci il numero di numeri primi da visualizzare : ");
  scanf("%d", &num2);

  do
  {
    count ++;
    
  do
  {
      int risult = num % div;

      if (risult == 0)
      {
          printf("%d", num);

          return 0;
      }
     
      div++;
  } while (div < num);

   } while (count == num2);
  

}
