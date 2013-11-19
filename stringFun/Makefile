CC = clang
CFLAGS = -ggdb -std=c99 -Wall -Wextra
BINARY = stringParse

stringParse: stringParse.c
	$(CC) $(CFLAGS) -o $(BINARY) $^

clean: 
	@$(RM) -rfv $(BINARY)
