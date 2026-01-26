CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -fopenmp
LDFLAGS = -lgpiod -fopenmp

OBJS = main.o \
       SignalTransformation/SignalTransformation.o \
       SignalTransformation/ReadDataFromPi.o

all: main

main: $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o main

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

SignalTransformation/SignalTransformation.o: SignalTransformation/SignalTransformation.cpp
	$(CXX) $(CXXFLAGS) -c SignalTransformation/SignalTransformation.cpp -o SignalTransformation/SignalTransformation.o

SignalTransformation/ReadDataFromPi.o: SignalTransformation/ReadDataFromPi.cpp
	$(CXX) $(CXXFLAGS) -c SignalTransformation/ReadDataFromPi.cpp -o SignalTransformation/ReadDataFromPi.o

clean:
	rm -f main $(OBJS)
