/* 
 * File:   statistician2.h
 * Author: jakeday
 *
 * Created on April 17, 2017, 4:03 PM
 */

#ifndef STATISTICIAN2_H
#define	STATISTICIAN2_H


namespace coen70_lab2 {
    class statistician {

    public:
        //default constructor
        statistician();
    
        void next_number(double num);
        int length();
        double last();
        double sum();
        double mean();
        double smallest();
        double largest();
        void erase();
    
        statistician operator=(const statistician& s2);
        statistician operator+(const statistician& s2);
    
    private:
        int s_length;
        double s_last;
        double s_sum;
        double s_mean;
        double s_smallest;
        double s_largest;
    };
}

#endif	/* STATISTICIAN2_H */

