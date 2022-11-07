"""
L'esercizio consiste nella creazione di un codice che calcoli il perimetro delle seguenti figure:

CERCHIO

RETTANGOLO

QUADRATO

"""

##########################################################

#Vado ad importare la libreria math per poter utilizzare il pigreco
import math

################## Funzioni senza INPUT ##################

# Funzione per calcolare perimetro del QUADRATO (No input)
def quadrato(x):
  y = x*x

  print("Il perimetro del quadrato con lato {} e' {}\n\n".format(x,y))
  return y

# Funzione per calcolare perimetro del CERCHIO (No input)
def cerchio(x):
  y = 2*math.pi*x

  print("Il perimetro del cerchio con raggio {} e' {}\n\n".format(x,y))
  return y

# Funzione per calcolare perimetro del RETTANGOLO (No input)
def rettangolo(b,h):
  y = b*h

  print("Il perimetro del rettangolo con base {} e altezza {} e' {}\n\n".format(b,h,y))
  return y


################## Funzioni con INPUT ##################

# Funzione per calcolare perimetro del QUADRATO (Richiesta input)
def quadratoInput():
  x = float(input("Inserisci quanto vuoi che sia lungo il lato del quadrato: "))
  y = x*x

  print("Il perimetro del quadrato con lato {} e' {}\n\n".format(x,y))
  return y

# Funzione per calcolare perimetro del CERCHIO (Richiesta input)
def cerchioInput():
  x = float(input("Inserisci quanto vuoi che sia lungo il raggio del cerchio: "))
  y = 2*math.pi*x

  print("Il perimetro del cerchio con raggio {} e' {}\n\n".format(x,y))
  return y

# Funzione per calcolare perimetro del RETTANGOLO (Richiesta input)
def rettangoloInput():
  b = float(input("Inserisci quanto vuoi che sia lunga la base del rettangolo: "))
  h = float(input("Ora inserisci l'altezza: "))
  y = b*h

  print("Il perimetro del rettangolo con base {} e altezza {} e' {}\n\n".format(b,h,y))
  return y

"""

Qui ci sono i richiami alle funzioni senza input in cui andiamo manualmente
ad inserire i parametri

quadrato(3)
cerchio(2)
rettangolo(3,4)

"""

#Programma con richiami alle funzioni con input e possibilità dell'utente di scegliere

def menuCalcoloPerimetro():

  contatore = 3

  while (contatore >= 0):

    scelta_utente = int(input("Quale perimetro vuoi calcolare?\n\n(1) >>> QUADRATO\n\n(2) >>> CERCHIO\n\n(3) >>> RETTANGOLO\n\nInserisci qui la tua scelta >>> "))

    if (scelta_utente == 1):
      quadratoInput()
      contatore = 3
    elif (scelta_utente == 2):
      cerchioInput()
      contatore = 3
    elif (scelta_utente == 3):
      rettangoloInput()
      contatore = 3
    else:
      if contatore == 1:
        print("Attento se sbagli a mettere l'input ancora una volta il programma si chiudera'!\n")
        contatore -= 1
      elif contatore == 0:
        print("\nOps sembra che tu abbia finito i tentativi a tua disposizione...")
        break
      else:
        contatore -= 1
        print("\nInserisci un numero da 1 a 3!\nTentativi rimanenti: {}\n".format(contatore))



menuCalcoloPerimetro()
