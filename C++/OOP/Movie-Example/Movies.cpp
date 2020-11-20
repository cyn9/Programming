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
        cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = " << endl;
        cout << "Movie\t\t" << "Rating\t\t" << "Watch Count" << endl;
        cout << "= = = = = = = = = = = = = = = = = = = = = = = = = = = = " << endl;
        
        for (auto e: M)
            cout << e.getMovieName() << "\t\t" << e.getMovieRating() << "\t\t" << e.getWatchCount() << endl;
    }
}

bool Movies::deleteMovie(std::string name) {
    unsigned index = 1;

    for (auto &e: M) {
        if (e.getMovieName() == name) {
            M.erase(M.begin() + index);
            index++;

            return true;
        }
    }

    return false;
}
