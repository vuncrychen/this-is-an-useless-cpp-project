useless: main.cpp Game.cpp
	g++ -c main.cpp Game.cpp
	g++ -o useless main.o Game.o

clean:
	rm useless *.o