#ifndef GENERATOR_HPP
#define GENERATOR_HPP
#include <iostream>
#include <time.h> /* For randomness */
#include <math.h> /* For pow() */
#include <random> /* Getting help from real random library. */
/**
 * Mostly static methods for getting rid of useless object creations. Maybe that will change later.
 */
class Generator
{
public:
    static unsigned long GenerateLong(int, int); 
};
#endif