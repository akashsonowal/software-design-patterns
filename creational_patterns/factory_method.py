from abc import ABC, abstractmethod

class Vehicle(ABC):
    @abstractmethod
    def getType(self) -> str:
        pass

class Car(Vehicle):
    def getType(self) -> str:
        return "Car"

class Bike(Vehicle):
    def getType(self) -> str:
        return "Bike"

class Truck(Vehicle):
    def getType(self) -> str:
        return "Truck"

class VehicleFactory(ABC):
    @abstractmethod
    def createVehicle(self) -> Vehicle:
        pass

class CarFactory(VehicleFactory):
    def createVehicle(self):
        return Car()

class BikeFactory(VehicleFactory):
    def createVehicle(self):
        return Bike()

class TruckFactory(VehicleFactory):
    def createVehicle(self):
        return Truck()

def main():
    # Car factory
    car_factory = CarFactory()
    car = car_factory.createVehicle()
    print("Vehicle type:", car.getType())  # Output: Vehicle type: Car

    # Bike factory
    bike_factory = BikeFactory()
    bike = bike_factory.createVehicle()
    print("Vehicle type:", bike.getType())  # Output: Vehicle type: Bike

    # Truck factory
    truck_factory = TruckFactory()
    truck = truck_factory.createVehicle()
    print("Vehicle type:", truck.getType())  # Output: Vehicle type: Truck

# Run the main function
if __name__ == "__main__":
    main()