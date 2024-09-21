import csv

valor = {
    'Con pan' : 0,
    'Con tortilla' : 0,
    'Con otro nacatamal' : 0
}


with open("respuestas.csv", "r") as file:
    reader = csv.DictReader(file)
    print(reader)
    for i in reader:
        valor[i['Con que se come el nacatamal?']] +=1

for i in valor:
    print(f' La gente que prefiere el nacatamal {i} son {valor[i]}')
