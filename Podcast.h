#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include <string>
#include "Array.h"
#include "Episode.h"
using namespace std;

class Podcast {
public:
    // Constructor
    Podcast(const string& title, const string& host);

    // Equality check
    bool equals(const string& title) const;

    // Episode management
    void add(Episode* episode);
    Episode* get(int index);
    int getSize() const;

    // Print functions
    void print(ostream& ost) const;
    void printWithEpisodes(ostream& ost) const;

    // Stream insertion operator
    friend ostream& operator<<(ostream& ost, const Podcast& podcast);


  ~Podcast();
private:
    string title;
    string host;
    Array<Episode*> episodes;
};

#endif // PODCAST_H