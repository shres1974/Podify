#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>
using namespace std;

class Episode {
public:
    // Constructor
    Episode(const string& podcastTitle, const string& host, 
            const string& episodeTitle, const string& category, 
            const string& audio, const string& videoFile);

    // Getters
    string getPodcastTitle() const;
    string getHost() const;
    string getEpisodeTitle() const;
    string getCategory() const;
    string getAudio() const;
    string getVideoFile() const;

    // Print function
    void print(ostream& ost) const;

    // Stream insertion operator
    friend ostream& operator<<(ostream& ost, const Episode& episode);

private:
    string podcastTitle;
    string host;
    string episodeTitle;
    string category;
    string audio;
    string videoFile;
};

#endif // EPISODE_H