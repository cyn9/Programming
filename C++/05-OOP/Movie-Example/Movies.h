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
    Movies()    { M.reserve(100); }

    // Destructor
    ~Movies()   {}

    bool addMovie(std::string name, std::string rating, int count);
    bool incrWatchCount(std::string name);
    bool deleteMovie(std::string name);
    
    void eraseRecords();
    void displayMovies() const;

};
