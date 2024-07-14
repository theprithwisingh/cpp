
    // for (condition:expression 1; intialization:expression 2; itaration:expression 3){
  // code block to be executed}

var text = "";
for (let i = 0; i <= 25; i++) {
text += "The number is " + i + "<br>";
}
document.write(text);
document.write("</br>");
//////////////////////////////////////


for( let i = 0; i <= 25; i++){
name += "My name is " + "Prithwi singh"  + "</br>";
}
document.write(name);
document.write("code excuted" + "</br>");
//////////////////////////////////////
  


for (let i = 0; i <= 100; i++) {

document.write('100times' + "</br>");
}


 

// console.log('next line of code');
for (let i = 0; i < 50; i++) {
     const timeBounced = i + 1;
     document.write('yes The ball has bounced ' +timeBounced+' times' + '</br>');
    }

for (var i = 0; i < 3; i++) {
  let name = "John Doe";
  document.write("Hi, my name is " + name + '</br>');
}

for (let i = 0; i <= 100; i++) {
    document.write(i + '</br>');  // printing the value of i
}

for (let i = 2; i <= 100; i+=2) {
    document.write(i + '</br>');  // printing the value of i
}

for(let i  = 1; i <= 50; i+=2 ){
  document.write(i + '</br>'); 
}

for ( let i = 0; i<=50 ; i += 5 ){
  document.write(i + '</br>');
}


// Fuction for table
function table(a){
  var result = "";
  for (let i = a; i <= 100; i += a) {
    result += i + "" + "</br>";
  }
  return result;
}
document.write(table(5));
document.write(table(7));
document.write(table(2));
document.write(table(6));

// How to Loop Through an Array to Check for Odd and Even Numbers

for ( let i = 1; i<=4 ;i++){
    var name = "prithwi";
    document.write(name);
}
