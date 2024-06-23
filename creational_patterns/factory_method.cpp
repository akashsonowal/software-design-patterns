#include <iostream>
#include <string>

using namespace std;

class Vehicle{
public:
    virtual string getType() = 0;
};

class Car: public Vehicle {
public:
    string getType() override{
        return "Car";
    }
};

class Bike: public Vehicle {
public:
    string getType() override{
        return "Bike";
    }
};

class VehicleFactory{
public:
    virtual Vehicle* createVehicle() = 0;
};

class CarFactory: public VehicleFactory{
public:
    Vehicle* createVehicle() override{
        return new Car();
    }
};

class BikeFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override{
        return new Bike();
    }
};

class TruckFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override{
        return new Truck();
    }
};

int main(){
    VehicleFactory* carFactory = new CarFactory();
    Vehicle* car = carFactory->createVehicle();
    cout << "Vehicle type: " << car->getType() << endl; 


    VehicleFactory* bikeFactory = new BikeFactory();
    Vehicle* bike = bikeFactory->createVehicle();
    cout << "Vehicle type: " << bike->getType() << endl; 

}