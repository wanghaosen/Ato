#include "../apps.h"
#include "imu_cali.h"

using namespace std;

int main(){
    MPU9520_REG i =  LP_ACCEL_ODR;
    cout << "imu_cali " << i << endl;
    return 0;
}
