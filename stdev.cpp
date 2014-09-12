//stdev.cpp
//author - Nikolas leo szejna
//cs253 assignment 1


#include "stdev.h"

/*stdev::stdev(string fileName){
	readFile(data, fileName);
}*/

stdev::stdev(){
 
}

stdev::~stdev(){

}

void stdev::readFile(vector<double> &data, const char* fileName)
{
	ifstream dataFile;
	dataFile.open(fileName);
	//reads numeric data into the vector while
	// the end of the file has not been reached
	if(dataFile){
		double dataPoint;
		while(!dataFile.eof)
		{
			                   dataFile >> dataPoint;
				cout << "reading..." << endl;
				if(dataFile.fail())
				{
					cout << dataFile.get();
					
				}
				data.push_back(dataPoint);
				cout << "sizeof vector: "<< data.size()  <<endl;
			}
			
			

		}
		
		
		
		
	}
	dataFile.close();
}

void stdev::printData(vector<double> &dataVector)
{
	for(unsigned int i= 0; i < dataVector.size(); i++)
	{
		cout << dataVector[i] << ' ';

	}
	cout << endl;
}


double stdev::sum(vector<double> &dataVector)
{
	double sum = 0.0;
	for(unsigned int i = 0; i < dataVector.size(); i++)
	{
		sum += dataVector[i];	
	}
	return sum;
}

double stdev::mean(vector<double> &dataVector)
{
	double mean = sum(dataVector);
	mean /= dataVector.size();
	return mean;
}

double stdev::standardDeviation(vector<double> &dataVector)
{
	double dev = 0.0;

	vector<double> v(data);
	double startMean = mean(v);
	for (unsigned int i = 0; i < v.size(); i++)
	{

		v[i] = pow(v[i]-startMean,2.0);
		printData(v);
	}
	printData(v);
	dev = sqrt(sum(v)) / (v.size() -1.0);
	return dev;
}