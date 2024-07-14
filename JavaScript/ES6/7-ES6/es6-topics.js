//JavaScript Spread Operator
const a = ["a","b","c","d","e"]
const b = ["a","b","c","d","e"]
console.log(...a ,...b)

const arr1 = [1, 2, 3];
const arr2 = [4, 5, 6];
const combinedArray = [...arr1, ...arr2];
console.log(combinedArray); // Output: [1, 2, 3, 4, 5, 6]

const originalArray = [1, 2, 3];
const copyArray = [...originalArray];
console.log(copyArray); // Output: [1, 2, 3]
//JavaScript rest Operator


//JavaScript Set
//set is not allow to duplicate element in array
// Creating a new Set
const mySet = new Set();
// Adding values to the Set
mySet.add(1);
mySet.add(2);
mySet.add(3);

// Adding a duplicate value (won't be added)
mySet.add(2);

console.log(mySet); // Output: Set { 1, 2, 3 }

// Checking if a value exists in the Set
console.log(mySet.has(2)); // Output: true

// Deleting a value from the Set
mySet.delete(2);
console.log(mySet); // Output: Set { 1, 3 }

// Iterating over the Set
mySet.forEach((value) => {
  console.log(value);
});
// Output:
// 1
// 3


//JavaScript Inheritance
/*
Imagine you have a "blueprint" for creating objects called a "class." When you create a new object using this blueprint, it automatically gets all the properties and methods defined in the blueprint.

Imagine you have a special book that tells you how to make different kinds of animals. Each animal has its own unique features and abilities. In JavaScript, inheritance is like making new animals using the instructions from this special book.

सोचिए कि आपके पास एक खास किताब है जो आपको बताती है कि आप कैसे विभिन्न प्रकार के जानवर बना सकते हैं। हर जानवर में अपनी विशेषताएँ और क्षमताएँ होती हैं। जावास्क्रिप्ट में, इनहेरिटेंस उस किताब की तरह है जिसके निर्देशों का उपयोग करके नए जानवर बनाने का तरीका है।

जब आप नया जानवर बनाते हैं, तो वह खुद उस किताब में दी गई सभी विशेषताओं और कौशलों को आत्मसमर्पित कर लेता है। तो अगर किताब में यह लिखा हो कि सभी जानवर अपना नाम बता सकते हैं, तो जब आप नया जानवर बनाते हैं, तो वह भी अपना नाम बता सकता है बिना आपको उस निर्देश को फिर से लिखने की जरूरत के।

example-2
मान लीजिए आपके पास एक जादुई डिब्बा है जो विभिन्न प्रकार के खिलौने बना सकता है। हर खिलौने में अपनी विशेषताएँ होती हैं। जावास्क्रिप्ट में, यह जादुई डिब्बा एक विशेष रेसिपी बुक की तरह होता है जो आपको विभिन्न प्रकार के खिलौनों (ऑब्जेक्ट्स) कैसे बनाने की जानकारी देता है।

जब आप इस रेसिपी बुक का उपयोग करके नये खिलौने बनाते हैं, तो यह रेसिपी बुक की जानकारी का अनुसरण करना होता है और एक नया खिलौना (ऑब्जेक्ट) बनता है। यह नया खिलौना स्वतः ही उन सभी चीजों को प्राप्त करता है जो रेसिपी बुक में वर्णित हैं, जैसे रंग, आकार, और क्रियाएँ।

इसलिए, जावास्क्रिप्ट इनहेरिटेंस उस रेसिपी बुक का उपयोग करके नए खिलौनों को बनाने के तरीके को समझाता है। नए खिलौने सभी मजेदार चीजें रेसिपी बुक से अनुरूप प्राप्त करते हैं बिना आपको सभी चीजें फिर से लिखनी पड़ती हैं। इससे समान विशेषताओं वाले बहुत से खिलौने बनाना आसान हो जाता है!
*/
// Parent class
class Animal {
  constructor(name) {
    this.name = name;
  }

  sayName() {
    console.log(`My name is ${this.name}`);
  }
}

// Child class extending Animal
class Dog extends Animal {
  constructor(name, breed) {
    super(name); // Call the superclass constructor
    this.breed = breed;
  }

  bark() {
    console.log('Woof!');
  }
}

// Usage
let myDog = new Dog('Buddy', 'Golden Retriever');
myDog.sayName(); // Output: My name is Buddy
myDog.bark();    // Output: Woof!



//Exmaple-2
// एक आम वाहन (Vehicle) क्लास बनाएं
class Vehicle {
  constructor(name, type) {
    this.name = name;
    this.type = type;
  }

  // एक वाहन का विवरण दिखाने वाला मेथड
  describe() {
    return `This is a ${this.type} vehicle named ${this.name}.`;
  }
}

// एक कार (Car) क्लास बनाएं जो Vehicle को इनहेरिट करता है
class Car extends Vehicle {
  constructor(name, brand) {
    super(name, 'car'); // Vehicle की constructor को कॉल करें
    this.brand = brand;
  }

  // कार के ब्रांड का नाम दिखाने वाला मेथड
  showBrand() {
    return `This car is from ${this.brand}.`;
  }
}

// नयी कार बनाएं
let myCar = new Car('Civic', 'Honda');

// वाहन का विवरण दिखाएं
console.log(myCar.describe()); // Output: This is a car vehicle named Civic.

// कार का ब्रांड दिखाएं
console.log(myCar.showBrand()); // Output: This car is from Honda.
