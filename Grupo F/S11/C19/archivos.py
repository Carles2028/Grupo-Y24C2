import csv
from cs50 import get_string

name  = get_string("Ingrese su nombre: ")
numero = get_string("Ingrese su numero: ")

with open("agendatelefonica.csv", "a") as tilin:
    writer = csv.writer(tilin)
    writer.writerow([name, numero])
