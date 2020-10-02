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
    float speed;

public:
    Car(int, string);
//Accessor Prototypes----------
    int getYear();
    float getSpeed();
    string getMake();
    void addSpeed();
    void brake();
};
// constructor---------------
Car::Car(int x, string y){
    this->make = y;
    this->year = x;
    this->speed= 0;
}
//accessor methods----------
int Car::getYear(){
    return this->year;
}

string Car::getMake(){
    return this->make;
}

float Car::getSpeed(){
    return this->speed;
}

void Car::addSpeed(){
     this->speed += 5;
}

void Car::brake(){
    this->speed -= 5;
}

int main() {
    
    Car ford(2018, "F150");
    cout << ford.getYear() << endl;
    cout << ford.getMake() << endl;
    cout << ford.getSpeed() << endl;
    for(int i = 0; i < 5; i++){
        ford.addSpeed();
        cout << "Speed: " << ford.getSpeed() << endl;
        cout << endl;
    }
    for (int j = 0 ; j<5 ; j++){
        ford.brake();
        cout << "Brake: " << ford.getSpeed() << endl;
    }
}
