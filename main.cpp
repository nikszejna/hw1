//main.cpp
#include "stdev.h"

int main(int argc, char const *argv[])
{
	stdev stats;
	stats.readFile(stats.data, argv[1]);
	cout<< "file read successfully! "<< stats.data.size() 
	<< " numbers read" << endl;
    stats.printData(stats.data);
    cout << "Sum: " << stats.sum(stats.data) << endl;

    cout << "mean: " << stats.mean(stats.data) << endl;

    cout << " standard deviation: " << stats.standardDeviation(stats.data) << endl;
	
	
	return 0;
}