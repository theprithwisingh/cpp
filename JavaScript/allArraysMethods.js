// shift()- Removes the first element of an array, and returns that element

//The unshift()- this method add new item beginning of the array.

//push()-	Adds new elements to the end of an array, and returns the new length

//pop()-	Removes the last element of an array, and returns that element

// join()-	Joins all elements of an array into a string

// concat()- method concatenates (joins) two or more arrays.

// splice()- method adds and/or removes array elements.
/*splice(index,deleteCount,items)
index      - from this index removing element
deleteCount - From the given index, the element equal to thgiven deleteCount is deleted
items- it Will replace these given items with deleted items*/





console.log("hi");
//1.  Array.prototype.toString()
// Convert an array to a string
const fruits = ["Banana", "Orange", "Apple", "Mango"];
let text = fruits.toString();
console.log(text);//Banana,Orange,Apple,Mango


//Following the behavior of join(), toString() treats empty slots the same as undefined and produces an extra separator.
const num = [1,3,4,,5,6];
const changeNum = num.toString();
console.log(changeNum);//1,3,4,,5,6


// Array.prototype.join()
//The join() method creates and returns a new string by concatenating all of the elements in an array,separated by commas or a specified separator string.
const elements = ["fire", "air", "water"];
const joinElement = elements.join();//fire,air,water
console.log(joinElement);//fire,air,water


const elementOne = ["fire", "air", "water"];
const joinElementOne = elementOne.join("+");
console.log(joinElementOne);//fire+air+water


const elementTwo = ["fire", "air", "water"];
const joinElementTwo = elementTwo.join("");
console.log(joinElementTwo);//fireairwater



// Array.prototype.pop()
//The pop() method removes the last element from an array and returns that element. This method changes the length of the array.
const plants = ["broccli","flower","kela","tomato"]
const popPlants = plants.pop();
console.log(popPlants);//tomato
console.log(plants);//['broccli', 'flower', 'kela']

plants.pop();
console.log(plants);// ['broccli', 'flower']


plants.pop();
console.log(plants);//['broccli']




// Array.prototype.push()

//The push() method adds new items to the end of an array.

//The push() method changes the length of the array.

//The push() method returns the new length.

//The push() method adds the specified elements to the end of an array and returns the new length of the array.

const animals = ['pigs','jan','sheep'];
const NewAnimalsList = animals.push("dog","dhfb","yugfyiew","hfi");
console.log(animals);





const BJ = ["modi", "amit", "sitaraman", "raj", "ashwini", "jayshankar"];
const IC = ["rahul", "priyanka", "indira", "nehru", "rajiv", "sonia"];

const al = [];

// Push elements from BJP array
for (let i = 0; i < BJ.length; i++) {
  al.push(BJ[i]);
}

// Push elements from INC array
for (let i = 0; i < IC.length; i++) {
  al.push(IC[i]);
}

console.log(al);


const BJP = ["modi", "amit", "sitaraman", "raj", "ashwini", "jayshankar"];
const INC = ["rahul", "priyanka", "indira", "nehru", "rajiv", "sonia"];

const all = [];

// Push elements from BJP array
BJP.forEach((element) => {
  all.push(element);
});

// Push elements from INC array
INC.forEach((element) => {
  all.push(element);
});

console.log(all);


const numbers = [1,2,3,4,5,6];
numbers.forEach(function(number,index,array){
  console.log(`Number ${number} at index ${index} in ${array}`);
});


// JavaScript Shift: array ka pahla element gayab hoi jata hai
//The shift() method removes the first item of an array.

//The shift() method changes the original array.

//The shift() method returns the shifted element.

//Shift (remove) the first element of the array:
//the unshift() method adds new elements to the beginning of an array.
let top_salespeople = ['Mark', 'Lucy', 'Graham', 'Carol', 'Ann'];
top_salespeople.shift();

console.log(top_salespeople);
//document.write(top_salespeople);//Lucy,Graham,Carol,Ann

const array1 = [1,2,3];
array1.shift();

console.log(array1);//2,

//@@@// The removed element from the array; undefined if the array is empty.


const myFish = ["angel", "clown", "mandarin", "surgeon"];
console.log("myFish before:", myFish);
// myFish before: ['angel', 'clown', 'mandarin', 'surgeon']

const shifted = myFish.shift();
console.log("myfish after:",myFish)


console.log("Removed this element:", shifted);//show thw removed element of array myFish
//angle


// console.log("Removed this element:", shifted);
const names = ["andrew","tyr","pal","maria","gayatri"];

while(typeof(i =  names.shift()) !== "undefined"){
  console.log(i);
}

console.log(names);//

//JavaScript Array unshift()
//The unshift() method adds new elements to the beginning of an array.

