#include <iostream>
using namespace std;
inline float mile_to_km(float miles)
{
    return 1.6093 * miles;
}
int main()
{
    float miles;
    cout << "Enter length in mile: ";
    cin >> miles;
    cout << endl<< "Equivalent length in km : " << mile_to_km(miles);
    return 0;
}
