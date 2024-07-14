//Methods

//concat()
// let newArray = array1.concat(array2, array3, arrayN);

let array1 = [1, 2, 3];
let array2 = [4, 5, 6];
let array3 = [7, 8, 9];
let newArray = array1.concat(array2, array3);
console.log(newArray); // Output: [1, 2, 3, 4, 5, 6, 7, 8, 9]


let mixedArray1 = [1, 'apple', true];
let mixedArray2 = ['orange', 2, false];
let mixedResult = mixedArray1.concat(mixedArray2);
console.log(mixedResult);
//console.log(mixedResult.length); OR
let mixedResultLength = mixedResult.length;
console.log(mixedResultLength);

let originalArray = [20,30,40]
let newArr = originalArray.concat(50,60,70)
console.log(newArr);









//findIndex()
//The findIndex() method of Array instances returns the index of the first element in an array that satisfies the provided testing function. If no elements satisfy the testing function, -1 is returned.
//array.findIndex(function(currentValue, index, arr), thisValue)

let arrayOfFindIndex = [56,57,58,59,60]
const ageOf = (element)=>element>=50;
const ageOfBig = (element)=>element<50;
let newData = arrayOfFindIndex.findIndex(ageOf);
let newDataTwo = arrayOfFindIndex.findIndex(ageOfBig);

console.log(newData);
console.log(newDataTwo);

let findMethod = arrayOfFindIndex.find(ageOf)
console.log(findMethod);











//indexOf() =>string.indexOf(searchvalue, startFrom)
//The indexOf() method returns the position of the first occurrence of a value in a string.
//The indexOf() method returns -1 if the value is not found.
//The indexOf() method is case sensitive.
let arrayIndexOf = ["spiderman", "marvel", "superman"];
console.log(arrayIndexOf.indexOf("marvel"));

/*
// Initialize an empty array to store indices of the target element
const indices  = [];

// Sample array containing elements
const array = ["a", "b", "a", "c","a","d"];

// Target element to find indices for
const element = "a";

// Use indexOf to find the first occurrence of the target element in the array
let idx = array.indexOf(element);

// Log the index of the first occurrence
console.log(idx); //0

// Continue finding the target element in the array and storing indices until no more occurrences are found
while(idx !== -1){
    // Push the current index to the 'indices' array
    indices.push(idx);

    // Use indexOf again starting from the next index to find the next occurrence of the target element
    idx = array.indexOf(element, idx + 1);
}

// Log the array containing all the indices of the target element
console.log(indices);

*/
const indices  = [];
const array = ["a", "a", "a", "c","a","d"];
const element = "a";

let idx = array.indexOf(element);
console.log(idx);
while(idx!==-1){
    indices.push(idx);
    idx = array.indexOf(element ,idx + 1)
}
console.log(indices);

const num = [1,2,3,4,5,6,7,8,9]
// let one = 5;
// let idxes = num.indexOf(1);
num.indexOf(1)
console.log(num.indexOf(1));

//example
function updateVegetablesCollection(veggies, veggie) {
    if (veggies.indexOf(veggie) === -1) {
      veggies.push(veggie);
      console.log(`New veggies collection is: ${veggies}`);
    } else {
      console.log(`${veggie} already exists in the veggies collection.`);
    }
  }
  const veggies = ["potato", "tomato", "chillies", "green-pepper"];
  
  updateVegetablesCollection(veggies, "spinach");
  // New veggies collection is: potato,tomato,chillies,green-pepper,spinach
  updateVegetablesCollection(veggies, "spinach");
  // spinach already exists in the veggies collection.
  







//pop()
//The pop() method removes (pops) the last element of an array.
//The pop() method changes the original array.
//The pop() method returns the removed element.
// const myFish = ["angel", "clown", "mandarin", "sturgeon"];

const animal = ["dog", "tiger", "lion", "cow", "dear"]
const poped = animal.pop();
console.log(animal);
console.log(poped);












