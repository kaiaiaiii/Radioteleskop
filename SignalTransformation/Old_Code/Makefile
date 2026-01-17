# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -O2 -std=c++17

# Output Binary Name
OUT = main

# Alle .cpp-Dateien
SRC = $(wildcard *.cpp)

# Objektdateien
OBJ = $(SRC:.cpp=.o)

# Standard-Target
all: clean $(OUT)

# Linken
$(OUT): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Kompilieren jeder .cpp-Datei zu .o
%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean-Target
clean:
	rm -f $(OBJ) $(OUT)
