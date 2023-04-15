CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

SRC = main.cpp mamifero.cpp ave.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

programa: $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

-include $(DEP)

%.d: %.cpp
	$(CXX) $(CXXFLAGS) -MM -MT $(@:.d=.o) $< -MF $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJ) $(DEP) programa