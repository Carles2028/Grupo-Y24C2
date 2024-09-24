from cs50 import *
lista = [1, 2, 3]

def main():
    lista.append(
        input("Numero {i}:")
        for i in range(3)
    )

    lista.append([
        input("Cadenas: ")
        for i in range(3)
        ])

    print(lista)

main()
