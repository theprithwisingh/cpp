
//if (condition1) {
//  block of code to be executed if condition1 is true
//} else if (condition2) {
//  block of code to be executed if the condition1 is false and condition2 is true
//} else {
//  block of code to be executed if the condition1 is false and condition2 is false
//}

////////////////////////////////////////////////////////////
// The problem with this code is that you have declared the variable greeting as a constant using the const keyword. Since greeting is a constant, it cannot be reassigned a new value once it has been initialized.

//However, in your code, you are trying to assign different values to greeting based on the time of day. This will result in a TypeError: "Assignment to constant variable" when you run the code.

//To fix this, you can declare greeting as a variable using the let keyword instead of const, like this:


// const greeting; //here variable is const again variable  can change so code get error
// const time = new Date().getHours();
// if(time < 10){
//     greeting  = "Good Morning"
// }
// else if  (time > 20){
//     greeting = "good day";
// }
// else{
//     greeting = " Good evening";
// }
// document.write(greeting);

///////////////////////////////////////////////////////////////////////////////////////////
// after fixing code
// change variable name 

let greeting;
const time = new Date().getHours();
if(time < 10){
    greeting  = "Good Morning"
}
else if  (time > 20){
    greeting = "good day";
}
else{
    greeting = " Good evening";
}
document.write(greeting);
document.write("</br>");
////////////////////////////////////////////////////////////////////////////////

var age = 18;

if (age < 18) {
  document.write("1.Alice is under 18 years old.");
} else if (age >= 18 && age <= 21) {
  document.write("1.Alice is between the ages of 18 and 21.");
} else {
  document.write("1.Alice is over 21 years old.");
}


document.write("</br>");

////////////////////////////////////////////////////////////////////////////////
var age = 18;
let report;
if (age < 18) {
    report = "2.Alice is under 18 years old."
} else if (age >= 18 && age <= 21) {
    report = "2.Alice is between the ages of 18 and 21."
} else {
    report = "2.Alice is over 21 years old."
}
document.write(report);

document.write("</br>");



function number(num){
var what;
if(num < 0){
    what = "it is negative";
}
else if (num === 1){
    what = " it is 1"
}
else if (num === 2){
    what = " it is 2"
}
else if (num ===3){
    what = " it is 3"
}
else if (num === 4){
    what = " it is 4"
}
else if (num === 5){
    what = " it is 5"
}
else if (num === 6){
    what = " it is 6"
}
else if (num === 7){
    what = " it is 7"
}
else{
    "it is greater than 8";
}
return what;
}
document.write(number(6));
//////////////////////////////////////////////////////////////////
