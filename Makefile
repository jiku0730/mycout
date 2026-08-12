CXX      := clang++
CXXFLAGS := -std=c++23 -Wall -Wextra -O0 -g

.PHONY: all run test clean

all: mycout

mycout: main.cpp mycout.cpp mycout.hpp
	$(CXX) $(CXXFLAGS) main.cpp mycout.cpp -o mycout

test: test.cpp mycout.cpp mycout.hpp
	$(CXX) $(CXXFLAGS) test.cpp mycout.cpp -o test
	./test | diff -u expected.txt - && echo PASS

run: mycout
	./mycout

clean:
	rm -rf mycout test *.dSYM
