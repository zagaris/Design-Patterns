/*
The Factory method pattern defines an interface for creating objects
but let the sublaclasses decide which class to instantiate

We use Factory method when we don't know beforehand the exact types of the objects 
*/

 class vehicleFactory {
    constructor() {
      this.createVehicle = function(type) {
        var vehicle;
        if (type === 'car') vehicle = new car();
        else if (type === 'bike') vehicle = new bike();
        vehicle.creation = function() {
          return `A new ${this.vehicleType} has created.`;
        };
        return vehicle;
      };
    }
  }
  
  class car {
    constructor() {
      this.vehicleType = 'car';
      this.carIsRunning = function() {
        return 'car is running';
      };
    }
  }
  
  class bike {
    constructor() {
      this.vehicleType = 'bike';
      this.bikeIsRunning = function() {
        return 'bike is running';
      };
    }
  }
  

  const factory = new vehicleFactory();
  
  const newCar = factory.createVehicle('car');
  const newBike = factory.createVehicle('bike');
  
  console.log(newCar.creation());
  console.log(newCar.carIsRunning());

  console.log(newBike.creation());
  console.log(newBike.bikeIsRunning());