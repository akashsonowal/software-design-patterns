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