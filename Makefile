# Makefile

CXX = CC
CXXFLAGS =

isPrime: main.cpp number.h number.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm isPrime
