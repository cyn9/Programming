#include "Movie.h"

std::string Movie::getMovieName()   const { return this->movieName; }
std::string Movie::getMovieRating() const { return this->movieRating; }
int Movie::getWatchCount()          const { return this->watchCount; }

void Movie::setMovieName(std::string movieName)     { this->movieName = movieName; }
void Movie::setMovieRating(std::string movieRating) { this->movieRating = movieRating; }
void Movie::setWatchCount(int watchCount)           { this->watchCount = watchCount; }

void Movie::incrementWatchCount()                   { this->watchCount++; }
