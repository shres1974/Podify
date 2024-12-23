#ifndef PODIFY_H
#define PODIFY_H

#include "Array.h"
#include "Podcast.h"
#include "Episode.h"
#include "Search.h"

class Podify {
public:
    // Add a podcast to the collection
    void addPodcast(Podcast* podcast);

    // Add an episode to a specific podcast
    void addEpisode(Episode* episode, const std::string& podcastTitle);

    // Get podcasts collection
    const Array<Podcast*>& getPodcasts() const;

    // Get podcast by index
    Podcast* getPodcast(int index);

    // Get podcast by title
    Podcast* getPodcast(const std::string& title);

    // Get episodes matching a search criteria
    void getEpisodes(const Search& search, Array<Episode*>& result);

    ~Podify();

private:
    Array<Podcast*> podcasts;
};

#endif // PODIFY_H