#include "../include/Generator.hpp"
unsigned long Generator::GenerateLong(int min, int max){
    if(min>max){
        return 0; //No random for you.
    }
    //Supports between 0 and INT_MAX
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    srand(ts.tv_nsec % UINT32_MAX); //Generate a seed for srand(seed). Keep it at INT_MAX
    return (rand() % max) + min; 
}