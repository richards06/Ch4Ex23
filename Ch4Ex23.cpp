/*



*/

#include <iostream>
#include <cmath>
using namespace std;
int choice;


int main()
{
    while (true)
    {
        cout << "1. Compute the area of a circle";
        cout << "2. Compute the area of a rectangle";
        cout << "3. Compute the area of a triangle";
        cout << "4. Exit";
        cout << "Please enter the number of your choice: ";
        cin >> choice;
        switch (choice)
            case 1:
                cout << "What is the radius of the circle?";
                cin >> radius;
                area = pow(radius, 2) * M_PI;

            case 2:
                double width;
                double height;
                area = (width * length) * .5;

            case 3:
                double height;
                double length;
                area =

            case 4: break;


            default: cout << "Please make a valid choice";


    }

}


