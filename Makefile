SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c = .o)
EXEC = avserver
CC = gcc
CFLAGS = -g
LDLIBS += -lpthread -lx264 -lm

$(EXEC):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

%.o:%.c
	$(CC) -c $^ $(CFLAGS) $(LDLIBS)

clean:
	rm -rf *.o *.tmp $(EXEC) *.dSYM
