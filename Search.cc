#include "Search.h"
#include "Episode.h"

// H_Search Implementation
H_Search::H_Search(const string& h) : host(h) {}

bool H_Search::matches(const Episode* episode) const {
    return episode && episode->getHost() == host;
}

void H_Search::print(ostream& ost) const {
    ost << "Search for Episodes by host: " << host << endl;
}

// C_Search Implementation
C_Search::C_Search(const string& cat) : category(cat) {}

bool C_Search::matches(const Episode* episode) const {
    return episode && episode->getCategory() == category;
}

void C_Search::print(ostream& ost) const {
    ost << "Search for Episodes by category: " << category << endl;
}

// HorC_Search Implementation
HorC_Search::HorC_Search(const string& h, const string& cat) 
    : H_Search(h), C_Search(cat) {}

bool HorC_Search::matches(const Episode* episode) const {
    return episode && 
           (episode->getHost() == host || 
            episode->getCategory() == category);
}

void HorC_Search::print(ostream& ost) const {
    ost << "Search for Episodes by host: " << host 
        << " or category: " << category << endl;
}