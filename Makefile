.PHONY:clean

time:
	@chmod 755 .
	@g++ -std=c++11 timing.cpp pointerlist.cpp arraylist.cpp arraystack.cpp pointerstack.cpp -o timing.o
	@./timing.o

pointerlist:
	@chmod 755 .
	@g++ -std=c++11 plisttest.cpp pointerlist.cpp -o ptest.o
	@./ptest.o

arraylist:
	@chmod 755 .
	@g++ -std=c++11 alisttest.cpp arraylist.cpp -o atest.o
	@./atest.o

pointerstack:
	@chmod 755 .
	@g++ -std=c++11 pstacktest.cpp pointerstack.cpp -o pstest.o
	@./pstest.o

arraystack:
	@chmod 755 .
	@g++ -std=c++11 astacktest.cpp arraystack.cpp -o astest.o
	@./astest.o

clean:
	@\rm -f *.o
