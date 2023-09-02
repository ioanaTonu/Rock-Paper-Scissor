CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = main.cpp Game.cpp
OBJS = $(SRC:.cpp=.o)
EXEC = output_program.exe

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	del $(EXEC) $(OBJS)
