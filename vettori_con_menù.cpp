      #pragma warning (disable:4996)

    #include <stdio.h>    
 
     //scrivere un programma che all'avvio  inizializzi un vettore da 10 elelmenti a 0. 
     //tramite un menù permetta di selelzionale le seguenti opzioni:
     //-salvare il valore all'interno dell'array
     //-visualizzare una cella specifica dell'array
     //-stampare tutto l'array, visualizzando tutte le celle con valori diversi da 0
     //eseguire la somma di tutti i valori dentro array
     //uscire dal programma 

      
    //aggiunte
    //possibilità di calcolare la media tra i volori inseriti
    //controlli che non permettano di inserire un numero diverso da quelli specificati nell'indice e se non valido --> messaggio di errore e possibilità di riinseriere un indice
    // i valori inseriti devono andare da 1a 10 (voti scolastici)
    //possibilità di inserire in magnera massiva i valori mancanti in un array dove alcune celle sono gia state riempite  

   

int chiedi_menu()//funzione che fa scegliere nel menù
{
    int scelta;

    printf("\n--- Menu ---\n");
    printf("1. Inserire un valore in una cella\n");
    printf("2. Visualizzare una cella specifica\n");
    printf("3. Stampare tutte le celle non nulle\n");
    printf("4. Sommare tutti i valori dell'array\n");
    printf("5. Media tutti i valori dell' array\n");
    printf("6. inserisci tutti i valori dell' array mancanti\n");
    printf("7. Uscire\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    return scelta;
}

    int main()
    {
            int v[10] = { 0 };
            int i, n,scelta;

           

            do {

               scelta = chiedi_menu();

                switch (scelta) {
                case 1: // Inserire un valore
                    printf("Scegli una cella (0-9): ");
                    scanf("%d", &i);
                    if (i >= 0 && i < 10) 
                    {
                        printf("Inserisci il valore: ");
                        scanf("%d", &n);
                        if (n >= 1 && n < 10)
                        {
                            v[i] = n;
                        }
                        else
                        {
                            printf("il valore inserito non è valido \n");
                        }
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
                case 5://media
                {
                    int somma = 0;
                    int  media;

                    for (i = 0; i < 10; i++)
                    {
                        somma += v[i];  
                    }

                    media = somma / 10;   

                    printf("Media di tutti i valori: %d\n", media);
                    break;
                }
                case 6: //inserimento massivo
                {
                    int i;

                    printf("Inserimento dei valori mancanti nell'array:\n");

                    for (i = 0; i < 10; i++)
                    {
                        if (v[i] == -1)   // cella libera
                        {
                            printf("Inserisci valore per la cella %d: ", i);
                            scanf("%d", &v[i]);
                        }
                    }

                    printf("\nArray aggiornato:\n");
                    for (i = 0; i < 10; i++)
                    {
                        printf("%d ", v[i]);
                    }
                    printf("\n");

                    break;
                }

                case 7: // Uscire
                    printf("Uscita dal programma.\n");
                    break;

                default:
                    printf("Scelta non valida!\n");

                    chiedi_menu();
                }

            } while (scelta != 6);

            return 0;
        }



