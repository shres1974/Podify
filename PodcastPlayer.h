#ifndef PODCAST_PLAYER_H
#define PODCAST_PLAYER_H

#include <iostream>
#include <fstream>
#include "Episode.h"

class PodcastPlayer {
public:
    virtual ~PodcastPlayer() = default;
    virtual void play(const Episode& episode, std::ostream& ost) = 0;
};

class AudioPlayer : public PodcastPlayer {
public:
    void play(const Episode& episode, std::ostream& ost) override;
};

class VideoPlayer : public AudioPlayer {
public:
    void play(const Episode& episode, std::ostream& ost) override;
};

#endif // PODCAST_PLAYER_H