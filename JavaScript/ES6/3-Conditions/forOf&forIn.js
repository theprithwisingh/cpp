//1.
//The "for...in" loop in JavaScript is used to iterate over the properties of an object.

//for-in used to iterate over the enumerable properties of an object. it allows you to access the keys of the object,rather the values.

obj = ["a","b","c","d"]
//new way for iteration
for (const op in obj) {
        console.log(obj[op]);
    }
//traditionl way
 for (let index = 0; index < obj.length; index++) {
    const element = obj[index];
    console.log(element)
}


//Example 1: Iterating over Object Properties
const person = {
    name: "prithwi",
    age: 30, 
    job: 'Developer'
}
for(let key in person){
    console.log(`${key}: ${person[key]}`)
    console.log(`${key}`)
}


//Example 2: Checking for Object's Own Properties
const car = {
    make:'toyota',
    modal:'fortunar',
    year:2000
};
for(let key in car){
    if(car.hasOwnProperty(key)){
        //hasOwnProperty() Property, ->object ki property ki जांच krta hai ki yah available hai ya nhi
        console.log(`${key}: ${car[key]}`);
    }
}


//Example 3: Iterating over Arrays
const color = ["red", "green","blue"]
for (const key in color) {
        const element = color[key];
        console.log(element);     
}


//Example 4: Avoiding Prototype Chain Properties...
const laptop = {
  brand: 'Dell',
  model: 'XPS 13',
  year: 2022
};

for (let key in laptop) {
  if (laptop.hasOwnProperty(key)) {
    console.log(`${key}: ${laptop[key]}`);
  }
}


//Example 5: Iterating over Map
//Advanced: Iterating over a Map using for...in
const myMap = new Map();
myMap.set('name', 'Alice');
myMap.set('age', 25);
myMap.set('city', 'Wonderland');

for (let key in myMap) {
  console.log(`${key}: ${myMap.get(key)}`);
}
console.log(myMap);

//for in loop ->
console.log("            ")


var r = ['a','b','c','d','e']
for(let i=0; i<=r.length-1;i++){
  console.log(r[i])
}

console.log("             ")

for(let keys in r){
  console.log(r[keys])
}

const newObj ={
  name:"prithwi",
  id:9,
  sde:"level-1"
}

for (const values in newObj) {
  console.log(newObj[values])
}

//2.
//for...of loop
//for of se obejct ka iteration nhi ho skta hai

//looping of string
const str = "PRITHWI";
for (const itr of str) {
console.log(itr);
}
/*
P
R
I
T
H
W
I
*/

//for...of with Sets
//You can iterate through Set elements using the for...of loo
const newSet  = new Set([1,"prithwi",true,[1,"p"]]);
for (const itr of newSet) {
  console.log(itr);
}

//for...of with map

//define map
let map  = new Map();

//inserting elements
map.set('name','jack');
map.set('age','27');

//looping through map
for (const [key] of map) {
  console.log(key)
}//name
//age

for (const [key,value] of map) {
  console.log(key+'--'+value)
}
//name--jack
//age--27

//in generator function
function* generatorFunc(){
  yield 10;
  yield 20;
  yield 30;
}
const obj1 = generatorFunc();

//iteration through generator
for (const value of obj1) {
  console.log(value);
}

const arr1  = ['a','b','c','d','e']
for (const i of arr1) {
  console.log(i)
}


const str2 = "prithwi";
const targt = []
for (const char of str2) {
  console.log(targt.push(char))
}
console.log(targt)
const rvs = targt.reverse().join('');
console.log(rvs)
