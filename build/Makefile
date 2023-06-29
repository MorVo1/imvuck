CXXFLAGS = -pedantic -Wall -Wextra -Werror -g
SRC = ../src

out: main.o
	@g++ main.o -o imvuck ${CXXFLAGS}

main.o: ${SRC}/main.cpp
	@g++ -c ${SRC}/main.cpp ${CXXFLAGS}

clear:
	@rm -f ./imvuck
	@rm -f ./*.o