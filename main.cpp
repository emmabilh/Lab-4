//main.cpp

#include "TemperatureChart.hpp"

int main() {
    TemperatureChart chart(-30, 120, 3);
    chart.readTemperaturesFromFile("C:\\full\\path\\to\\temperatures.txt"); //reads full file the full path
    chart.generateChart();

    return 0;
}
