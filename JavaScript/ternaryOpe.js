
let x = 5;
let result = x > 3 ? 'x is greater than 3' : 'x is less than or equal to 3';
console.log(result); //x is greater than 3


let y = 11;
let message = y % 2 === 0 ? 'y is even' : 'y is odd';
console.log(message); // Output: 'y is even'


//in ternary in ternary operation
let age = 18;
let vote = age >= 18 ? (age < 21 ? 'You can vote, but not drink.' : 'You can vote and drink.') : 'You are too young to vote or drink.';
console.log(vote); // Output: 'You can vote and drink.'


///////////////////////////////////////////////////////////////////
const greeting = (person) => {
  const name = person ? person.name : "stranger";
  return `Howdy, ${name}`;
};

console.log(greeting({ name: "Alice" })); // "Howdy, Alice"
console.log(greeting(null)); // "Howdy, stranger"

// ///////////////////////////////////////////////////////////////

let speed = 70;
let messa = speed >= 120 ? 'Too Fast' 
           : speed >= 80 ? 'Fast' 
           : 'OK';

           console.log(messa);
//////////////////////////////////////////////////////
function example() {
  return condition1 ? value1
        : condition2 ? value2
        : condition3 ? value3
        : value4;
}
/////////////////////////////////////////////////////
const isCat = true;
const sound = isCat ? 'Meow' : ['Woof', 'Bark'];
console.log(sound); // Output: 'Meow'


let condition = Math.random() > 0.4;
const function1 = () => {
  for (let i = 0; i < 5; i++) {
    console.log('Number: ', i);
  }
};
const function2 = () => {
  for (let i = 0; i < 5; i++) {
    return 'Number: ' + i;
  }
};
console.log(condition ? function1() : function2());



