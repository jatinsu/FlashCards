CXX = g++
CXXFLAGS = -Wall -g

FlashCards: FlashCards.cpp
	$(CXX) $(CXXFLAGS) FlashCards.cpp -o FlashCards