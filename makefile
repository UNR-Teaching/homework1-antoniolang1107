todomanager: main.cpp linkedlist.o node.o
	g++ -std=c++11 main.cpp
linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -c std=c++11 linkedlist.cpp

node.o: node.cpp node.h
	g++ -c std=c++11 node.cpp

clean:
	rm *.o todomanager