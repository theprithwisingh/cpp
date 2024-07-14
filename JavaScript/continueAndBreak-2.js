//Example 1: for.......
//program to print the value of i
//break condition = when condition is resolve for lool will be stop that called break loop.
 //The function will stop as soon as the value is equal to 4
for (let i = 1; i <= 5; i++) {
    // break condition     
    if (i == 4) {
        break;
    }
   console.log(i);
}

//Example 2:
for ( let i = 1; i<= 12; i++){
    //break condition = when condition is resolve for lool will be stop that called break loop.
    //The function will stop as soon as the value is equal to 10.
if ( i == 10){
    break;
} 
console.log(i);
}

//Example 3:break with while Loop
//program to find the sum of positive numbers
//if the user enters a negative numbers, break ends the loop
//the negative number entered is not added to sum

//Exercise:3 break with Nested Loop
//first loop 
for (let i = 1; i <= 3; i++){

    //second loop
    for (let j = 1; j<= 3; j++){
        if(i == 2){
            break;
        }
        console.log(`i = ${i}, j = ${j}`);
    }
}


// Exercise:4
for (let i = 0, j = 8; i <= 8; i++, j--) {
    console.log("i = ", i, "j = ", j);
  }


  
//continue statement
/*
USE TO CONTINUE STATEMENT :-
Note: The continue statement is almost always used with decision making statements
*/
// program to print the value of i
for (let i = 1; i <= 10; i++) {

    // condition to continue    
    if (i == 8) {
        continue;
    }
    console.log(i);
}




// continue with while Loop
let sum = 0;
let number = 0;
while (number >= 0){
    // add all positive numbers
    sum += number;
    // take input from the user
    number = parseInt(prompt('Enter a number: '));
    // continue condition
    if (isNaN(number)) {
    console.log('You entered a string.');
    number = 0;
    // the value of number is made 0 again
               continue;
    }
}
// display the sum
   console.log(`The sum is ${sum}.`);



// nested for loops
// first loop
for (let i = 1; i <= 3; i++) {
    // second loop
    for (let j = 1; j <= 3; j++) {
        if (j == 2) {
          continue;
        }
        console.log(`i = ${i}, j = ${j}`);
    }
    }


