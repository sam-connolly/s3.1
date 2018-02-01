#include <mbed.h>

int main() {
    AnalogIn  left(A0);
    AnalogIn right(A1);
    float leftVolt, rightVolt;

    while(1) {
      leftVolt = 3.3*(left.read());
      rightVolt = 3.3*(right.read());
      
        printf(" Left dial %f \n",  leftVolt );
        printf("Right dial %f \n", rightVolt );
        wait( 1.0 );
    }
}
