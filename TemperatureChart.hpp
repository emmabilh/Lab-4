//Emma Bilhimer
//Lab 4 Temperature Output
// Mr. Busch
// FA2023
/* Description: Design and write a C++ program that inputs a series of hourly temperature
from a file, and outputs a bar chart (using stars) of the temperatures. The temperature
should be printed to the left of the corresponding bar, and there should be a heading
that gives the scale of the chart. The range of temperatures should be from -30 to 120.
Because it is hard to display 150 characters on the screen, you should have each star
represent a range of 3 degrees. That way, the bars will be at most 50 characters wide.
Use meaningful variable names, proper indentation, and appropriate comments.
Thoroughly test the program using your own data sets. Make sure to vet the values from
the input file. Use good programming practices including, classes, comments, and
pre/post conditions.
*/

#ifndef TemperatureChart_hpp
#define TemperatureChart_hpp

#include <stdio.h>
#include <string>
#include <vector>
#endif /* TemperatureChart_hpp */



class TemperatureChart {
public:
    TemperatureChart(int minTemp, int maxTemp, int tempStep);

    void readTemperaturesFromFile(const std::string& fileName);

    void generateChart();

private:
    int minTemperature;
    int maxTemperature;
    int temperatureStep;
    std::vector<int> temperatures;
};


