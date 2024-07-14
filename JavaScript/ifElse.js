
    //The if...else statement executes a statement if a specified condition is truthy. 
    //If the condition is falsy, another statement in the optional else clause will be executed.

   
    //   if (condition){statement1
    //      }
    //   else
    //      {statement2
    //        }



////////////////////////////////////////////////////////////
    var greeting;
    if(new Date().getHours() < 12){
        greeting = "goodmorning"
    }
    else{
        greeting = "goodevening";
    };
    console.log(greeting);
    console.log("</br>");

 /////////////////////////////////////////////////////////

    var greeting;
    if(new Date().getHours() > 15){
        greeting = "goodmorning";
    }
    else{
        greeting = "goodevening";
    };
    console.log(greeting);
    console.log("</br>");

////////////////////////////////////////////////////////

    var result;
    if( 5 > 6){
       result = "true";
    }
    else{ 
        result =  "false";
    }
    console.log(result);
    console.log("</br>");

/////////////////////////////////////////////////////////// 

   function positive(a){
   let result;
    if(a < 0){
        result = "positive";
    }
    else{
        result  = "negative";
   }
      return result;
   }
   console.log(positive(-6))
   console.log("</br>");
/////////////////////////////////////////////////////////
   
function negative(b){ 
    let result;
    if( b > 0){
        result = "positive";
    }
    else{
        result  = "negative";
    }
    return result;
}
console.log(negative(-6))
console.log("</br>");

///////////////////////////////////////////////////////// 

function checkvalue(a,b){
if ( a === 1 )
 if( b === 2)
 console.log("a is 1 and b is 2");
 
 else 
 console.log(" a is 1 but b is not 2");
 };

 checkvalue(1,3);
 console.log("</br>");

//  it is NOT right way if else method

///////////////////////////////////////////////////////// 

// block level coding is wright ways of  coding because when any problem do solve immediatily 
 
function checkValue(a,b){
    if ( a===1)
    if (b===2){
        console.log(" a is 1 and b is 2");
    }
    else{
        console.log("a is not 1");
    }
 }
checkValue(1,2);
console.log("</br>");
/////////////////////////////////////////////////////////////