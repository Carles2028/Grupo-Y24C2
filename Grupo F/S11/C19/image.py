from PIL import Image, ImageOps

imagen = Image.open("roro-pelea-goku.jpg")
imagenFiltrada = ImageOps.mirror(imagen)
imagenFiltrada.save("roro-pelea-goku-borroso.jpg")  # Guarda la imagen filtrada
