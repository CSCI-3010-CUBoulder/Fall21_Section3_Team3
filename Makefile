CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings)

all: fti

clean:
	rm fti.o fti

fti: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp -o fti
