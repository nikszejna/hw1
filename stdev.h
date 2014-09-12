//stdev.h
//descriptions: contains statistics functions including 
// sum, mean, and standard deviation of a data set read from a file
//author - Nikolas leo szejna
//cs 253 assignment 1

#ifndef STDEV_H
#define STDEV_H


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

#include <cmath>
using std::sqrt;
using std::pow;

#include <string>
using std::string;


//const may need to be implemented in the cpp

class stdev
{
public:
	stdev();
    //constuctor that takes the filename of the data file
	//stdev(string fileName);
	//vector to store an unknown # of doubles from an input file
	vector<double> data;
	//default destructor
	~stdev();
	//reads a file of numbers and whitespace, entering each into a 
	//vector of doubles 
	//must check for invalid input such as characters or strings
	void readFile(vector<double> &data, const char* fileName);
	//prints out the data in the data vector, given that
	// a file has been read
	void printData(vector<double> &dataVector) const;
	//calculates the sum of a set of data given a vector of doubles
    double sum(vector<double> &dataVector) const ;
	//calculates the mean of a set of data, given a vector of doubles
	double mean(vector<double> &dataVector) const;
	//calculates the standard deviation of a data set
	//given the vector of doubles
	double standardDeviation(vector<double> &dataVector) const;
	//outputs the calculated mean and stdev to the console
	//can also return ERROR or UNDEFINED for either 
	void outputStats();

	
};

#endif