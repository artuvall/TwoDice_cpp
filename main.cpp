#include "iostream"
#include "cstdlib"
#include "ctime"

//Rolling Dice
int main(){
    srand(time(nullptr));
    int minValue = 1;
    int maxValue = 6;
    int dice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int dice2 = (rand() % (maxValue - minValue + 1)) + minValue;

    std::cout << "First Dice: " << dice1 << std::endl;
    std::cout << "Second Dice: " << dice2;
    return 0;
}