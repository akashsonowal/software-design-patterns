using System;

public interface IVehicle {
    string getType();
}

public class Car : IVehicle {
    public string getType() {
        return "Car";
    }
}

public class Bike : IVehicle {
    public string getType() {
        return "Bike";
    }
}

public class Truck : IVehicle {
    public string getType() {
        return "Truck";
    }
}

public abstract class VehicleFactory {
    public abstract IVehicle createVehicle();
}

public class CarFactory : VehicleFactory {
    public override IVehicle createVehicle(){
        return new Car();
    }
}

public class BikeFactory : VehicleFactory {
    public override IVehicle createVehicle(){
        return new Bike();
    }
}

public class TruckFactory : VehicleFactory {
    public override IVehicle createVehicle(){
        return new Truck();
    }
}

public class FactoryMethodExample {
    public static void Main(string[] args) {
        // Car factory
        VehicleFactory carFactory = new CarFactory();
        IVehicle car = carFactory.CreateVehicle();
        Console.WriteLine("Vehicle type: " + car.GetType()); // Output: Vehicle type: Car

        // Bike factory
        VehicleFactory bikeFactory = new BikeFactory();
        IVehicle bike = bikeFactory.CreateVehicle();
        Console.WriteLine("Vehicle type: " + bike.GetType()); // Output: Vehicle type: Bike

        // Truck factory
        VehicleFactory truckFactory = new TruckFactory();
        IVehicle truck = truckFactory.CreateVehicle();
        Console.WriteLine("Vehicle type: " + truck.GetType()); // Output: Vehicle type: Truck
    }
}
