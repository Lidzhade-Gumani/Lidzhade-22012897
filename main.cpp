#include <iostream>

#include <cmath>

using namespace std;

double calculateTreeHeight(double h, int d_feet, double d_inches, double angle_degrees) {

double tree_height_feet = h + d_total_feet * tan(angle_radians);

        double angle_radians = angle_degrees * M_PI / 180.0;

   double d_total_feet = d_feet + d_inches / 12.0;

          return tree_height_feet;

}
int main() {

    double h_inches, d_inches, angle_degrees;

    int d_feet;

  cout << "Enter the distance to the tree (inches): ";

    cin >> d_inches;

    cout << "Enter the height of your eye (in inches): ";

    cin >> h_inches;

cout << "Enter the angle (in degrees): ";

    cin >> angle_degrees;

    cout << "Enter the distance to the tree (feet): ";

    cin >> d_feet;

         double tree_height_feet = calculateTreeHeight(h_inches / 12.0, d_feet, d_inches, angle_degrees);

    cout << "The height of the tree is approximately " << tree_height_feet << " feet." << endl;


    return 0;



}
