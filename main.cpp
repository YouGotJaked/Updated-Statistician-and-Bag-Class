/* 
 * File:   main.cpp
 * Author: jakeday
 *
 * Created on April 17, 2017, 4:02 PM
 */

#include <cstdlib>
#include <iostream>
#include "statistician2.h"
#include "bag1x.h"

using namespace std;
using namespace coen70_lab2;

/*
 * 
 */
int main() {
  
    statistician s1;
    
    s1.next_number(46);
    s1.next_number(72.1);
    s1.next_number(1);
    s1.next_number(-2);
    
    cout << "s1 length: " << s1.length() << endl;
    cout << "s1 sum: " << s1.sum() << endl;
    cout << "s1 mean: " << s1.mean() << endl;
    cout << "s1 smallest:  " << s1.smallest() << endl;
    cout << "s1 largest: " << s1.largest() << endl;
    cout << "s1 last: " << s1.last() << endl;
    
    statistician s2;
    
    s2.next_number(12);
    s2.next_number(90);
    s2.next_number(-9);
    s2.next_number(-2.4);
    
    cout << "s2 length: " << s2.length() << endl;
    cout << "s2 sum: " << s2.sum() << endl;
    cout << "s2 mean: " << s2.mean() << endl;
    cout << "s2 smallest:  " << s2.smallest() << endl;
    cout << "s2 largest: " << s2.largest() << endl;
    cout << "s2 last: " << s2.last() << endl;
            
    statistician s3,s4;
    
    s3 = s1 + s2;
    
    cout << "s3 length: " << s3.length() << endl;
    cout << "s3 sum: " << s3.sum() << endl;
    cout << "s3 mean: " << s3.mean() << endl;
    cout << "s3 smallest:  " << s3.smallest() << endl;
    cout << "s3 largest: " << s3.largest() << endl;
    cout << "s3 last: " << s3.last() << endl;
    
    /*
    s3.erase();
    
    cout << "erasing..." << endl;
    cout << "s3 length: " << s3.length() << endl;
    cout << "s3 sum: " << s3.sum() << endl;
    cout << "s3 mean: " << s3.mean() << endl;
    cout << "s3 smallest:  " << s3.smallest() << endl;
    cout << "s3 largest: " << s3.largest() << endl;
    cout << "s3 last: " << s3.last() << endl;
    */
            
    bag b1;
    b1.insert(2);
    b1.insert(10);
    b1.insert(-7);
    b1.insert(3);
    b1.insert(2);
    b1.insert(12);
    
    bag b2;
    b2.insert(2);
    b2.insert(132);
    b2.insert(-2);
    
    bag b3;
    b3.insert(2);
    b3.insert(-9);
    b3 = b1 - b2;
    
    cout << b3.count(2) << endl;
    cout << b3.size() << endl;
}

