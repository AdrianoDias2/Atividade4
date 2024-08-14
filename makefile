CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = fila
OBJS = main.o Fila.o test_cases.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c Fila.h
	$(CC) $(CFLAGS) -c main.c

Fila.o: Fila.c Fila.h
	$(CC) $(CFLAGS) -c Fila.c

test_cases.o: test_cases.c Fila.h
	$(CC) $(CFLAGS) -c test_cases.c

clean:
	rm -f *.o $(TARGET)