//push()
//The push() method adds new items to the end of an array.
//The push() method changes the length of the array.
//The push() method returns the new length.
const animals = ["pigs", "goats", "sheep"];
const count = animals.push("cows")
console.log(count)//4
console.log(animals) //["pigs", "goats", "sheep" ,"cows"];
//
const girls = ["a","b","c","d"];
const boys =  ["f", "g", "h", "i"];
const push = girls.push(...boys);
console.log(push);
console.log(girls);












//shift()
//The shift() method removes the first item of an array.
//The shift() method changes the original array.
//The shift() method returns the shifted element.
const fruits = ["Banana", "Orange", "Apple", "Mango"];
const counts = fruits.shift();
console.log(counts)
console.log(fruits)

//HOW TO REMOVE ALL ELEMENT FROM ARRAY
const names = ["ram","shyam","vishal","prince"];
while(typeof (i = names.shift()) !== "undefined"){
  console.log(i);
}
console.log(names)

//Using for loop
let myArray = [1,2,3,4,5,6];
console.log("length : " + myArray.length)
for(let i = myArray.length; i>=0;i--){
  myArray.shift();
}console.log("after shifting : " + myArray);











//unshift()
//The unshift() method <Adds new elements to the beginning of an array>.
//The unshift() method overwrites the original array.
const fruts = ["Banana", "Orange", "Apple", "Mango"];
fruts.unshift("Lemon","Pineapple");
console.log(fruts);//["Lemon","Pineapple","Banana", "Orange", "Apple", "Mango"]

let arr = [4,5,6]
arr.unshift(1,2,3)
console.log(arr);
 


arr = [4,5,6]
console.log(arr);
let a = arr.unshift(1);
console.log(a);//length-4
let b = arr.unshift(2);
console.log(b);//length-5
let c = arr.unshift(3);
console.log(c)//length-6
let d= arr.unshift(4);
console.log(d)//length-7
console.log(arr);



const arr1 = [1, 2];
arr1.unshift(0)//[0,1,2]
arr1.unshift(-2,-1)//[-2 -1 0 1 2]
arr1.unshift([-4,-3])//[[-4,-3]-2 -1 0 1 2]












//join()
//The join() method returns an array as a string.
//The join() method does not change the original array.
//Any separator can be specified. The default is comma (,).
const fruits1 = ["Banana", "Orange", "Apple", "Mango"];
let text = fruits1.join(" join ");
console.log(text);//Banana join Orange join Apple join Mango
console.log(fruits1)//does not any changes in array //











//slice()
//The slice() method returns selected elements in an array, as a new array.
//The slice() method selects from a given start, up to a (not inclusive) given end.
//The slice() method does not change the original array.
const fruits2 = ["Banana", "Orange", "Lemon", "Apple", "Mango"];
const defaults = fruits2.slice(2)
const citrus = fruits2.slice(1, 3);
const myBest = fruits.slice(-3, -1);
console.log("myBest: " , citrus)
console.log("defaults: " , defaults)










//splice()
//The splice() method adds and/or removes array elements.
//The splice() method overwrites the original array.

//array.splice(index, howmanydalete, item1, ....., itemX)
//index->	/Required/ The position to add/remove items.
//howmanydelete ->Optional {Number of items to be removed}.
//item1,..., itemX ->Optional {New elements(s) to be added}

//for at position 2, add 2 element 
const fruits3 = ["Banana", "Orange", "Apple", "Mango"];
fruits3.splice(2,0,"lemon", "kiwi"); 
//2-> array me position -2 se new element hota hai
// 0 -> zero element remove hoga
// "lemon", "kiwi" -> add this element after position 2 or index-1
console.log(fruits3);


//for removing element
const fruits4 = ["Banana","Papaya", "Orange", "Apple", "Mango", "Kiwi"];
fruits4.splice(2, 3);
//2-fruits4 array ke position 2 ke baad se element remove hona start hoga.
//3-after 3 element hoga
console.log(fruits4);


