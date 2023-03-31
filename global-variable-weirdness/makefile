main=src/main.cpp
includes=-Iinclude
output=bin/main.exe
compiler=g++
warn=-Wall -Wextra -Werror -pedantic
flags=-std=c++11

default : $(main)
	$(compiler) $(flags) $(warn) $(includes) $(libs) $(main) -o $(output)

run: $(output)
	./$(output)
