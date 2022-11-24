#include <stdio.h>

int main() {

        int continua_gioco = 1;
        int punteggio_giocatore = 0;
        char scelta;
        int input_utente;
        int risposta;
        int errore;
        int scanf_shield;
		int controllo;

        printf("Benvenuto all'interno del quiz più difficile del Mondo!\n\n"); 

        //Creo un ciclo While per far in modo che non si debba ogni volta riavviare il gioco se la scelta dell'utente è diversa da Y o N.

        do {
        	
        		char nickname[20];

                printf("Vuoi iniziare una nuova partita? (Y/N)\n\n");
                scanf(" %c",&scelta); //Ho inserito uno spazio prima di %c perché altrimenti il loop while poteva essere ripetuto più di una volta

                if (scelta == 'Y' || scelta == 'y') {
                	
                		/*
                        Se l'utente sceglie Y oppure y il gioco inizia
                        Quindi è in questa condizione dell'if che andiamo a sviluppare il nostro gioco QUIZ
                        */
                	
                        printf("\nOk allora iniziamo!\n");
		                printf("Inserisci il tuo NICKNAME: ");
                        
                        // Abbiamo il riempito il Buffer dell'inpuit con lo "scanf" precedente quindi lo andiamo a pulire attraverso il comando rewind
		                rewind(stdin);
						fgets(nickname, 20, stdin);
						
						

                        //************************** DOMANDA 1: QUANTO FA 1 + 1? **************************

                        printf("\n\nOk %s! Ecco la PRIMA domanda!\n", nickname);
                        printf("*\n*\n*\n");
                        
                        /*
						Utilizzo un Do While per fare in modo che anche se l'utente sbagliasse ad immettere
                        la risposta (ad esempio qualcosa che non sia 1,2 opppure 3) viene data un'altra possibilità di immissione finché l'utente non inserisce un'opzione prevista (in questo caso 1,2 oppure 3)
						*/
                        
						do {
								/*
								
								Inserisco nella condizione del while un controllo su "input_utente" perché "scanf" restituisce un valore booleano (0 o 1) 
								Se viene inserito il tipo di variabile corrispondente a quella prevista restituirà 1, altrimenti restituirà 0
								
								Ho notato che se l'utente immette un carattere invece che un numero, 
								l'istruzione "scanf" non si aspetta quel tipo di input, e quindi anche con tutti i controlli che ho scritto di seguito
								il ciclo while non si fermerà mai poiché "scanf" continuerà a cercare all'infinito un input del tipo corretto (in questo caso un numero integrale)
								
								Dunque attraverso il comando "rewind(stdin)" vado a ripulire il buffer dell'input e lo "scanf" riprenderà a funzionare senza andare in loop infinito
								*/ 
								
		                        rewind(stdin);
		                        
                        		printf("Quanto fa 1 + 1?\n");
                        		printf(" 1) 1\n 2) 7\n 3) 2\n\n");
						
		                		input_utente = scanf("%d", &risposta);
										
								//Ho deciso di effettuare il controllo delle risposte tramite l'utilizzo di solo if, ma alternativamente poteva essere usato anche switch case
								
		                        if (risposta == 3) {
		                                printf("\nRisposta Esatta!\nHai guadagnato un punto!\n\n");
		                                punteggio_giocatore++;
		                                printf("Il tuo punteggio attuale è: %d\n\n", punteggio_giocatore);
		                        } else if (risposta == 2 || risposta == 1) { 
		                        		/* 
										Se le opzioni fossero state di più avrei utilizzato l'if per fare un controllo non singolo
										ma bensì sul range (ESEMPIO: Da 2 a 100 se le opzioni fossero state 100)
										*/
		                                printf("\nRisposta sbagliata! Dai questa era semplice!\n\n");
		                        } else {
		                        		printf("\nOps sembra che tu abbia inserito un carattere non previsto, RIPROVA!\n\n");
								} 								
								
						} while ((risposta < 1 || risposta > 3) || input_utente == 0);
						
						
						
                        //DOMANDA 2: QUANTI ANNI PUÒ VIVERE AL MASSIMO UN'OCA?

                        printf("La prima domanda era semplice! Ora passiamo alla SECONDA!\n");
                        printf("*\n*\n*\n");

						do {
								
		                        rewind(stdin);
		                        
                        		printf("Quanti anni può vivere al massimo un'oca?\n");
		                        printf(" 1) 7\n 2) 40\n 3) 15\n\n");
						
		                		input_utente = scanf("%d", &risposta);
								
		                        if (risposta == 2) {
		                                printf("\nRisposta Esatta!\nHai guadagnato un punto!\n\n");
		                                punteggio_giocatore++;
		                                printf("Il tuo punteggio attuale è: %d\n\n", punteggio_giocatore);		                        	
		                        } else if (risposta == 1 || risposta == 3){ 
                                		printf("\nRisposta sbagliata!\nTi rifarai con la prossima domanda!\n\n");
		                        } else {
		                        		printf("\nOps sembra che tu abbia inserito un carattere non previsto, RIPROVA!\n\n");
								}
								
						} while ((risposta < 1 || risposta > 3) || input_utente == 0);
						
						

                        //DOMANDA 3: DOVE FU COSTRUITA LA PRIMA LINEA FERROVIARIA?

                        printf("Ecco la TERZA ed ultima domanda!!\n");
                        printf("*\n*\n*\n");
                        
						do {
								
		                        rewind(stdin);
		                        
                        		printf("Dove fu costruita la prima linea ferroviaria?\n");
		                        printf(" 1) Russia\n 2) Germania\n 3) Scozia\n\n");
						
		                		input_utente = scanf("%d", &risposta);
								
		                        if (risposta == 3) {
		                                printf("\nRisposta Esatta!\nHai guadagnato un punto!\n\n");
		                                punteggio_giocatore++;
		                                printf("Il tuo punteggio FINALE è: %d\n\n", punteggio_giocatore);
		                                printf("*\n*\n*\n");	                        	
		                        } else if (risposta == 1 || risposta == 3){ 
		                                printf("\nRisposta sbagliata! \n\n");
		                                printf("Il tuo punteggio FINALE è: %d\n\n", punteggio_giocatore);
		                                printf("*\n*\n*\n");
		                        } else {
		                        		printf("\nOps sembra che tu abbia inserito un carattere non previsto, RIPROVA!\n\n");
								}
								
						} while ((risposta < 1 || risposta > 3) || input_utente == 0);                        

                        continua_gioco = 1;
                        punteggio_giocatore = 0;
                        
                } else if (scelta == 'N' || scelta == 'n') {
                        printf("\nNessun problema, sarà per la prossima volta!\n\n");
                        continua_gioco = 0;
                } else {
                        printf("\nOps sembra che tu abbia sbagliato a scrivere!\nRispondi con Y se vuoi iniziare una nuova partita oppure N se non vuoi più giocare.\n\n");
                }
        } while(continua_gioco == 1);

    return 0;
}