const fruits5 = ["grapes","Papaya","guava", "Orange", "Apple", "Mango", "watermelon"];
fruits5.splice(3,2,"xxx","yyy")
//3-fruits4 array ke position 3 ke baad se element remove hona hoga aur 
//2- 2 element remove and  and "xxx", "yyy" add ho jayega
//"xxx", "yyy" -> add this element after position 3 or index-2
console.log(fruits5);















//forEach()
//The forEach() method calls a function for each element in an array.
//The forEach() method is not executed for empty elements.
//forEach(callbackFn)
//forEach(callbackFn, thisArg)
//
 const array5 =  [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
 const forEachCallBack =(value)=>{return value*2;}
array5.forEach((element)=>{
  console.log(forEachCallBack(element))
});











//reverse
const array6 =["Prithwi","singh","chauhan"]
const alpha = ["abcdefghijklmnopqrxtuvwxyz"]
const target = [];
const target3 = [];

const reverseAndAppend =(str)=>{
let reversingStr = str.split('').reverse().join('');
target.push(reversingStr);
target3.push(reversingStr);
}

array6.forEach(reverseAndAppend);
alpha.forEach(reverseAndAppend);
console.log('Reversed Strings:', target);
console.log('Reversed Strings:', target3);


//
const staffsDetails = [
  { name: "Jam Josh", age: 44, salary: 4000, currency: "USD" },
  { name: "Justina Kap", age: 34, salary: 3000, currency: "USD" },
  { name: "Chris Colt", age: 37, salary: 3700, currency: "USD" },
  { name: "Jane Doe", age: 24, salary: 4200, currency: "USD" }
];
//How to use the currentElement Argument
staffsDetails.forEach((staffDetail)=>{
  let sentence = `I am ${staffDetail.name} a staff of royal suites.`;
  console.log(sentence);
});

staffsDetails.forEach(({name},index) =>{
  let sentence = `I am ${name} a staff of royal suites.`;
  console.log(sentence);
})

//How to use the index Argument
staffsDetails.forEach((staffDetails, index)=>{
let sentence = `index ${index} : I am ${staffDetails.name} a staff of royal suites `;
console.log(sentence);
}
)
 









//filter()
// filter(callbackFn, thisArg)
//The filter() method creates a new array filled with elements that pass a test provided by a function.
//The filter() method does not execute the function for empty elements.
//The filter() method does not change the original array.
const ages = [32, 33, 16, 40];
const result = ages.filter(checkAdult);
console.log("adult age :" + result);

function checkAdult(age) {
  return age >= 18;
}

//
const words = ['six','spray', 'elite', 'exuberant', 'destruction', 'present']
const res = words.filter((word)=>word.length>6)
console.log(res);


//find all prime num in an array
const arr2 =  [-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
function isPrime(num){
  for(let i = 2; num>i;i++){
    if(num%i===0){
      return false;
    }
  }
return num > 1;
}
console.log(arr2.filter(isPrime));

//Searching in array by filter()
const fruit = ["apple", "banana", "grapes", "mango", "orange"];

/**
 * Filter array items based on search criteria (query)
 */
const filterItems=(arr, query)=> {
  return arr.filter((el) => el.toLowerCase().includes(query.toLowerCase()));
}

console.log(filterItems(fruit, "ap")); // ['apple', 'grapes']
console.log(filterItems(fruit, "an")); // ['banana', 'mango', 'orange']









//sort
const name2 = ["Banana", "Orange", "Apple", "Mango"]

//Sorting an Array
name2.sort();
console.log(name2)

//Reversing an Array
name2.reverse();
console.log(name2)

const points = [40, 100, 1, 5, 25, 10];
points.sort(function(a, b){return a - b});
console.log(points)

points.sort(function(a, b){return b - a});
console.log(points)

//Sorting an Array in Random Order
points.sort(function(){
  return 0.5 - Math.random()
})
console.log("->" + points)

//Find the Lowest (or Highest) Array Value
const points2 = [40, 100, 1, 5, 25, 10];
points2.sort((a,b)=>{return b-a});
// now points[0] contains the highest value
console.log(points2)












//every() => array.every(function(currentValue, index, arr), thisValue)

//useCase=> Form Validation: 
//          Authorization:

//The every() method executes a function for each array element.
//The every() method returns true if the function returns true for all elements.
//The every() method returns false if the function returns false for one element.
//The every() method does not execute the function for empty elements.
//The every() method does not change the original array

const age = [32, 33, 16, 40];
const reslt = age.every(checkAge)
function checkAge(ages){
  return ages>18;
}
console.log(reslt);

const survey = [
  { name: "Steve", answer: "Yes"},
  { name: "Jessica", answer: "Yes"},
  { name: "Peter", answer: "Yes"},
  { name: "Elaine", answer: "No"}
]

const isSameAnswer =(el, index, arr)=>{
if(index===0){
  return true;
}
else{
  return(el.answer  === arr[index-1].answer)
}
}
let result2 = survey.every(isSameAnswer);
console.log(result2)






//reverse()=>array.reverse()

//The reverse() method reverses the order of the elements in an array.

//The reverse() method overwrites the original array.
const fruits6 = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits6.reverse());

const strr = "abcd"
const r = strr.split('').reverse('').join('')
console.log(r)










//reduce()=>array.reduce(function(total, currentValue, currentIndex, arr), initialValue)

//The reduce() method executes a reducer function for array element.

//The reduce() method returns a single value: the function's accumulated result.

//The reduce() method does not execute the function for empty array elements.

//The reduce() method does not change the original array.
const num1 = [120,30,175,50,25]
function myFunc(total,num){
  return total-num
}
console.log(num1.reduce(myFunc));

const num2 = [15.5, 2.3, 1.1, 4.7];
function getSum(total, num){
  return total + Math.round(num)
}
console.log(num2.reduce(getSum,0));











//some()=>array.some(function(value, index, arr), this)

//The some() method checks if any array elements pass a test (provided as a callback function).

//The some() method executes the callback function once for each array element.

//The some() method returns true (and stops) if the function returns true for one of the array elements.

//The some() method returns false if the function returns false for all of the array elements.

//The some() method does not execute the function for empty array elements.

//The some() method does not change the original array.
const ages1 = [3, 10, 18, 20];

ages1.some(checkAdult);
function checkAdult(age) {
  return age > 18;
}







//split()
//The split() method splits a string into an array of substrings.

//The split() method returns the new array.

//The split() method does not change the original string.

//If (" ") is used as separator, the string is split between words.
const myName = 'PRITHWI'
console.log(myName.split(''))

let text1  = "How are you doing today";
const myarr = text1.split("")
console.log(myarr)











//fill()
//The fill() method fills specified elements in an array with a value.
//The fill() method overwrites the original array.
const fruits7 = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits7.fill("Kiwi"));
const fruits8 = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits8.fill("kiwi",2,4));






//includes()
//The include() method returns true if a string contains a {given string}.
let text2 = "Hello world, welcome to the universe.";
let result4 = text2.includes("world");
console.log(result4)














































































































































//Array.at()
//Array.concat()
//Array.copyWithin()
//Array.entries()
//Array.every()
//Array.fill()
//Array.filter()
//Array.find()
//Array.findIndex()
//Array.findLast()
//Array.findLastIndex()
//Array.flat()
//Array.flatMap()
//Array.forEach()
//Array.from()
//Array.fromAsync()
//Array.includes()
//Array.indexOf()
//Array.isArray()
//Array.join()
//Array.keys()
//Array.lastIndexOf()
//Array.map()
//Array.of()
//Array.pop()
//Array.push()
//Array.reduce()
//Array.reduceRight()
//Array.reverse()
//Array.shift()
//Array.slice()
//Array.some()
//Array.sort()
//Array.splice()
//Array.toLocaleString()
//Array.toReversed()
//Array.toSorted()
//Array.toSpliced()
//Array.toString()
//Array.unshift()
//Array.values()
//Array.with()