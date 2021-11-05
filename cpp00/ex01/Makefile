##
# CPP00
#
# @file
# @version 0.1

CC = clang++

CPPFLAGS			= -Wall \
                      -Wextra	  \
                      -Werror

SRC					= contact.cpp

INC					= contact.hpp

OBJ			 = $(patsubst %.c,%.o,${SRC})

NAME				= phonebook

all:
	${CC} ${CPPFLAGS} ${SRC} main.cpp -o phonebook

fclean:
	rm *.o
	rm phonebook

# end
