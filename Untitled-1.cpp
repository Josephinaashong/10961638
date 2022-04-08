#include <iostream>
using namespace std;
int main()
{
    float height, base, area;

    cout<< "Type the value of height\n";
    cin>> height;
    cout<< "Type the value of base\n";
    cin>>base;

    //area=1/2*height

    area=1.0/ 2.0*(base* height);

    cout<< "Area of Triangle is\t" "<<area<< " \n";
    system("pause");

}