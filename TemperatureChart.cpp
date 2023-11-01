//
//  TemperatureChart.cpp


#include "TemperatureChart.hpp"
#include <iostream>
#include <fstream>

TemperatureChart::TemperatureChart(int minTemp, int maxTemp, int tempStep)
    : minTemperature(minTemp), maxTemperature(maxTemp), temperatureStep(tempStep) {
}

void TemperatureChart::readTemperaturesFromFile(const std::string& fileName) {
    std::ifstream inputFile(fileName);

    if (inputFile.is_open()) {
        int temperature;
        while (inputFile >> temperature) {
            temperatures.push_back(temperature);
        }
        inputFile.close();
    } else {
        std::cerr << "Unable to open the file: " << fileName << std::endl;
    }
}

void TemperatureChart::generateChart() {
    for (int temp = maxTemperature; temp >= minTemperature; temp -= temperatureStep) {
        std::cout << temp;

        for (int temperature : temperatures) {
            if (temperature >= temp && temperature < temp + temperatureStep) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << "  ";
    for (int i = 0; i < temperatures.size(); i++) {
        std::cout << "|";
    }
    std::cout << std::endl;

    std::cout << "  ";
    for (int i = 0; i < temperatures.size(); i++) {
        std::cout << i;
    }
    std::cout << std::endl;
}
