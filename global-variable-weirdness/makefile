source=src/main.cpp lib/enemy.cpp lib/player.cpp lib/npc.cpp
includes=-Iinclude
libs=-Llib
output=bin/main.exe
compiler=g++
#warn=-Wall -Wextra -Werror -pedantic
flags=-std=c++11

default : $(main)
	$(compiler) $(flags) $(warn) $(includes) $(libs) $(source) -o $(output)

run: $(output)
	./$(output)
