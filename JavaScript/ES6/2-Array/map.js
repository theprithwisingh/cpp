//map() =>array.map(function(currentValue, index, arr), thisValue)
//map() creates a new array from calling a function for every array element.
//map() does not execute the function for empty elements.
//map() does not change the original array.


//
const persons =[
    {firstname : "malcom", lastname:"Reyno"},
    {firstname : "laylee", lastname:"loo"},
    {firstname : "jay", lastname:"taal"}
];

const getFullName =(item)=>{
return [item.firstname,item.lastname].join(" ");
}
const GFN = persons.map(getFullName);
console.log(GFN);


const num = [1,2,3,4,5,6,7];
const numDouble =num.map((arry,index)=>{
  return arry*3;
})
console.log(numDouble);


const num2 = [9,11,12,13,14,15,16];
const squr  =num2.map(Math.sqrt);
console.log(squr);

//new Map()	Creates a new Map object

const fruits = new Map([
  ["A", 500],
  ["B", 300],
  ["C", 200],
  ["D", 100]
]);

//get()	Gets the value for a key in a Map
const get = fruits.get("A");
console.log(get); // Output: 500

//set()	Sets the value for a key in a Map
const set = fruits.set("D",500);
console.log(set);

//The size property returns the number of elements in a Map:
const size = fruits.size;
console.log("sizes :" + size);

//delete()	Removes a Map element specified by a key
const delt = fruits.delete("C");
console.log(delt) //true

//has()	Returns true if a key exists in a Map //"xxxx" key array me hai ya nhi pta lagane ke liye use kiya hai.
const has1 = fruits.has("apples");
console.log(has1);//false
const has2  = fruits.has("A");
console.log(has2);//true


//clear()	Removes all the elements from a Map
const clr = fruits.clear()
console.log(clr);


//entries()	Returns an iterator object with the [key, value] pairs in a Map





//keys()	Returns an iterator object with the keys in a Map
//values()	Returns an iterator object of the values in a Map

























//forEach()	Invokes a callback for each key/value pair in a Map
// Creating a map using Map object
let mp = new Map()
// Adding values to the map
mp.set("a", 1);
mp.set("b", 2);
mp.set("c", 3);
// Logging map object to console
mp.forEach((values, keys) => {
	console.log(values, keys)
})
