#include <iostream>
#include <cmath>

using namespace std;

double pyramidVolume (int length, int width, int height);

main ()
{
    int length, width, height;
    string outputUnit;
    double volume;
    double volumeWithUnit;
    cout << "Enter length in meters: ";
    cin >> length;
    cout << "Enter width in meters: ";
    cin >> width;
    cout << "Enter height in meters: ";
    cin >> height;
    cout << "Enter output unit: ";
    cin >> outputUnit;
    volume = pyramidVolume (length, width, height);
    if (outputUnit == "millimeters")
    {
        volumeWithUnit = volume * pow (1000, 3);
    }
    if (outputUnit == "centimeters")
    {
        volumeWithUnit = volume * pow (100, 3);
    }
    if (outputUnit == "meters")
    {
        volumeWithUnit = volume;
    }
    if (outputUnit == "kilometers")
    {
        volumeWithUnit = volume/pow (1000, 3);
    }
    cout << "Volume is: " << volumeWithUnit << " cubic " << outputUnit;

}

double pyramidVolume (int length, int width, int height)
{
    double volume;
    volume = (length * width * height)/3;
    return volume;
}