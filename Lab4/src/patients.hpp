/*
* patient.hpp
*
* Created on: Nov 24, 2013
* Author: vmanorat
*/

#ifndef PATIENT_HPP_
#define PATIENT_HPP_
#include <string>
#include <iostream>
using namespace std;

class patient{
        string fName;
        string lName;
        int age;
        string SIN;
        string *annotation;
public:
        patient;
        void display;
        void results;
        ~patient;
};


#endif /* PATIENT_HPP_ */
