//Object.assign().......................................

//Object.assign(targetWhereStore, source1, source2, /* …, */ sourceN)

//Object.assign()=> copies all enumerable own properties from one or more source objects to a target object. It returns the modified target object.

//ek ya ek se aadhik object source ko copy krna ya karke kisi dusre object me store krna Object.assign() hota hai
// Creating source objects

let source1 = { name: 'John' };
let source2 = { age: 25 };
let source3 = { job: 'Developer' };
// Creating a target object
let target = {};

// Using Object.assign() to copy properties from sources to the target
Object.assign(target, source1, source2, source3);

console.log(target);
// Output: { name: 'John', age: 25, job: 'Developer' }


let userName = {name: "Prithwi"}
let userAge = {age: "24" }
let userJob = {job:"developer"}
let profile = Object.assign(userName,userAge,userJob)
console.log(profile);


//Object.create()............................................................................
//Object.create(proto)
//Object.create(proto, propertiesObject)


// Define a prototype object
let animal = {
  makeSound: function(){ console.log("Generic animal sound");}
};

// Create a new object using Object.create() with 'animal' as the prototype
let cat = Object.create(animal);

// Add properties to the 'cat' object
cat.name = "Whiskers";
cat.sound = "Meow";

// Override the makeSound method for the 'cat' object
cat.makeSound = function() {
console.log(this.sound);
};

// Now, 'cat' inherits from 'animal' and has its own properties
console.log(cat.name);       // Output: Whiskers
cat.makeSound();             // Output: Meow

// 'animal' object is not affected by changes to 'cat'
animal.makeSound();          // Output: Generic animal sound


//example-2
let vehicle = {
type: "Generic Vehicle",
start: function() {
  console.log("Starting the " + this.type);
}
};

let car = Object.create(vehicle, {
type: { value: "Car" },
wheels: { value: 4 }
});

car.start(); // Output: Starting the Car
console.log(car.wheels); // Output: 4

//example-3
let mammal = {
hasHair: true,
breathe: function() {
  console.log("Breathing...");
}
};

let dog = Object.create(mammal);
dog.bark = function() {
console.log("Woof! Woof!");
};

let goldenRetriever = Object.create(dog);
goldenRetriever.fetch = function() {
console.log("Fetching the ball!");
};

console.log(goldenRetriever.hasHair); // Output: true
goldenRetriever.breathe(); // Output: Breathing...
goldenRetriever.bark(); // Output: Woof! Woof!
goldenRetriever.fetch(); // Output: Fetching the ball!

//example-4
let greeter = {
greet: function() {
  console.log("Hello, " + this.name + "!");
}
};

let person1 = Object.create(greeter);
person1.name = "Alice";

let person2 = Object.create(greeter);
person2.name = "Bob";

person1.greet(); // Output: Hello, Alice!
person2.greet(); // Output: Hello, Bob!

//example-5
let callHello  = {
greets: function(){
    console.log("hello, " + this.name +" baby!")
}
};

let girl1 =Object.create(callHello);
girl1.name = "goldi"
girl1.greets();




//Object.create()
//1.Prototypal Inheritance:
// Create a prototype object
const personPrototype = {
  greeting(){
    return `helo, my name is ${this.name}`
  }
}
// Create an object based on the prototype
const john = Object.create(personPrototype);

//add a property to the object
john.name = 'John';

//Acess a method from the prototype
console.log(john.greeting());//Helo, my name is John

//2.Using null to Create Objects Without Prototypes:
const nullObject  = Object.create(null);
nullObject.property = 'value';
console.log(nullObject.property)

//3.Creating Objects with Specific Prototypes:
// Create a parent object
const parent = {x:1};

// Create an object with parent as its prototype
const child = Object.create(parent);

//access the property
console.log(child.x) 


//4.Using Object.create() with Property Descriptors:
// Create an object with a property and its descriptor
const obj = Object.create({},{
  property: {
    value:'Hello',writable:true,
    enumerable:true,configurable:true
  }
});
//Acess the property
console.log(obj.property);

//null 
const myOBJ = Object.create(null);
myOBJ.firstName = 'John'
myOBJ.lastNmae = 'Doe'
myOBJ.age = 30;

console.log(myOBJ.firstName);
console.log(myOBJ.lastNmae);
console.log(myOBJ.age);
console.log(myOBJ);




//Object.keys()
// Create an object
const car1 = {
  make: 'Toyota',
  model: 'Camry',
  year: 2022,
  color: 'blue'
};
console.log(Object.keys(car1))//make,model,year,color
console.log(Object.values(car1))//toyota,camry,2022,blue

Object.keys(car1).forEach(key =>{
  console.log(`${key}: ${car1[key]}`)
});


//Object.entries()=>Object.entries(obj)

const list = {
1:'p',
2:'r',
3:'i',
4:'t',
5:'h'
}
console.log(Object.entries(list[1]));

const obj2 = { name: "Adam", age: 20, location: "Nepal" };

// returns properties in key-value format
console.log(Object.entries(obj2)); 

// Output:  [ [ 'name', 'Adam' ], [ 'age', 20 ], [ 'location', 'Nepal' ] ]

const obj3 = { name: "John", age: 27, location: "Nepal" };

// iterate through key-value pairs of object
for (const [key, value] of Object.entries(obj3)) {
  console.log(`${key}: ${value}`);
}

//Object.freeze()

//Object.seal()


























































/*
function emp(i,n,s){
  this.id = i;
  this.name = n;
  this.salary = s;
}
const e = new emp(103,"im",12000000)
console.log(e);

console.log(emp.id);
console.log(emp['name']);
emp['salary'] = 13000;
emp.id = 13;

delete emp.id;

console.log(emp)*/