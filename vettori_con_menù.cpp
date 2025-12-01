   #pragma warning (disable:4996)

   #include <stdio.h>    

 

   int main()
   {
       //scrivere un programma che all'avvio  inizializzi un vettore da 10 elelmenti a 0. 
       //tramite un menù permetta di selelzionale le seguenti opzioni:
       //-salvare il valore all'interno dell'array
       //-visualizzare una cella specifica dell'array
       //-stampare tutto l'array, visualizzando tutte le celle con valori diversi da 0
       //eseguire la somma di tutti i valori dentro array
       //uscire dal programma 

           int v[10] = { 0 };
           int i, n, scelta;

           do {
               // Mostra il menù
               printf("\n--- Menu ---\n");
               printf("1. Inserire un valore in una cella\n");
               printf("2. Visualizzare una cella specifica\n");
               printf("3. Stampare tutte le celle non nulle\n");
               printf("4. Sommare tutti i valori dell'array\n");
               printf("5. Uscire\n");
               printf("Scelta: ");
               scanf("%d", &scelta);

               switch (scelta) {
               case 1: // Inserire un valore
                   printf("Scegli una cella (0-9): ");
                   scanf("%d", &i);
                   if (i >= 0 && i < 10) 
                   {
                       printf("Inserisci il valore: ");
                       scanf("%d", &n);
                       v[i] = n;
                   }
                   else 
                   {
                       printf("Indice non valido!\n");
                   }
                   break;

               case 2: // Visualizzare una cella
                   printf("Scegli una cella da visualizzare (0-9): ");
                   scanf("%d", &i);
                   if (i >= 0 && i < 10) 
                   {
                       printf("Valore nella cella %d: %d\n", i, v[i]);
                   }
                   else 
                   {
                       printf("Indice non valido!\n");
                   }
                   break;

               case 3: // Stampare celle non nulle
                   printf("Celle non nulle:\n");
                   for (i = 0; i < 10; i++) 
                   {
                       if (v[i] != 0) 
                       {
                           printf("Cella %d: %d\n", i, v[i]);
                       }
                   }
                   break;

               case 4: // Sommare tutti i valori
               {
                   int result = 0;
                   for (i = 0; i < 10; i++) 
                   {
                       result += v[i]; 
                   }
                   printf("Somma di tutti i valori: %d\n", result);
                   break;
               }

               case 5: // Uscire
                   printf("Uscita dal programma.\n");
                   break;

               default:
                   printf("Scelta non valida!\n");
               }

           } while (scelta != 5);

           return 0;
       }


