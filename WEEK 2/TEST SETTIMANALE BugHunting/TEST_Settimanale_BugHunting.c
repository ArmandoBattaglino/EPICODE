#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () {
	
	char scelta = '\0';
	int continua_gioco = 1;
	
	menu();
	
	do{
	scanf("%c", &scelta);
	
		switch (scelta){
	 	   	case 'A':
	 	   		moltiplica();
	 	   		continua_gioco = 1;
				break;
			case 'B':
	  			dividi();
	  			continua_gioco = 1;
	  			break;
			case 'C':
	      		ins_string();
	      		continua_gioco = 1;
	      		break;
	      	case 'F':
	      		printf("\nTermino il programma...");
	      		continua_gioco = 1;
	      		break;
	      	default:
	     		printf("\nInserisci solo A B C o F!\n\n");
	     		continua_gioco = 0;
	     		rewind(stdin);
	     		break;
		}
		
	} while(continua_gioco == 0);

return 0;

}


void menu () {
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nF >> TERMINA IL PROGRAMMA\n");
}


void moltiplica () {
	int controllo_uno, controllo_due;
	short int a,b,prodotto = 0;
	
	printf ("Inserisci i due numeri da moltiplicare\n(I numeri decimali saranno arrotondati per DIFETTO):\n");
	
	do {
			
		rewind(stdin);
		printf("Numero 1: ");
		controllo_uno = scanf ("%hd", &a);
		
		rewind(stdin);
		printf("Numero 2: ");
		controllo_due = scanf ("%hd", &b);
		printf("\n");
			
				if(controllo_uno == 0 || controllo_due == 0) {
					printf("Perfavore inserisci solo NUMERI!\n\n");
					rewind(stdin);
				} else {
					prodotto = a * b;
					printf ("Il prodotto tra %hd e %hd e': %hd", a, b, prodotto);
				}
				
	} while (controllo_uno == 0 || controllo_due == 0);

}


void dividi () {
   	float  a,b,divisione;
   	int controllo_uno, controllo_due;
   	
   	printf ("Inserisci i due numeri da dividere\n(Puoi utilizzare anche numeri decimali):\n");
   
    do {
			
		rewind(stdin);
		printf("Numeratore: ");
		controllo_uno = scanf ("%f", &a);
		
		rewind(stdin);
		printf("Denominatore: ");
		controllo_due = scanf ("%f", &b);
		printf("\n");
			
				if(controllo_uno == 0 || controllo_due == 0) {
					printf("Perfavore inserisci solo NUMERI!\n\n");
				} else if (b <= 0){
					printf("Non puoi dividere per 0 o minore di zero!\n\n");
			    } else {
					divisione = a / b;
					printf ("La divisione tra %0.2f e %0.2f e': %f", a,b,divisione);
				}
				
	} while (controllo_uno == 0 || controllo_due == 0 || b <= 0);
}


void ins_string () {
	char stringa[10];
   	printf ("Inserisci la stringa: ");
  	rewind(stdin);
	fgets(stringa,10,stdin);
	
	printf("\nHai inserito la seguente stringa: %s", stringa);
}

