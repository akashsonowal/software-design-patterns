package creational_patterns;

// Vehicle interface
interface Vehicle {
    String getType();
}

// Car class implementing Vehicle interface
class Car implements Vehicle {
    @Override
    public String getType() {
        return "Car";
    }
}

// Bike class implementing Vehicle interface
class Bike implements Vehicle {
    @Override
    public String getType() {
        return "Bike";
    }
}

// Truck class implementing Vehicle interface
class Truck implements Vehicle {
    @Override
    public String getType() {
        return "Truck";
    }
}

// Abstract VehicleFactory class
abstract class VehicleFactory {
    public abstract Vehicle createVehicle();
}

// CarFactory class extending VehicleFactory
class CarFactory extends VehicleFactory {
    @Override
    public Vehicle createVehicle() {
        return new Car();
    }
}

// BikeFactory class extending VehicleFactory
class BikeFactory extends VehicleFactory {
    @Override
    public Vehicle createVehicle() {
        return new Bike();
    }
}

// TruckFactory class extending VehicleFactory
class TruckFactory extends VehicleFactory {
    @Override
    public Vehicle createVehicle() {
        return new Truck();
    }
}

// Main class to demonstrate the Factory Method pattern
public class FactoryMethodExample {
    public static void main(String[] args) {
        // Car factory
        VehicleFactory carFactory = new CarFactory();
        Vehicle car = carFactory.createVehicle();
        System.out.println("Vehicle type: " + car.getType()); // Output: Vehicle type: Car

        // Bike factory
        VehicleFactory bikeFactory = new BikeFactory();
        Vehicle bike = bikeFactory.createVehicle();
        System.out.println("Vehicle type: " + bike.getType()); // Output: Vehicle type: Bike

        // Truck factory
        VehicleFactory truckFactory = new TruckFactory();
        Vehicle truck = truckFactory.createVehicle();
        System.out.println("Vehicle type: " + truck.getType()); // Output: Vehicle type: Truck
    }
}