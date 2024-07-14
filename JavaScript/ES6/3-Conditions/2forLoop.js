
    // for (condition:expression 1; intialization:expression 2; itaration:expression 3){
  // code block to be executed}

  var text = "";
  for (let i = 0; i <= 25; i++) {
  text += "The number is " + i;
  }
  console.log(text);
  //////////////////////////////////////
  
  
  for( let i = 0; i <= 25; i++){
  name += "My name is " + "Prithwi singh";
  }
  console.log(name);

  //////////////////////////////////////
    
  
  
  for (let i = 0; i <= 100; i++) {
  
  console.log('100times');
  }
  
  for (let i = 0; i < 50; i++) {
       const timeBounced = i + 1;
       console.log('yes The ball has bounced ' +timeBounced+' times');
      }
  
  for (var i = 0; i < 3; i++) {
    let name = "John Doe";
    console.log("Hi, my name is " + name);
  }
  
  for (let i = 0; i <= 100; i++) {
      console.log(i);  // printing the value of i
  }
  
  for (let i = 2; i <= 100; i+=2) {
      console.log(i);  // printing the value of i
  }
  
  for(let i  = 1; i <= 50; i+=2 ){
    console.log(i); 
  }
  
  for ( let i = 0; i<=50 ; i += 5 ){
    console.log(i);
  }
  
  
  // Fuction for table
  function table(a){
    var result = "";
    for (let i = a; i <= 10*a; i += a) {
      result += i + "  ";
    }
    return result;
  }
  console.log(table(1));
  console.log(table(2));
  console.log(table(3));
  console.log(table(4));
  console.log(table(5));
  console.log(table(6));
  console.log(table(8));
  console.log(table(9));
  console.log(table(10));
  
  // How to Loop Through an Array to Check for Odd and Even Numbers
  
  for ( let i = 1; i<=4 ;i++){
      var name = "prithwi";
      console.log(name);
  }
  
  var str = "prithwi"
  for(i=0;i<=str.length;i++){
    console.log(str[i])
  }