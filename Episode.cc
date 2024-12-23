#include "Episode.h"

// Constructor
Episode::Episode(const string& podTitle, const string& h, 
                 const string& episodeTitle, const string& cat, 
                 const string& audioContent, const string& video)
    : podcastTitle(podTitle), host(h), episodeTitle(episodeTitle), 
      category(cat), audio(audioContent), videoFile(video) {}

// Getters
string Episode::getPodcastTitle() const { return podcastTitle; }
string Episode::getHost() const { return host; }
string Episode::getEpisodeTitle() const { return episodeTitle; }
string Episode::getCategory() const { return category; }
string Episode::getAudio() const { return audio; }
string Episode::getVideoFile() const { return videoFile; }

// Print function
void Episode::print(ostream& ost) const {
    ost << "Podcast: " << podcastTitle << endl
        << "Host: " << host << endl
        << "Episode: " << episodeTitle << endl
        << "Category: " << category << endl;
}

// Stream insertion operator
ostream& operator<<(ostream& ost, const Episode& episode) {
    episode.print(ost);
    return ost;
}