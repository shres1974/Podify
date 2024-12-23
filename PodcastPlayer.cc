#include "PodcastPlayer.h"

void AudioPlayer::play(const Episode& episode, std::ostream& ost) {
    ost << "Playing audio for episode: " << episode.getEpisodeTitle() << std::endl;
    ost << "Audio content: " << episode.getAudio() << std::endl;
}

void VideoPlayer::play(const Episode& episode, std::ostream& ost) {
    // First play audio (inherited from AudioPlayer)
    AudioPlayer::play(episode, ost);

    // Then play video
    std::ifstream videoFile(episode.getVideoFile());
    if (videoFile.is_open()) {
        ost << "Video content:" << std::endl;
        std::string line;
        while (std::getline(videoFile, line)) {
            ost << line << std::endl;
        }
        videoFile.close();
    } else {
        ost << "Could not open video file: " << episode.getVideoFile() << std::endl;
    }
}