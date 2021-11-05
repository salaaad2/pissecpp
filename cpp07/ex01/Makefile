##
# cpp05ex00
#
# @file
# @version 0.1

CC            = clang++

CFLAGS        = -pedantic -Wall -Wextra -Werror -Wno-conversion

TARGET        = iter

SOURCES       = main.cpp

###

all:
	$(CC) $(CFLAGS)  $(SOURCES) -o $(TARGET)

fclean:
	-rm -f $(TARGET)

.PHONY: all fclean

# end
