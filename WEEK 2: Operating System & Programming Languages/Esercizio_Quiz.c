include <stdio.h>

int main() {

        int continua_gioco = 1;
        int punteggio_giocatore = 0;
        char scelta;
        int risposta;

        printf("Benvenuto all'interno del quiz più difficile del Mondo!\n\n");

        //Creo un ciclo While per far in modo che non si debba ogni volta riavviare il gioco se la scelta dell'utente è diversa da Y o N.

        while(continua_gioco == 1) {

                printf("Vuoi iniziare una nuova partita? (Y/N)\n\n");
                scanf("%c",&scelta);

                        /*
                        Se l'utente sceglie Y oppure y il gioco inizia
                        Quindi è in questa condizione dell'if che andiamo a sviluppare il nostro gioco QUIZ
                        */

                if (scelta == 'Y' || scelta == 'y') {
                        printf("\nOk allora iniziamo!\n");

                        //DOMANDA 1: QUANTO FA 1 + 1?

                        printf("Ecco la PRIMA domanda!\n");
                        printf("*\n*\n*\n");
                        printf("Quanto fa 1 + 1?\n");
                        printf(" 1) 1\n 2) 7\n 3) 2\n\n");

                        scanf("%d",&risposta);

                        if (risposta == 3) {
                                printf("\nRisposta Esatta!\nHai guadagnato un punto!\n\n");
                                punteggio_giocatore++;
                                printf("Il tuo punteggio attuale è: %d\n\n", punteggio_giocatore);
                        } else {
                                printf("\nRisposta sbagliata!\nDai questa era semplice!\n\n");
                        }

                        //DOMANDA 2: QUANTI ANNI PUÒ VIVERE AL MASSIMO UN'OCA?

                        printf("La prima domanda era semplice! Ora passiamo alla SECONDA!\n");
                        printf("*\n*\n*\n");
                        printf("Quanti anni può vivere al massimo un'oca?\n");
                        printf(" 1) 7\n 2) 40\n 3) 15\n\n");
                        
                        scanf("%d",&risposta);

                        if (risposta == 2) {
                                 printf("\nRisposta Esatta!\nHai guadagnato un punto!\n\n");
                                 punteggio_giocatore++;
                                 printf("Il tuo punteggio attuale è: %d\n\n", punteggio_giocatore);
                        } else {
                                 printf("\nRisposta sbagliata!\nTi rifarai con la prossima domanda!\n\n");
                        }

                        //DOMANDA 3: DOVE FU COSTRUITA LA PRIMA LINEA FERROVIARIA?

                        printf("Ecco la TERZA ed ultima domanda!!\n");
                        printf("*\n*\n*\n");
                        printf("Dove fu costruita la prima linea ferroviaria?\n");
                        printf(" 1) Russia\n 2) Germania\n 3) Scozia\n\n");

                        scanf("%d",&risposta);

                        if (risposta == 3) {
                                printf("\nRisposta Esatta!\nHai guadagnato un punto!\n\n");
                                punteggio_giocatore++;
                                printf("Il tuo punteggio FINALE è: %d\n\n", punteggio_giocatore);
                                printf("*\n*\n*\n");
                        } else {
                                printf("\nRisposta sbagliata! \n\n");
                                printf("Il tuo punteggio FINALE è: %d\n\n", punteggio_giocatore);
                                printf("*\n*\n*\n");
                        }

                        continua_gioco = 1;
                        punteggio_giocatore = 0;
                } else if (scelta == 'N' || scelta == 'n') {
                        printf("\nNessun problema, sarà per la prossima volta!\n\n");
                        continua_gioco = 0;
                }/* else {
                        printf("\nRispondi con Y se vuoi iniziare una nuova partita oppure N se vuoi smettere di giocare!\n\n");
                }
*/
        }

        return 0;
}

