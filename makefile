CXX = g++
CXXFLAGS = -Wall -g

program: FlashCards.o program.cpp
	$(CXX) $(CXXFLAGS) FlashCards.o program.cpp -o program;
FlashCards.o: FlashCards.cpp
	$(CXX) $(CXXFLAGS) -c FlashCards.cpp
execute:
	make; ./program