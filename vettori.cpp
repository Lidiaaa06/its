    #pragma warning (disable:4996)

    #include <stdio.h>    

    //chiede 5 numeri all'utente e salva  i 5 valore in un array e li stampa dall' ultimo al primo

    int main()
    {

        int v[5];


        for (int i = 0; i < 5; i++) 
        {
            printf("Inserisci un valore: \n");
            scanf("%d", &v[i]);
        }

         printf("I valori inseriti sono: \n");
        for (int i = 4; i >= 0; i--) 
        {
            printf("%d \n", v[i]);
        }
      
             return 0;
    }
