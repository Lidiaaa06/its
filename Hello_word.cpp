// Hello_word.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//
#pragma warning(disable:4996)
#include <stdio.h>

int main()
{ 
// chiede il mese e l'anno e ti dice quanti giorni cerano in quel mese pure se è bisestile 
    int giorni;
    int mesi =0;
    int anno;

    printf("inserisci il numero di un mese : 1 -> gennaio, 2 -> febbraio, ecc : ");
    scanf("%d",&mesi);

    printf("inserisci un anno : ");
    scanf("%d", &anno);

    switch (mesi)
    {
    case 1:
        giorni=31;
        break;

    case 2:
        if ((anno % 4 == 0) && (anno % 400 == 0)) // zero falso 
        {
            giorni = 29;
        }
        else if ((anno % 4 == 0 ) && (anno % 100 == 0))
        {
            giorni = 28;
        }
        break;

    case 3:
        giorni = 31;
        break;

    case 4:
        giorni = 30;
        break;

    case 5:
        giorni = 31;
        break;

    case 6:
        giorni = 30;
        break;

    case 7:
        giorni = 31;
        break;

    case 8:
        giorni = 31;
        break;

    case 9:
        giorni = 30;
        break;

    case 10:
        giorni = 31;
        break;

    case 11:
        giorni = 30;
        break;

    case 12:
        giorni = 31;
        break;

    }

    printf("Giorni  del mese : %d", giorni);



    /*

    //fa la media di 5 voti e contralla se i voti inseriti sono compresi tra 1 e 10

    int voto;
    int media =0;

    printf("inserisci un voto: ");
    scanf("%d", &voto);

 
    if ((voto < 1) || (voto > 10))
    {
        printf("il voto '%d' inserito non e' valido", voto);
        return 1;
    }

    media += voto;

    printf("inserisci un voto: ");
    scanf("%d", &voto);


    if ((voto < 1) || (voto > 10))
    {
        printf("il voto '%d' inserito non e' valido", voto );
        return 2;
    }

    media += voto;

    printf("inserisci un voto: ");
    scanf("%d", &voto);


    if ((voto < 1) || (voto > 10))
    {
        printf("il voto '%d' inserito non e' valido", voto);
        return 3;
    }

    media += voto;

    printf("inserisci un voto: ");
    scanf("%d", &voto);


    if ((voto < 1) || (voto > 10))
    {
        printf("il voto '%d' inserito non e' valido", voto );
        return 4;
    }

    media += voto;

    printf("inserisci un voto: ");
    scanf("%d", &voto);


    if ((voto < 1) || (voto > 10))
    {
        printf("il voto '%d' inserito non e' valido", voto);
        return 5;
    }

    media += voto;

    printf("la media dei voti e': %d", (media / 5));


   // Calcolatrice con switch 

    int x;
    int y;
    char z;
    int  result;

    printf("Calcolatrice\n");

    printf("inserisci un numero : ");
    scanf("%d", &x);

    printf("inserisci un  altro numero : ");
    scanf("%d", &y);

    printf("inserisci un operatore : ");
    scanf(" %c", &z);
    
    switch (z)
    {
        case '+':
            result = x + y;
            break;

        case '-':
            result = x - y;
            break;

        case '*':
            result = x * y;
            break;

        case '/':
            result = x / y;
            break;

        default:
            printf("L'operatore '%c' inserito non e' valido", z);
            return 1;

    }

    printf("%d %c %d = %d",x, z, y, result);
    return 0;
    
    
   
    
    //Calcolatrice
    int x;
    int y;
    char z;
    int  result;

    printf("Calcolatrice\n");

    printf("inserisci un numero : ");
    scanf("%d", &x);

    printf("inserisci un  altro numero : ");
    scanf("%d", &y);

    printf("inserisci un operatore : ");
    scanf(" %c", &z);

    if (z == '+')
    {
        result = x + y;
        printf("la soluzione e': %d", result);
    }
    else if (z == '-')
    {
        result = x - y;
        printf("la soluzione e': %d", result);
    }else  if (z == '*')
    {
        result = x * y;
        printf("la soluzione e': %d", result);
    }else  if (z == '/')
    {
        result = x / y;
        printf("la soluzione e': %d", result);
    }


    //restituisce il numero maggiore inserito dall'utente

    int x;
    int y;

    printf("inserisci un numero : ");
    scanf("%d", &x);

    printf("inserisci un numero : ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("il piu grande e':%d",x);
    }
    else if ( y > x)
    {
        printf("il piu grande e':%d", y);
    }
    else
    {
        printf("il valore  e' lo stesso");
    }


    //controlla se i numeri inseriti dall'utente sono uguali

    int numero;
    int numero2;

    printf("inserisci un numero : ");
    scanf("%d", &numero);

    printf("inserisci un numero : ");
    scanf("%d", &numero2);

    if (numero == numero2)
    {
        printf("i due numeri sono uguali\n");
    }
    else
    {
        printf("i due numeri sono diversi\n");
    }



    //fa inserire un numero all'utente e restituisce il numero alla seconda 

    int numero;

    printf("inserisci un numero : ");
    scanf("%d",&numero);

    int numeroallaseconda = numero * numero;

    printf(" il valore alla seconda e': %d \n", numeroallaseconda);*/

    return 0;
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
