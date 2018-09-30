//
//  main.cpp
//  Ch7Q4
//
//  Created by Ali Elalaoui on 9/30/18.
//  Copyright © 2018 Ali Elalaoui. All rights reserved.
//

#include <iostream>
using namespace std;

class Car{
private:
    int year;
    string make;
    int speed;

public:
    Car(int, string);
};

Car::Car(int x, string y){
    this->make = y;
    this->year = x;
    this->speed= 0;
}

int main() {
    
    Car ford(2018, "F150");
}
