package creational_patterns;

interface Vehicle{
    String getType();
}

class Car implements Vehicle {
    @Override
    String getType(){
        return "Car";
    }
}

class Bike implements Vehicle {
    @Override
    String getType(){
        return "Bike";
    }
}

class Truck implements Vehicle {
    @Override
    String getType(){
        return "Truck";
    }
}

abstract class VehicleFactory {
    abstract Vehicle createFactory();
}

class CarFactory implements VehicleFactory {
    @Override
    Vehicle createFactory(){
        return new Car();
    }
}

class BikeFactory implements VehicleFactory {
    @Override
    Vehicle createFactory(){
        return new Bike();
    }
}

class TruckFactory(){
    @Override
    Vehicle createFactory(){
        return new Truck();
    }
}

public class FactoryClassMethod{
    public static void main(String[] args){
        VehicleFactory carFactory = new CarFactory();
        Vehicle car = carFactory.createVehicle();
        System.out.println("Vehicle type: " + car.getType()); 

        VehicleFactory bikeFactory = new BikeFactory();
        Vehicle bike = bikeFactory.createVehicle();
        System.out.println("Vehicle type: " + bike.getType()); 

        // Truck factory
        VehicleFactory truckFactory = new TruckFactory();
        Vehicle truck = truckFactory.createVehicle();
        System.out.println("Vehicle type: " + truck.getType()); 
    }
}