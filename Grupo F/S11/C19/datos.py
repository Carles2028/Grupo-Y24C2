import csv
from sys import argv, exit

if len(argv) != 2:
    print("Usage: python3 csv_to_json.py <csv_file>")
    exit(1)


comidas = {
    "Carne asada" : 0,
    'Arroz de piñata' : 0,
    'Pollo en salsa jalapeño' : 0,
    'Fritange' : 0,
    'Arroz chino' : 0,
    'Pizza' : 0,
    'Baho' : 0,
    'Quesillo' : 0,
    'Nacatamal' : 0,
    'Opción 10' : 0
}

with open(argv[1], 'r') as file:
    lector = csv.DictReader(file)
    for i in lector:
        comidas[i['Comidas']] += 1

for i in comidas:
    print(f'{comidas[i]} personas prefieren la comida {i}')  # Imprime el número de personas que prefieren cada comida.  # noqa
