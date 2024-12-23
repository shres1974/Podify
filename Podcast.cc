#include "Podcast.h"

// Constructor
Podcast::Podcast(const string& t, const string& h) : title(t), host(h) {}

// Equality check
bool Podcast::equals(const string& t) const {
    return title == t;
}

// Add episode
void Podcast::add(Episode* episode) {
    episodes += episode;
}

// Get episode by index
Episode* Podcast::get(int index) {
    if (index < 0 || index >= episodes.getSize()) {
        cerr << "Podcast index out of bounds" << endl;
        exit(1);
    }
    return episodes[index];
}

// Get number of episodes
int Podcast::getSize() const {
    return episodes.getSize();
}

// Print podcast details
void Podcast::print(ostream& ost) const {
    ost << "Podcast: " << title << endl
        << "Host: " << host << endl;
}

// Print podcast with all episodes
void Podcast::printWithEpisodes(ostream& ost) const {
    print(ost);
    ost << "Episodes:" << endl;
    for (int i = 0; i < episodes.getSize(); ++i) {
        ost << *episodes[i];
    }
}

// Stream insertion operator
ostream& operator<<(ostream& ost, const Podcast& podcast) {
    podcast.print(ost);
    return ost;
}

Podcast::~Podcast() {
    for (int i = 0; i < episodes.getSize(); ++i) {
        delete episodes[i];  // Delete each Episode
    }
}