const fruitss = ["Banana", "Orange", "Apple", "Mango"];
fruitss.unshift("Lemon","ughbub","uhfu","hfhuh","ihfuoi");
console.log(fruitss);//
console.log(fruitss.unshift());//9

const array01 = [1, 2, 3];
console.log(array01.unshift(4, 5,2,3,4,5,6,78,98));
console.log(array01);//


let arr = [4, 5, 6];

arr.unshift(1, 2, 3);
console.log(arr);
// [1, 2, 3, 4, 5, 6]

let arrr = [4,5,6];
arrr.unshift(1);
arrr.unshift(2);
arrr.unshift(3);
console.log(arrr);//[3, 2, 1, 4, 5, 6]


const ar =  [1,2];
ar.unshift(0);
console.log(ar);//[0,1,2]

ar.unshift(-2,-1)
console.log(ar);

ar.unshift([2,3],['prithwi'])
console.log(ar);


// const pops = ["a", "b", "c", "d"];
// const index = pops.indexOf("c");

// if (index == 2) {
//   pops.splice(index,1);
// }

// console.log(pops);



//The concat() method concatenates (joins) two or more arrays.The concat() method returns a new array, containing the joined arrays.The concat() method does not change the existing arrays.

//Join three arrays
const arr1 = ["Cecilie", "Lone"];
const arr2 = ["Emil", "Tobias", "Linus"];
const children1 = arr1.concat(arr2);
console.log(children1);

//Join three arrays
const arr3 = ["Cecilie", "Lone"];
const arr4 = ["Emil", "Tobias", "Linus"];
const arr5 = ["xxx"];
const children2 = arr3.concat(arr4, arr5);
console.log(children2);

const letters = ["a", "b", "c"];
const alphaNumeric = letters.concat(1, [2, 3]);
console.log(alphaNumeric);
// results in ['a', 'b', 'c', 1, 2, 3]


const num1 = [[1]];
const num2 = [2,[3]];
const AllNum = num1.concat(num2);
console.log(AllNum);//[[1], 2, [3]]

//modify the first element of num1
num1[0].push(4);
console.log(AllNum);
// [[1, 4], 2, [3]]



// sort()
//Sorts the elements of an array
let number1 = [0, 1 , 2, 3, 10, 20, 30 ];
number1.sort();
console.log(number1);//[0,1,10,2,20,3,30]


const months =  ['march','jan','feb','dec',];
months.sort();
console.log(months);//['dec', 'feb', 'jan', 'march']


const arry1 = [1, 30, 4, 21, 100000];
arry1.sort();
console.log(arry1); //[1, 100000, 21, 30, 4]


// splice()
//array.splice(index, howMany, item1, ....., itemX)

/*splice(start)
splice(start, deleteCount)
splice(start, deleteCount, item0)
splice(start, deleteCount, item0, item1)
splice(start, deleteCount, item0, item1,itemN)*/

//index - kaunse index se element hatana shuru krna hai .
//givenNum- howmany element remove from array 
//items - this is items wnanted to push in the array or remove array replacement
const month = ['jan','march','april','may','june','july','aug','sept']
month.splice(1,4,'feb','p');
console.log(month);

const myFishs = ['angle','clown','mandarin','sturgeon',];
const removed = myFishs.splice(2,0,"drum")
console.log(removed);
console.log(myFishs);

// splice(start) - after given index - remove all element form array 
const superHero = ['ironman','spiderman','antman','captain','hulk','ironman1','spiderman2','antman3','captain4','hulk5']
superHero.splice(4)
console.log(superHero);


//splice(start, deleteCount)-- start -- from given index , --deleteCount--delete given count number element
const ramayan = ['ram','krishna','shiv','hanuman','ram1','krishna2','shiv3','hanuman4']
ramayan.splice(4,2)
console.log(ramayan);

/* splice(start, deleteCount, item0)----- start -- from given index , --deleteCount--delete given count number element, item0 --push this item, from where the element is removed.*/

const countries = ['nepal','china','pak','japan','singapur','america','uk','afgan']
countries.splice(4,2,'west','bangla','rome')
console.log(countries);


//slice
const fruit = ["Banana", "Orange", "Lemon", "Apple", "Mango"];
const citrus = fruits.slice(1, 4);
console.log(citrus);

const str = "Hello, world!";
const slicedStr = str.slice(0, 12);
console.log(slicedStr );


const animal = ['ant', 'bison', 'camel', 'duck', 'elephant'];
console.log(animal.slice(2));
console.log("first->",animal.slice(1, 4));
console.log("second->",animal.slice(2, 4));
console.log("third->",animal.slice(3, 4));
console.log(animal.slice(1));
