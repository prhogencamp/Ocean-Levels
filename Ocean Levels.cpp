// Ocean Levels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double oceanLevel = 0;
    double risingRate = 1.5;
    int years;
    cout << "In 5 years, the ocean will have gotten " << oceanLevel + (risingRate * 5) << " millimeters higher than the current level!" << endl;
    cout << "In 7 years, the ocean will have gotten " << oceanLevel + (risingRate * 7) << " millimeters higher than the current level!" << endl;
    cout << "In 10 years, the ocean will have gotten " << oceanLevel + (risingRate * 10) << " millimeters higher than the current level!" << endl;
    cout << "Enter how many years into the future you'd like to see:";
    cin >> years;
    cout << "The ocean will have risen " << oceanLevel + (risingRate * years) << " millimeters in " << years << " years!" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
