#which compiler
CC=$(CROSS_COMPILE)gcc
RM = rm -f
CFLAGS  = -g

default: all

all: writer

writer: writer.c 
	$(CC) $(CFLAGS) -o writer writer.c 

clean veryclean:
	$(RM) writer


