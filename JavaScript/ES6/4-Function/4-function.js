//Function Closures
//parent function ke ander ek child function hota hai jo parent ke function ka variable use krta hai.ese hi closure function hai.bahari function ka excution khatm hone ke baad bhi
//A closure is created when a function is defined inside another function, and the inner function has access to the variables of the outer (enclosing) function, even after the outer function has finished executing.

//use of closures
/*  1.Private Variables:
    2.Function Factories:
    3.Callback Functions:
    4.Event Handling:
    5.Module Pattern:
    6.Memoization:
    7.Currying:
    8.Creating Timers:  
*/

let outerFunction =()=>{
let outerVariable = "I am from outer function";
    const innerFunction =()=> {
      console.log(outerVariable);
    }
    return innerFunction;
  }

console.log(outerFunction);

// why use "return" in function in javascript
/* Return statement is used to terminate the execution of the function in a program.
When a function reaches a return statement, it immediately stops executing and returns the specified value to the caller of the function.
Without a return statement you can't fetch the value from the function it will return undefined. */



//
//Function Without A Parameter
// without parameter function
function greet() {
  console.log("Hello, world!");
}

greet(); // Outputs: Hello, world!
/*
यदि आपके पास कोई ऐसा task है जिसमें input की आवश्यकता नहीं है और encapsulation और पुन: उपयोग से लाभ हो सकता है, तो without parameter फ़ंक्शन एक अच्छा विकल्प हो सकता है। हालाँकि, यदि आपके कार्य को अधिक flexible  और विभिन्न परिस्थितियों के अनुकूल होने की आवश्यकता है, तो आपको parameters का उपयोग करने पर विचार करने की आवश्यकता हो सकती है।
*/

//Anonymous function
/*
anonymous function ko variabe me difine kiya jata hai.
let annoFun  = function myffunc(){
  console.log("Anonymous function")
}
*/


//Self invoking funtion or immediately function
// इस type के function को ,जिस time declare किया जाता है उसी time call भी किया जाता है ,क्योकी इस प्रकार के function को जहाँ define किया गया है वही तुरतं जरुरत होती है  और कही भी नहीं, esiliye ese "immediately invoking function" kahte hai.
(function functionName(){
  //code execution
  console.log("immediately invoking function");
}());

(function (num){
  console.log(num*num)
}(5));

// this method
// this - function ke use nhi kr skte ,undefined show krta hai.
//this - currnt context
const user ={
  username:"hitesh",
  price:999,

  welcomeMassege: function(){
    console.log(`${this.username} , wlecome to website`);
    console.log(this)
  }
}

// user.welcomeMassege();
// user.username="sam";
// user.welcomeMassege();


console.log(this)

function chay(){
  console.log(this.username)
}
chay();//undefined

const x =(y)=>{
  let z= 4
console.log(this.z)
}
x();//undefined

const str =()=>{
  let s = "s";
  console.log(this.s)
}
str();//undefined

//but

const str2 =()=>{
  let username = "ramu";
  console.log(this.username)//undefined
  console.log(this)//{}
}
str2();






//Function Call
//Function Apply
//Function Bind
