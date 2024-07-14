/*
HOF - high order function
when a function treating like variable call high order function
or
A function take a other function like argument called HOF 
*/

//
const powerTwo=(n)=>{
    return n**2
}
function powercube(powerTwo,n){
    return powerTwo(n) *n
}
console.log(powercube(powerTwo,3));

//
function sayHello(){
    return () =>{
        console.log("hello tips");
    }
}
let guessValue  = sayHello()
console.log(guessValue);
guessValue()

//
const higherOrder =n=>{
    const oneFun =m=>{
        const twoFun = p=>{
            return m+n+p
        }
        return twoFun
    }
    return oneFun
}
console.log(higherOrder(2)(3)(4));

//
const mynum = [1,2,3,4,5,6,7,8,9]
const sumArray =(arr)=>{
    let total= 0;
    arr.forEach(element => {
        total +=element
    });
return total
}
console.log(sumArray((mynum)));


//
function oneMoreHello(){
    console.log("hello typs" + Math.random())
}
// setInterval(oneMoreHello,500)

//
//add two number
function sum(a,b){
    return a+b
}

//multiply two numbers
function multiply(a,b){
    return a*b
}
//operate with a higher-order function
function calculate(operation, numsArray){
    if(numsArray.length<=3){
        let a= numsArray[0]
        let b = numsArray[1]

        //return a function
        return operation(a,b)
    }
}

//calculate the sum of the numbers
console.log(calculate(sum,[3,2,3]))

//calculate the sum of the numbers
console.log(calculate(multiply,[3,2]))



//
//Filtering an Array
const numbers  =[1,2,3,4,5,6,7,8,9,12]
const evenNumber = numbers.filter(number=>{
    return number % 2 ===0
})
console.log(evenNumber)

//
//Reducing an Array
const sum1  = numbers.reduce((total,number)=>{
return total + number;
},0)
console.log(sum1)

//
//Sorting an Array
const numbers2  =[1,2,9,4,5,7,6,8,3,12]
const sortedNumbers = numbers2.sort((a,b)=>{
    return a-b
})
console.log(sortedNumbers)

/*
Map()
In the above code block, We use the map() method to double each number of array numsArray.
map() applies the callback function callbackFn to each element of the array. Then it returns a new array.
Because the map() method accepts a function as an argument. Therefore map() is a higher-order function in javascript.
*/
function callbackFn(number){
    return number *2 
}
const doubleNumbers = numbers2.map(callbackFn)
console.log(doubleNumbers)


/*
//EventListener
const button  = document.querySelector("button")
button.addEventListener("click", function(){
    console.log('hey, you clicked me!')
})*/

//Tranforming with map()
const nums  = [1,2,3,4,5,1]
const squared  = nums.map((x)=> x**2)
console.log(squared)

const hostelGirls = [
    {name: 'Dipika', age: 19},
    { name: 'Alisha', age: 20 },
    { name: 'Ayesha', age: 25 },
    { name: 'Rumaisha', age: 22 },
    { name: 'Isha', age: 26 },
    { name: 'Nidhi', age: 27 },
    { name: 'Prisha', age: 21 },
  ]
const below25 = hostelGirls.filter((girl)=>
girl.age<=25) 
console.log(below25);


//reduce()
const num3 = [1,2,3,4,5,6]
const sum2 = num3.reduce((total,element)=> total + element)
// console.log(sum2);21

//Composability
const scripts = [
    {
      name: 'Avestan',
      yearOfOrigin: 1800,
      status: 'dead',
      family: 'Indo-Iranian',
      usedIn: ['Iran'],
    },
    {
      name: 'Arabic',
      yearOfOrigin: 500,
      status: 'living',
      family: 'Afro-Asiatic',
      usedIn: ['Middle East', 'North Africa'],
    },
    {
      name: 'Coptic',
      yearOfOrigin: 0,
      status: 'dead',
      family: 'Afro-Asiatic',
      usedIn: ['Egypt'],
    },
    {
      name: 'Hebrew',
      yearOfOrigin: 1000,
      status: 'living',
      family: 'Afro-Asiatic',
      usedIn: ['Israel'],
    },
    {
      name: 'Latin',
      yearOfOrigin: -700,
      status: 'dead',
      family: 'Indo-European',
      usedIn: ['Europe', 'America', 'Africa', 'Asia'],
    },
  ]

  //calculate the average year of origin for living scripts
  let livingScripts  = [];
  let livingTotal = 0
  for (let script of scripts) {
    if(script.status==='living'){
        livingScripts.push(script)
        livingTotal+=script.yearOfOrigin
        // console.log(livingTotal)
    }
  }
const avgYearOfOriginLivng  = Math.round(livingTotal/livingScripts.length)
console.log(avgYearOfOriginLivng);

//calculate average year of the origin for dead scripts
let deadScripts = []
let deadTotal = 0
for (const script of scripts) {
  if (script.status==='dead') {
    deadScripts.push(script)
    deadTotal += script.yearOfOrigin
  }  
}
const avgYearOfOriginDead = Math.round(deadTotal / deadScripts.length)

console.log(avgYearOfOriginDead)



 //solve upper question by HOF
 // Calculate the average year of Origin
function averageYearOfOrigin(array, status) {
    let desiredArray = []
    let total = 0
    for (let element of  array) {
      if (element.status === status) {
        desiredArray.push(element)
        total += element.yearOfOrigin
      }
    }
    // return a function
    return Math.round(total / desiredArray.length)
  }
  
  console.log(averageYearOfOrigin(scripts, 'living')) // output: 750
  console.log(averageYearOfOrigin(scripts, 'dead')) // output: 367




//static method
// why use static method
//When you're inside a class constructor, you might need to perform some tasks that are related to the class as a whole, not just to the instance being created. Static methods are perfect for such tasks because they are associated with the class itself.

//static methods always call with class name

class MyClass {
  constructor(value) {
    this.value = value;
    this.doubleValue = MyClass.double(value); // Calling static method
  }

  static double(number) {
    return number * 2;
  }
}

const instance = new MyClass(5);
console.log(instance.value); // Output: 5
console.log(instance.doubleValue); // Output: 10
