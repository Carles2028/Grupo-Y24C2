import csv
import os
from sys import exit

estudiantes = []

contadorID = 0

filename = "estudiantes.csv"

def guardar(nombreArchivo):
    if os.path.exists(nombreArchivo):
        with open(nombreArchivo, 'a', newline='') as csvEstudiantes:
            writer = csv.writer(csvEstudiantes)
            for estudiante in estudiantes:
                writer.writerow([estudiante["id"],estudiante["nombre"], estudiante["apellido"], estudiante["nota"]])
            return
    with open(nombreArchivo, 'a', newline='') as csvEstudiantes:
        writer = csv.writer(csvEstudiantes)
        writer.writerow(["ID", "Nombre", "Apellido", "Nota"])
        for estudiante in estudiantes:
            writer.writerow([estudiante["id"], estudiante["nombre"], estudiante["apellido"], estudiante["nota"]])
        return

def buscar(id, nombreArchivo):
    if os.path.exists(nombreArchivo):
        with open(nombreArchivo, "r") as csvEstudiantes:
            reader = csv.DictReader(nombreArchivo, fieldnames=["id", "nombre", "apellido", "nota"])
            for row in reader:
                print(row[])
                
                if row["id"] == str(id):
                    print(f"{row["nombre"]}")


while True:
    nombre = input("Ingrese el nombre del estudiante: ")
    apellido = input("Ingrese el apellido del estudiante: ")
    nota = float(input("Ingrese el nota del estudiante: "))
    estudiantes.append({
        "id" : contadorID,
        "nombre": nombre,
        "apellido": apellido,
        "nota": nota,
    })
    contadorID += 1
    control = ""
    while True:
        control = input("Desea continuar? (s/n): ")
        if control.lower() == "n" or control.lower() == "s":
            break
    if control.lower() == "n":
        break

print("-------------")
for i in estudiantes:
    print(f"ID: {i["id"]} \nNombre: {i['nombre']} \nApellido: {i['apellido']} \nNota: {i['nota']}")
    print("-------------")

if input("Desea guardar el archivo? (s/n): ").lower() == "s":
    guardar(filename)
    buscar(1, filename)
    exit(0)
