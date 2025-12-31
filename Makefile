CC = gcc
CFLAGS = -Wall -Wextra -O2

SRCDIR = src
SRC = $(wildcard $(SRCDIR)/*.c)

OUTDIR = out
M = $(OUTDIR)/cmusic

INCLUDE = headers
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm -lshell32 -lpthread

.PHONY: all build buildrun run clean

all: build

$(OUTDIR):
	mkdir -p $(OUTDIR)

build: $(OUTDIR)
	$(CC) $(SRC) -o $(M) $(CFLAGS) -I$(INCLUDE) $(LIBS)

brun: build
	./$(M)

run:
	./$(M)

clean:
	rm -rf $(OUTDIR) *.o
