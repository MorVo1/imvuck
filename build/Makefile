CXXFLAGS = -pedantic -Wall -Wextra -Werror -g -fsanitize=address
SRC = ../src

out: main.o
	@g++ main.o -o imvuck ${CXXFLAGS}

main.o: ${SRC}/main.cpp
	@g++ -c ${SRC}/main.cpp ${CXXFLAGS}

clear:
	@rm -f ./*.o