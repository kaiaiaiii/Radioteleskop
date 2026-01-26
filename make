CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

OBJS = main.o SignalTransformation/SignalTransformation.o 

RT: $(OBJS)
	$(CXX) $(OBJS) -o main

main.o: main.cpp
	$(CXX) $(OBJS) -c main.cpp


SignalTransformation/SignalTransformation.o: SignalTransformation/SignalTransformation.cpp
	$(CXX) $(OBJS) -c SignalTransformation/SignalTransformation.cpp

clean:
	rm -f main $(OBJS)