#pragma once

#include <iostream>
#include <string>

class Movie {

private:
    std::string movieName;
    std::string movieRating;
    int watchCount;

public:
    // Delegating constructor:
    Movie(std::string name, std::string rating, int count)
        : movieName{name}, movieRating{rating}, watchCount{count} {}

    // Other constructors:
    Movie()                                         : Movie("N/A", "N/A", 0)    {}
    Movie(std::string name)                         : Movie(name, "N/A", 0)     {}
    Movie(std::string name, std::string rating)     : Movie(name, rating, 0)    {}

    // Destructor
    ~Movie() {}

    // Getter methods:
    std::string getMovieName()      const;
    std::string getMovieRating()    const;
    int getWatchCount()             const;

    // Setter methods:
    void setMovieName(std::string movieName);
    void setMovieRating(std::string movieRating);

    void incrementWatchCount();

};
