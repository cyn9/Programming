#include "Movie.h"

Movie::Movie(Movie &&M) noexcept : Movie(M.getMovieName(), M.getMovieRating(), M.getWatchCount()) {
    M.setMovieName("");
    M.setMovieRating("");
    M.setWatchCount(0);
}

std::string Movie::getMovieName() const {
    return this->movieName;
}

std::string Movie::getMovieRating() const {
    return this->movieRating;
}

int Movie::getWatchCount() const {
    return this->watchCount;
}

void Movie::setMovieName(std::string movieName) {
    this->movieName = movieName;
}

void Movie::setMovieRating(std::string movieRating) {
    this->movieRating = movieRating;
}

void Movie::setWatchCount(int watchCount) {
    this->watchCount = watchCount;
}

void Movie::incrementWatchCount() {
    this->watchCount++;
}
