//concat
const array1 = ['a','b','c' ];
const array2 = ['d','e','f' ];
const array3 = array1.concat(array2);
console.log(array3);

const beasts = ['ant', 'bison', 'camel', 'duck', 'bison'];

console.log(beasts.indexOf('bison'));
// Expected output: 1

// Start from index 2
console.log(beasts.indexOf('bison', 2));
// Expected output: 4

console.log(beasts.indexOf('giraffe'));
// Expected output: -1


const name = ['the','singh','prithwi','chauhan'];
console.log(name.indexOf('the'));// 0 
console.log(name.indexOf('singh'));// 1
console.log(name.indexOf('prithwi'));// 2

// Array.prototype.join()
const elements = ['Fire', 'Air', 'Water'];

console.log(elements.join()); // Expected output: "Fire,Air,Water"
console.log(elements.join('')); // Expected output: "FireAirWater"
console.log(elements.join('-')); // Expected output: "Fire-Air-Water"

const element = ['apple','banana','graps'];
console.log(element.join()); //apple,banana,graps
console.log(element.join('')); //applebananagraps
console.log(element.join('-'));

//1// toString()
const array4 = [1, 2, 'a', '1a'];
console.log(array4.toString());// Expected output: "1,2,a,1a"

const array5 = [1,2,3,4,'prithwi','singh'];
console.log(array5.toString()); //output:1,2,3,4,prithwi,singh




const arr = [];
arr.join = 1; // re-assign `join` with a non-function
console.log(arr.toString()); // [object Array]
console.log(Array.prototype.toString.call({ join: () => 1 })); // 1



console.log(Array.prototype.toString.call({ join: () => 1 }));
// 1; a number
console.log(Array.prototype.toString.call({ join: () => undefined }));
// undefined
console.log(Array.prototype.toString.call({ join: "not function" }));
// "[object Object]"

//2.join()//
const fruits = [ "banana","orange","apple"];
//let newFruitsList = fruits.join("");//bananaorangeapple
//let newFruitsList = fruits.join(" ");//banana orange apple
//let newFruitsList = fruits.join(" and ");//banana and orange and apple
let newFruitsList = fruits.join("+");//banana+orange+apple

//samajhe bro  eska esa scene hai ki jab join() method ka use krte hai to string ke bich me aa kr jud jata hai
console.log(newFruitsList);


//advance join() method rules
const a = ["Wind", "Water", "Fire"];
a.join(); // 'Wind,Water,Fire'
a.join(", "); // 'Wind, Water, Fire'
a.join(" + "); // 'Wind + Water + Fire'
a.join(""); // 'WindWaterFire'


//Calling join() on non-array objects
const arrayLike = {
    length: 3,
    0: 2,
    1: 3,
    2: 4,
  };
  console.log(Array.prototype.join.call(arrayLike));
  // 2,3,4
  console.log(Array.prototype.join.call(arrayLike, "."));
  // 2.3.4
  
  const arraylike = {
    length:10,
    0:7,
    1:5,
    2:1,
    3:8,
    4:9,
    5:0,
    6:9,
    7:9,
    8:7,
    9:6,
  }//object

  console.log(Array.prototype.join.call(arraylike,""));//7518999076


  //keys()   or       Array.prototype.keys() 
const array6 = ['a', 'b', 'c','d', 'e', 'f','g', 'h', 'i'];
const iterator = array6.keys();
console.log(iterator);

// for (const key of iterator) {
//   console.log(key.length);
// }

// Expected output: 03
// Expected output: 1
// Expected output: 2