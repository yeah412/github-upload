target:	main

main:	main.o	classPerson_Src.o
		g++ --std=c++11 main.o classPerson_Src.o -o run

main.o:	main.cpp
		g++ --std=c++11 -c main.cpp

classPerson_Src.o:	classPerson_Src.cpp
		g++ --std=c++11 -c classPerson_Src.cpp

clean:
		rm main.o classPerson_Src.o run