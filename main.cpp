#include <iostream>
const int TRAIN_CARS = 10;
#define FILLING_WAGONS(b,c) for(int i = 0; i < (b); ++i) \
{std::cout << "Enter the number of passengers in car number " << i+1 << " :"; std::cin >> c[i]; \
while (c[i]<0) {std::cout << "Number of passengers cannot be less then 0. Enter again: ";std::cin >> c[i]; }}

bool overfilling ( int num) {if (num >20){return true;}  else {return false;}}

bool empty_train_car (int num) {if (num == 0) {return true;} else {return false;}}

#define CHECK_OVERFILLING(b,c) for (int i = 0; i < (b); ++i) \
{if (overfilling (c[i])) {std::cout << "Train car number " << i+1 << " is overfilled!"<<std::endl;}}

#define CHECK_EMPTY(b,c) for (int i = 0; i < (b); ++i) \
{if (empty_train_car (c[i])) {std::cout << "Train car number " << i+1 << " is empty!"<<std::endl;}}

#define NUMBER_OF_PASSENGERS(b,c) int count = 0 ; for (int i = 0; i < (b); ++i) \
{count += c[i];} std::cout << "number of passengers on the train = " << count << ". \n";

int main() {
    int train [TRAIN_CARS];
    // заполнение вагонов
    FILLING_WAGONS (TRAIN_CARS,train);
    // проверка переполнения вагонов
    CHECK_OVERFILLING (TRAIN_CARS,train);
    //проверка пустых вагонов
    CHECK_EMPTY (TRAIN_CARS,train);
    //вывод общего количества пассажиров
    NUMBER_OF_PASSENGERS (TRAIN_CARS,train);
}
