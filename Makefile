CC = i686-w64-mingw32-gcc

SRC = wdownloader.c
EXEC = wdownloader.exe

.PHONY: all

all: wdownloader

.PHONY: wdownloader

wdownloader:
	@$(CC) $(SRC) -o $(EXEC)

.PHONY: clean

clean:
	@rm -rf $(EXEC)
