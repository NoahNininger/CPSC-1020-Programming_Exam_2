#include "stats.h"

int Stats::capacity()
    { return v.capacity(); }               // returns capacity of vector

int Stats::count()
    { return v.size(); }                      // returns size of vector ( num of elements )

int Stats::countEven()      // counts even elements
{
    int count {0};

    for (long unsigned int i = 0; i < v.size(); i++) // loops through vector
    {
        if (v.at(i) % 2 == 0) // if even
            { count++; } // increase count
    }

    return count;
}

int Stats::countOdd()        // counts odd elements
{
    int count {0};

    for (long unsigned int i = 0; i < v.size(); i++) // loops through vector
    {
        if (v.at(i) % 2 != 0) // if not even
            { count++; } // increase count
    }

    return count;
}

int Stats::countFib()        // counts integer values within a Fibonacci Sequence ( up to the 50th num )
{
    int count {0}, f1 {0}, f2 {1}, f3 {1};

    while (f1 <= v.at(v.size() - 1)) // counts fibonacci numbers
    {
        if (f1 >= v.at(0))
        count++;
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }

    return count; // returns total
}

float Stats::avgAll()           // takes average of all integers
{
    float avg {0.0};

    for (long unsigned int i = 0; i < v.size(); i++) // loops through vector
        { avg += v.at(i); } // adds value at index

    return (avg / v.size()); // takes average
}

float Stats::avgEven()     // takes average of even integers
{
    int evenNums {0};
    float avg {0.0};

    for (long unsigned int i = 0; i < v.size(); i++) // loops through vector
    {
        if (v.at(i) % 2 == 0) // if even
        {
            evenNums++; // increases count
            avg += v.at(i); // adds value at index
        }
    }

    return (avg / evenNums); // takes average
}

float Stats::avgOdd()     // takes average of odd integers
{
    int oddNums {0};
    float avg {0.0};

    for (long unsigned int i = 0; i < v.size(); i++) // loops through vector
    {
        if (v.at(i) % 2 != 0) // if odd
        {
            oddNums++; // increases count
            avg += v.at(i); // adds value at index
        }
    }

    return (avg / oddNums); // takes average
}

float Stats::avgFib()   // takes average of integers in the Fibonacci Sequence ( up to the 50th num )
{
    int count {0};
    float avg {0.0};

    for (long unsigned int i = 0; i < v.size(); i++)
    {
        avg += v.at(i);
    }
    
    return (avg / v.size()); // takes average
}
