OBJS	= TP1_CPP_LEXIQUE.o utilitaire.o lexiqueClass.o wordClass.o
SOURCE	= TP1_CPP_LEXIQUE.cpp utilitaire.cpp lexiqueClass.cpp wordClass.cpp
HEADER	= utilitaire.hpp lexiqueClass.hpp wordClass.hpp
OUT	= projectCPP
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

TP1_CPP_LEXIQUE.o: TP1_CPP_LEXIQUE.cpp
	$(CC) $(FLAGS) TP1_CPP_LEXIQUE.cpp -std=c11

utilitaire.o: utilitaire.cpp
	$(CC) $(FLAGS) utilitaire.cpp -std=c11

lexiqueClass.o: lexiqueClass.cpp
	$(CC) $(FLAGS) lexiqueClass.cpp -std=c11

wordClass.o: wordClass.cpp
	$(CC) $(FLAGS) wordClass.cpp -std=c11


clean:
	rm -f $(OBJS) $(OUT)