#include <iostream.h>
using namespace std;
int main()
{
    int milage,distance,petrol;
    cout<<"Enter the Mileage of vehicle (in kmph): ";
    cin>>milage;
    cout<<"Total Distance (in km): ";
    cin>>distance;
    petrol = distance / milage;
    cout<<"Petrol needed is (in litres):"<<petrol<<endl;
    return 0;

}