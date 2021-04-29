all:
	mkdir -p bin
	g++ -o bin/Program.out src/Program.cpp src/Generator.cpp src/EasyBMP.cpp
	bin/Program.out
clean:
	rm bin/Program.out 
