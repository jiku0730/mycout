CXX      := clang++
CXXFLAGS := -std=c++23 -Wall -Wextra -O0 -g

.PHONY: all run clean

all: mycout

mycout: main.cpp mycout.cpp mycout.hpp
	$(CXX) $(CXXFLAGS) main.cpp mycout.cpp -o mycout

run: mycout
	./mycout

clean:
	rm -rf mycout test *.dSYM
