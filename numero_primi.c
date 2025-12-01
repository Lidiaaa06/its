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
#include <stdio.h>

int main() {
    int num, num2;

    printf("Inserisci un numero di partenza: ");
    scanf("%d", &num);

    printf("Quanti numeri primi vuoi visualizzare? ");
    scanf("%d", &num2);

    int count = 0;   // quanti primi stampati

    // ciclo principale: continua finché non stampiamo num2 primi
    do {
        int div = 2;
        int primo = 1; // assumiamo sia primo

        // controlla se num è primo
        do {
            if (num % div == 0) {
                primo = 0;   // non è primo
                break;
            }
            div++;
        } while (div * div <= num);

        if (num < 2) primo = 0; // i numeri <2 non sono primi

        // se è primo, stampalo e aumenta il contatore
        if (primo) {
            printf("%d ", num);
            count++;
        }

        num++; // passa al numero successivo

    } while (count < num2);

    return 0;
}


}
