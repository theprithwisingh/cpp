
 /*   rules and Syntax
    switch (expression) {
  case value1:
    //Statements executed when the
    //result of expression matches value1
    [break;]
  case value2:
    //Statements executed when the
    //result of expression matches value2
    [break;]
  ...
  case valueN:
    //Statements executed when the
    //result of expression matches valueN
    [break;]
  [default:
    //Statements executed when none of
    //the values match the value of the expression
    [break;]]
}
*/

    // program using switch statement
    let a = 2;

    switch (a) {
    
        case 1:
            a = 'one';
            break;
        case 2:
            a = 'two';
            break;
        default:
            a = 'not found';
            break;
    }
    console.log(`The value is ${a}`);
    
    
    function age(a){
        let b;
        switch(a){
            case 18:
            b = 'i am just eligibl to voting';
            break;
    
            case 21:
            b = 'i am not eligibl to voting';
            break;
    
            case 50:
            b = 'i am senior eligibl to voting';
            break;
    
            default:
            b = 'not found p';
            break;
        }
        return b;
    }
    console.log(age(21));
    
    function age(a){
        let b;
        if(a === 18){
            b= "i am just eligible to voting. "
        }
        else if( a < 18){
            b = "i am not elgible ."
    
        }
        else if ( a<50){
            b=" i mseniourt."
        }
        else{
            b = "dta is not ffound";
        }
        return b;
    }
    console.log(age(51));
    
    // calculater
    let result;
    
    //take the operator input
    const operator = prompt('Enter operator (either+,-,*,/)');
    
    //take the operand input 
    const number1 = parseFloat(prompt('Enter fisrt number: '));
    const number2 = parseFloat(prompt('Enter second number: '));
    
    switch(operator){
        case '+':
            result = number1 + number2;
            console.log(`${number1} + ${number2} =  ${result}`);
            break;
    
        case '-':
            result = number1 - number2;
            console.log(`${number1} - ${number2} =  ${result}`);
            break;
        case '*':
            result = number1 * number2;
            console.log(`${number1} * ${number2} =  ${result}`);
            break;
    
        case '/':
            result = number1 / number2;
            console.log(`${number1} / ${number2} =  ${result}`);
            break;
    
        default:
            console.log('Invalid operator');
            break;
    }
    
    //multiple  switch case
    let fruit = 'apple';
    switch(fruit){
        case 'apple':
        case 'mango':
        case 'pineapple':
            console.log(`${fruit} is a fruit.`);
            break;
        default:
            console.log(`${fruits} is not fruits`);
            break;
    }
    
    
    const expr = 'Oranges';
    
    switch (expr) {
      case 'Oranges':
        console.log('Oranges are $0.59 a pound.');
        break;
        
      case 'Mangoes':
      case 'Papayas':
        console.log('Mangoes and papayas are $2.79 a pound.');
        // Expected output: "Mangoes and papayas are $2.79 a pound."
        break;
        
      default:
        console.log(`Sorry, we are out of ${expr}.`);
    }
    
    