#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // gravitational constant
    const float g = 9.8;́́́
    
    float h, theta, t, d;
    
    // take input from user
    cout << "Enter the initial height of the ball (in meters): ";
    cin >> h;
    cout << "Enter the angle of the ramp (in degrees): ";
    cin >> theta;
    
    // convert the angle from degrees to radians
    theta = theta * (M_PI / 180);
    
    // calculate the time it takes for the ball to reach the bottom of the ramp
    t = sqrt(2 * h / g);
    
    // calculate the distance the ball travels along the ramp
    d = t * cos(theta);
    
    // simulate the motion of the ball using a for loop
    for (float i = 0; i <= d; i += 0.1) {
        float y = h - i * tan(theta) + 0.5 * g * i * i;
        cout << "Height of the ball at distance " << i << " meters: " << y << " meters" << endl;
    }
    
    return 0;
}
