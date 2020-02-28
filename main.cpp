#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    const int guest = 120;
    
    int i;
    int numOfSuites;
    double suitesOccp;

    for(int floor = 10; floor <= 16; floor++)
    {
        if(floor == 13)
            continue;

        do{
            cout << "Enter the number of occupied suites (0-20) on each of the following floors." << endl;
            cout << "Floor " << floor << ":";
            cin >> numOfSuites;

            if(numOfSuites < 0 || numOfSuites > 20){
                cout << "Error!!!!!!!" << endl;
            }

        }while(numOfSuites < 0 || numOfSuites > 20);

        i += numOfSuites;
    }
    
    suitesOccp = (static_cast<double>(i) / guest) * 100;

    cout << "The hotel has a total of " << guest << ". " << i << " are currently occupied. This is an occupancy rate of " << suitesOccp << "%." << endl;

    return 0;
}
