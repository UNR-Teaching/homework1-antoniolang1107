todomanager: driver.o
	g++ driver.o -o todomanager

driver.o: driver.cpp linkedlist.h node.h
	g++ -c -std=c++11 driver.cpp

clean:
	rm *.o todomanager