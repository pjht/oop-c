CC = gcc
CFLAGS = -Wall -g
SRCS = $(wildcard *.c */*.c */*/*.c)
OBJS = $(SRCS:.c=.o)
MAIN = oopc
.PHONY: clean
all: $(MAIN)
$(MAIN): $(OBJS)
  $(CC) $(CFLAGS) -o $(MAIN) $(OBJS)
.c.o:
  $(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@
clean:
  $(RM) *.o *~ $(MAIN)
