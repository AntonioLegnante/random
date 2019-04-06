#simulazione del lancio di un dato

import random
 
facce = 0
while facce <= 1:
    facce = int(input("inserisci il numero di facce"))

lancio = random.randrange(1, facce + 1)

print(lancio)