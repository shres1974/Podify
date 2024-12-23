objects = main.o View.o Controller.o Podify.o Podcast.o Episode.o PodcastPlayer.o PodcastFactory.o Search.o
testobjects = test.o View.o TestControl.o Tester.o Podify.o Podcast.o Episode.o PodcastPlayer.o PodcastFactory.o Search.o

# Add -std=c++11 to all g++ commands
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

all: a5 a5test

a5: $(objects)
	$(CXX) $(CXXFLAGS) -o a5 $(objects)

main.o: main.cc Array.h
	$(CXX) $(CXXFLAGS) -c main.cc 

a5test: $(testobjects)
	$(CXX) $(CXXFLAGS) -o a5test $(testobjects)

test.o: test.cc Array.h
	$(CXX) $(CXXFLAGS) -c test.cc

Tester.o: Tester.cc Tester.h
	$(CXX) $(CXXFLAGS) -c Tester.cc

TestControl.o: TestControl.cc TestControl.h
	$(CXX) $(CXXFLAGS) -c TestControl.cc

View.o: View.h View.cc Array.h
	$(CXX) $(CXXFLAGS) -c View.cc

Controller.o: Controller.h Controller.cc Array.h
	$(CXX) $(CXXFLAGS) -c Controller.cc

Podify.o: Podify.h Podify.cc Array.h
	$(CXX) $(CXXFLAGS) -c Podify.cc

Podcast.o: Podcast.cc Podcast.h Array.h
	$(CXX) $(CXXFLAGS) -c Podcast.cc

Episode.o: Episode.cc Episode.h
	$(CXX) $(CXXFLAGS) -c Episode.cc
	
PodcastPlayer.o: PodcastPlayer.cc PodcastPlayer.h
	$(CXX) $(CXXFLAGS) -c PodcastPlayer.cc
	
PodcastFactory.o: PodcastFactory.cc PodcastFactory.h
	$(CXX) $(CXXFLAGS) -c PodcastFactory.cc

Search.o: Search.cc Search.h
	$(CXX) $(CXXFLAGS) -c Search.cc

clean:
	rm -f a5 a5test *.o	
	
