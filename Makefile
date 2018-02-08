EXEC = avserver
CC = gcc
CFLAGS = -g
LDLIBS += -lpthread
SRCS = main.c\
	avserver.c\

$(EXEC):$(SRCS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -rf *.o $(EXEC) *.temp
