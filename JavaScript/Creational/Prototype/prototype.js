/*
 Using Object.create as was recommended by ES5 standard
 Allows you to extend an existing object
*/

const vehiclePrototype = {
    name: "vehiclePrototype",
    create: function(values){
      var instance = Object.create(this);
      Object.keys(values).forEach(function(key) {
        instance[key] = values[key];
      });
      return instance;
    },
  };

// car inherits the fields of vehiclePrototype
var car = vehiclePrototype.create({
  vehicleType: "car",
  year: 2018
})


console.log(car)
console.log(car.__proto__ === vehiclePrototype);