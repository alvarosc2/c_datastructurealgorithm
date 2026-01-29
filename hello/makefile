# Nombre del compilador
CC = gcc

# Opciones de compilación
CFLAGS = -Wall -Wextra -std=c99

# Nombre del ejecutable
TARGET = hello

# Regla principal
$(TARGET): hello.o
	$(CC) $(CFLAGS) -o $(TARGET) hello.o

# Cómo generar el archivo objeto
hello.o: hello.c
	$(CC) $(CFLAGS) -c hello.c

# Limpieza de archivos generados
clean:
	rm -f $(TARGET) hello.o
