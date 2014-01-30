CC = clang
CFLAGS = -ggdb -std=c99 -Wall -Wextra

BINARIES = stringParse chars

all: stringParse chars

stringParse: stringParse.c
	$(CC) $(CFLAGS) -o stringParse $^

chars: chars.c
	$(CC) $(CFLAGS) -o chars $^

clean:
	@$(RM) -rfv $(BINARIES)
