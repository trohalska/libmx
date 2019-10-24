NAMEA = libmx.a

INC = inc/libmx.h
OBJH = obj/libmx.h

SRC = src/mx_printchar.c
OBJC = obj/mx_printchar.c
OBJO = obj/mx_printchar.o

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@mkdir obj
	@cp $(SRC) ./obj
	@cp $(INC) ./obj
	@clang $(CFLAGS) -o $(OBJO) -c $(OBJC) -I $(OBJH)
	@ar rcs $(NAMEA) $(OBJO)
uninstall: clean
	@rm -rf $(NAMEA)
clean:
	@rm -rf ./obj
reinstall: uninstall all
