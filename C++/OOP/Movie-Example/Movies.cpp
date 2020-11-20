#include "Movies.h"

using std::cout;
using std::endl;

bool Movies::addMovie(std::string name, std::string rating, int count) {

    for (const auto &e: M) {
        if (e.getMovieName() == name) {
            cout << "123";
            return false;
        }
    }

    M.push_back(Movie(name, rating, count));
    cout << "Add movie successful!" << endl;

    return true;
}

bool Movies::incrWatchCount(std::string name) {
    for (auto &e: M) {
        if (e.getMovieName() == name) {
            e.incrementWatchCount();
            return true;
        }
    }

    return false;
}

void Movies::displayMovies() const {
    if (M.size() == 0) {
        cout << "No record..." << endl;
    }
    else {
        cout << "Movie\t\t" << "Rating\t\t" << "Watch Count" << endl;
        
        for (auto e: M)
            cout << e.getMovieName() << "\t\t" << e.getMovieRating() << "\t\t" << e.getWatchCount() << endl;
    }
}
