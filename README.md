# Design Patterns Overview 

## Pattern Classes

|                 | Creational Pattern                                           | Structural Pattern                                           | Behavioral Pattern                                           |
| --------------- | ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| **Description** | Provides object creation mechanisms, which increase flexibility and reuse of existing code. | Explain how to assemble objects and classes into larger structures while keeping these structures flexible and efficient. | Concerned with algorithms and the assignment of responsibilities between objects. |

## Creational Patterns

| Name                                                         | Description                                                  | Visualization                                                |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| [Factory Method](https://refactoring.guru/design-patterns/factory-method) | Provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. | ![Factory Method](https://refactoring.guru/images/patterns/cards/factory-method-mini.png) |
| [Abstract Factory](https://refactoring.guru/design-patterns/abstract-factory) | Lets you produce families of related objects without specifying their concrete classes. | ![](https://refactoring.guru/images/patterns/cards/abstract-factory-mini.png) |
| [Builder](https://refactoring.guru/design-patterns/builder)  | Lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code. | ![](https://refactoring.guru/images/patterns/cards/builder-mini.png) |
| [Singleton](https://refactoring.guru/design-patterns/singleton) | Lets you ensure that a class has only one instance while providing a global access point to this instance. | ![](https://refactoring.guru/images/patterns/cards/singleton-mini.png) |
| [Prototype](https://refactoring.guru/design-patterns/prototype) | Lets you copy existing objects without making your code dependent on their classes. | ![](https://refactoring.guru/images/patterns/cards/prototype-mini.png) |

## Structural Patterns

| Name                                                         | Description                                                  | Visualization                                                |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| [Adapter](https://refactoring.guru/design-patterns/adapter)  | Allows objects with incompatible interfaces to collaborate.  | ![](https://refactoring.guru/images/patterns/cards/adapter-mini.png) |
| [Bridge](https://refactoring.guru/design-patterns/bridge)    | Lets you split a large class or a set of closely related classes into two separate hierarchies - abstraction and implementation - which can be developed independently of each other. | ![](https://refactoring.guru/images/patterns/cards/bridge-mini.png) |
| [Composite](https://refactoring.guru/design-patterns/composite) | Lets you compose objects into tree structures and then work with these structures as if they were individual objects. | ![](https://refactoring.guru/images/patterns/cards/composite-mini.png) |
| [Decorator](https://refactoring.guru/design-patterns/decorator) | Lets you attach new behaviors to objects by placing these objects inside special wrapper objects that contain the behaviors. | ![](https://refactoring.guru/images/patterns/cards/decorator-mini.png) |
| [Facade](https://refactoring.guru/design-patterns/facade)    | Provides a simplified interface to a library, a framework, or any other complex set of classes. | ![](https://refactoring.guru/images/patterns/cards/facade-mini.png) |
| [Flyweight](https://refactoring.guru/design-patterns/flyweight) | Lets you fit more objects into the available amount of RAM by sharing common parts of state between multiple objects instead of keeping all of the data in each object. | ![](https://refactoring.guru/images/patterns/cards/flyweight-mini.png) |
| [Proxy](https://refactoring.guru/design-patterns/proxy)      | Lets you provide a substitute or placeholder for another object. A proxy controls access to the original object, allowing you to perform something either before or after the request gets through to the original object. | ![](https://refactoring.guru/images/patterns/cards/proxy-mini.png) |

## Behavioral Patterns

| Name                                                         | Description                                                  | Visualization                                                |
| ------------------------------------------------------------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| [Chain of Responsibility](https://refactoring.guru/design-patterns/chain-of-responsibility) | Lets you pass requests along a chain of handlers. Upon receiving a request, each handler decides either to process the request or to pass it to the next handler in the chain. | ![](https://refactoring.guru/images/patterns/cards/chain-of-responsibility-mini.png) |
| [Command](https://refactoring.guru/design-patterns/command)  | Turns a request into a standalone object that contains all info about the request. This transformation lets you pass requests as method arguments, delay or queue a request's execution, and support undoable operations. | ![](https://refactoring.guru/images/patterns/cards/command-mini.png) |
| [Iterator](https://refactoring.guru/design-patterns/iterator) | Lets you traverse elements of a collection without exposing its underlying representation (list, stack, tree, etc.). | ![](https://refactoring.guru/images/patterns/cards/iterator-mini.png) |
| [Mediator](https://refactoring.guru/design-patterns/mediator) | Lets you reduce chaotic dependencies between objects. The pattern restricts direct communication between the objects and forces them to collaborate only via a mediator object. | ![](https://refactoring.guru/images/patterns/cards/mediator-mini.png) |
| [Memento](https://refactoring.guru/design-patterns/memento)  | Lets you save and restore previous state of an object without revealing the details of its implementation. | ![](https://refactoring.guru/images/patterns/cards/memento-mini.png) |
| [Observer](https://refactoring.guru/design-patterns/observer) | Lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they're observing. | ![](https://refactoring.guru/images/patterns/cards/observer-mini.png) |
| [State](https://refactoring.guru/design-patterns/state)      | Lets an object alter its behavior when its internal state changes. It appears as if the object changed its class. | ![](https://refactoring.guru/images/patterns/cards/state-mini.png) |
| [Strategy](https://refactoring.guru/design-patterns/strategy) | Lets you define a family of algorithms, put each of them into a separate class, and make their objects interchangeable. | ![](https://refactoring.guru/images/patterns/cards/strategy-mini.png) |
| [Template Method](https://refactoring.guru/design-patterns/template-method) | Defines a skeleton of an algorithm in the superclass but lets subclasses override specific steps of the algorithm without changing its structure. | ![](https://refactoring.guru/images/patterns/cards/template-method-mini.png) |
| [Visitor](https://refactoring.guru/design-patterns/visitor)  | Lets you separate algorithms from the objects on which they operate. | ![](https://refactoring.guru/images/patterns/cards/visitor-mini.png) |
