NAMEA = libmx.a

INC = libmx.h
INCI = inc/libmx.h

SRC = mx_printchar.c mx_binary_search.c
SRCS = src/mx_printchar.c src/mx_binary_search.c

OBJ = mx_printchar.o mx_binary_search.o

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INCI) .
	@clang $(CFLAGS) -c $(SRC) -I $(INC)
	@ar rcs $(NAMEA) $(OBJ)
	@mkdir obj
	@mv $(OBJ) ./obj
uninstall: clean
	@rm -rf $(NAMEA)
	@rm -rf ./obj
clean:
	@rm -rf $(INC)
	@rm -rf $(SRC)
reinstall: uninstall all
