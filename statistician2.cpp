/* 
 * File:   statistician2.cpp
 * Author: jakeday
 *
 * Created on April 17, 2017, 4:05 PM
 */

#include <cassert>
#include "statistician2.h"

using namespace std;

namespace coen70_lab2 {
    //Default constructor for statistician
    statistician::statistician() {
        s_length = 0;
        s_sum = 0;
    }

    //Adds a number to the sequence
    void statistician::next_number(double num) {
        s_length++;

        s_last = num;

        s_sum += num;

        s_mean = s_sum / s_length;

        if (num < s_smallest) {
            s_smallest = num;
        }

        if (num > s_largest) {
            s_largest = num;
        }
    }

    //Returns the length of the sequence
    int statistician::length() {
        assert(s_length >= 0); //verify the length isn't negative
        return s_length;
    }

    //Returns the last number added to the sequence
    double statistician::last() {
        assert(s_length > 0); //verify the sequence isn't empty
        return s_last;
    }

    //Returns the sum of the numbers in the sequence
    double statistician::sum() {
        assert(s_length >= 0); //verify the length isn't negative
        return s_sum;
    }

    //Returns the mean of the numbers in the sequence
    double statistician::mean() {
        assert(s_length > 0); //verify the sequence isn't empty
        return s_mean;
    }

    //Returns the smallest number in the sequence
    double statistician::smallest() {
        assert(s_length > 0); //verify the sequence isn't empty
        return s_smallest;
    }

    //Returns the largest number in the sequence
    double statistician::largest() {
        assert(s_length > 0); //verify the sequence isn't empty
        return s_largest;
    }

    //Erases the sequence
    void statistician::erase() {
        *this = statistician();
    }

    /* Member function for overloaded "=" operator that sets all of the current 
     * statistician's parameters to that of s1
     */
    statistician statistician::operator=(const statistician& s2) {
        //check if s2 is empty for garbage values
        if (s2.s_length > 0) {
            s_length = s2.s_length;
            s_last = s2.s_last;
            s_sum = s2.s_sum;
            s_mean = s2.s_mean;
            s_smallest = s2.s_smallest;
            s_largest = s2.s_largest;
        }

        return *this;
    }

    /* Member function for overloaded "+" operator that returns a new statistician 
     * that behaves as if it had all the numbers of s1 followed by that of s2
     */
    statistician statistician::operator+(const statistician& s2) {
        statistician s3;
        
        //check if s2 is empty for garbage values
        if (s2.s_length == 0) {
            return *this;
        }
        
        s3.s_length = s_length + s2.s_length;
        s3.s_last = s_last;
        s3.s_sum = s_sum + s2.s_sum;
        s3.s_mean = s_sum / s3.s_length;

        if (s_smallest < s2.s_smallest) {
            s3.s_smallest = s_smallest;
        } else {
            s3.s_smallest = s2.s_smallest;
        }

        if (s_largest > s2.s_largest) {
            s3.s_largest = s_largest;
        } else {
            s3.s_largest = s2.s_largest;
        }

        return s3;
    }
}
