#ifndef STATS_H_
#define STATS_H_

#include <fstream>
#include <string>
#include <vector>

class Stats
{
    private:
        std::vector<int> v;
        std::string file {""};

        int num;
        std::ifstream fileName;
    public:
        Stats() {v.reserve(100); };                  // null constructor
        Stats(std::string f1) : file{f1}    // initialized constructor that stores each int within file into a vector
        {
            v.reserve(100);
            fileName.open(f1);
            while (fileName >> num)
                { v.push_back(num); }                         // stores each integer in vector
            fileName.close();
        }

        int capacity();     // method prototypes
        int count();
        int countEven();
        int countOdd();
        int countFib();
        float avgAll();
        float avgEven();
        float avgOdd();
        float avgFib();
};

#endif
