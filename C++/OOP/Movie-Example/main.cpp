#include <iostream>
#include "Movies.h"

using std::cout;
using std::endl;

void addNewMovie(Movies &, std::string, std::string, int);
void incrementWatchCount(Movies &, std::string);

int main() {
    Movies myMovies;
    myMovies.displayMovies();

    addNewMovie(myMovies, "LOTR", "PG-13", 5);
    myMovies.displayMovies();

    addNewMovie(myMovies, "Matrix", "PG-13", 10);
    addNewMovie(myMovies, "Se7en", "PG-13", 3);
    myMovies.displayMovies();

    myMovies.deleteMovie("Matrix");
    myMovies.displayMovies();

    myMovies.eraseRecords();
    myMovies.displayMovies();

    return 0;
}

void addNewMovie(Movies &M, std::string name, std::string rating, int count) {
    if (!M.addMovie(name, rating, count))
        cout << "Movie already exists..." << endl;
}

void incrementWatchCount(Movies &M, std::string name) {
    if (M.incrWatchCount(name)) {
        cout << "Watch count incremented..." << endl;
    }
    else {
        cout << "Movie not found in the records..." << endl;
    }
}

void deleteMovie(Movies &M, std::string name) {
    if (!M.deleteMovie(name))
        cout << "Couldn't find movie..." << endl;
}

void eraseRecords(Movies &M) {
    M.eraseRecords();
}
