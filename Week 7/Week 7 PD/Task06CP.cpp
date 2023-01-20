#include <iostream>

using namespace std;

void calculatePatients (int period);

main ()
{
    int period;
    cout << "Enter period: ";
    cin >> period;
    calculatePatients (period);
}

void calculatePatients (int period)
{
    int patients, doctors = 7, treatedPatients = 0, untreatedPatients = 0, totalTreatedPatients = 0, totalUntreatedPatients = 0;
    for (int i = 1; i <= period; i++)
    {
        cout << endl << "Enter patients for Day " << i << ": ";
        cin >> patients;
        if (i % 3 == 0)
        {
            if (totalUntreatedPatients > totalTreatedPatients)
            {
                doctors = doctors + 1;
            }
        }
        if (doctors <= patients)
        {
        untreatedPatients = patients - doctors;
        treatedPatients = doctors;
        }
        else if (doctors > patients)
        {
            untreatedPatients = 0;
            treatedPatients = patients;
        }
        totalTreatedPatients = totalTreatedPatients + treatedPatients;
        totalUntreatedPatients = totalUntreatedPatients + untreatedPatients;
        cout << "Treated Patients: " << treatedPatients << endl;
        cout << "Untreated Patients: " << untreatedPatients << endl;
        cout << "Total Treated Patients: " << totalTreatedPatients << endl;
        cout << "Total Untreated Patients: " << totalUntreatedPatients << endl;
    }
    cout << "Treated patients: " << totalTreatedPatients << endl;
    cout << "Untreated patients: " << totalUntreatedPatients << endl << endl;
}