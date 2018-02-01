TARGET = helloworld
OBJS = helloworld.o print.o
BINDIR = ./bin

CXX = g++
CXXFLAGS = -g -Wall -std=c++11

.PHONY : clean all run

$(TARGET) : $(OBJS)
	mkdir -p $(BINDIR)
	$(CXX) -o $(BINDIR)/$@ $^

$.o : $.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean : 
	rm -rf $(BINDIR) $(OBJS)

all : clean $(TARGET)

run :
	$(BINDIR)/$(TARGET)
