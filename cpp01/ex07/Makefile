##
# replace
#
# @file
# @version 0.1

CC = clang++

CPPFLAGS			= -Wall \
                      -Wextra	  \
                      -Werror	  \
                      -std=c++98

SRC					= Worker.cpp

INC					= Worker.hpp

OBJ			 = $(patsubst %.c,%.o,${SRC})

NAME				= replace

%.c:%.o
	${CC} -c ${CPPFLAGS} -o $@ $<

all:
	${CC} ${CPPFLAGS} ${SRC} main.cpp -o ${NAME}

# end
