#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Movie.h"

class Movies {

private:
    std::vector<Movie> M;

public:
    // Constructor
    Movies()                {}

    // Destructor
    ~Movies() {}

    bool addMovie(std::string name, std::string rating, int count);
    bool incrWatchCount(std::string name);

    void displayMovies() const;

};
