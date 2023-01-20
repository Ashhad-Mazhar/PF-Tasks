#include <iostream>

using namespace std;

void printOutput (int count);

main ()
{
    int count;
    cout << "Enter count of cargo: ";
    cin >> count;
    printOutput (count);
}

void printOutput (int count)
{
    float averagePrice, miniBusCargo = 0, truckCargo = 0, trainCargo = 0, totalCargo = 0, totalPrice = 0;
    float miniBusPercent = 0, truckPercent = 0, trainPercent = 0;
    int tonnage;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter cargo tonnage: ";
        cin >> tonnage;
        if (tonnage <= 3)
        {
            miniBusCargo = miniBusCargo + tonnage;
        }
        else if (tonnage > 3 && tonnage <= 11)
        {
            truckCargo = truckCargo + tonnage;
        }
        else if (tonnage > 11)
        {
            trainCargo = trainCargo + tonnage;
        }
    }
    totalCargo = miniBusCargo + truckCargo + trainCargo;
    totalPrice = (miniBusCargo * 200) + (truckCargo * 175) + (trainCargo * 120);
    averagePrice = totalPrice/totalCargo;
    miniBusPercent = (miniBusCargo/totalCargo) * 100;
    truckPercent = (truckCargo / totalCargo) * 100;
    trainPercent = (trainCargo / totalCargo) * 100;
    cout << "The average price per ton of the cargo is: " << averagePrice << endl;
    cout << "The percentage of cargo by minibus is: " << miniBusPercent << "%" << endl;
    cout << "The percentage of cargo by truck is: " << truckPercent << "%" << endl;
    cout << "The percentage of cargo by train is: " << trainPercent << "%" << endl;
}