CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

OBJS = main.o SignalTransformation/SignalTransformation.o SignalTransformation/ReadDataFromPi.o

main: $(OBJS)
	$(CXX) $(OBJS) -o main

main.o: main.cpp
	$(CXX) $(OBJS) -c main.cpp

SignalTransformation/SignalTransformation.o: SignalTransformation/SignalTransformation.cpp
	$(CXX) $(OBJS) -c SignalTransformation/SignalTransformation.cpp

SignalTransformation/SignalTransformation.o: SignalTransformation/ReadDataFromPi.cpp
	$(CXX) $(OBJS) -c SignalTransformation/ReadDataFromPi.cpp -lgpiod

clean:
	rm -f main $(OBJS)