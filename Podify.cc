#include "Podify.h"
#include <iostream>
#include <cstdlib>

void Podify::addPodcast(Podcast* podcast) {
    podcasts += podcast;
}

void Podify::addEpisode(Episode* episode, const std::string& podcastTitle) {
    for (int i = 0; i < podcasts.getSize(); ++i) {
        if (podcasts[i]->equals(podcastTitle)) {
            podcasts[i]->add(episode);
            return;
        }
    }
    std::cerr << "Error: Podcast " << podcastTitle << " not found." << std::endl;
    exit(1);
}

const Array<Podcast*>& Podify::getPodcasts() const {
    return podcasts;
}

Podcast* Podify::getPodcast(int index) {
    if (index < 0 || index >= podcasts.getSize()) {
        std::cerr << "Podcast index out of bounds" << std::endl;
        exit(1);
    }
    return podcasts[index];
}

Podcast* Podify::getPodcast(const std::string& title) {
    for (int i = 0; i < podcasts.getSize(); ++i) {
        if (podcasts[i]->equals(title)) {
            return podcasts[i];
        }
    }
    std::cerr << "Podcast " << title << " not found" << std::endl;
    exit(1);
}

void Podify::getEpisodes(const Search& search, Array<Episode*>& result) {
    for (int i = 0; i < podcasts.getSize(); ++i) {
        Podcast* podcast = podcasts[i];
        for (int j = 0; j < podcast->getSize(); ++j) {
            Episode* episode = podcast->get(j);
            if (search.matches(episode)) {
                result += episode;
            }
        }
    }
}

Podify::~Podify() {
    for (int i = 0; i < podcasts.getSize(); ++i) {
        delete podcasts[i];  // Delete each Podcast
    }
}