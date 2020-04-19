/* 
Singleton pattern can be implemented by creating a class with a method that creates a new instance of the class if one doesn't exist
There must be exactly one instance of a class, and it must be accessible to clients from a well-known access point.
*/

var obj = (function () {
    var objInstance; //private variable
    function create() {
        // Private methods and variables
        var object = new Object("There is only one instance");
        return object;
    }

    return {
        getInstance: function(){
            if(!objInstance){
                objInstance = create();
            }
            return objInstance;
        }
    }
})();

var instance1 = obj.getInstance();
var instance2 = obj.getInstance();
console.log(instance1);
console.log(instance2)
console.log("instance1 and instance2 are same? " + (instance1 === instance2)); 