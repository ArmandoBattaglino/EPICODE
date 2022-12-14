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

#Richiami alle funzioni con input
quadratoInput()
cerchioInput()
rettangoloInput()
