
var dt = new Date();
console.log("dt.constructor is : " + dt.constructor); 

var dt = new Date();
console.log("Date and Time : " + dt); 

// Syntax Date.getDate()
var dt = new Date("December 25, 1995 23:15:00");
console.log("Date: " + dt.getDate()); //25
         

// syntax Date.getDay()
var dt =  new Date("December 25, 1995 23:15:00"); // 1 mean monday
console.log("Day: " + dt.getDay());// 0-sunday 1-monday 2-tueseday ....

// syntax getFullYears()
var yt = new Date("October 9, 1999 04:15:00"); 
console.log( "Year: " + yt.getFullYear());


// Syntax getHours()
const birthdayTime = new Date("October 9, 1999 06:15:00");
console.log("Hours: " + birthdayTime.getHours());//year:1999

// Syntax getMinutes()
const getMin = new Date();
console.log("Minute :" + getMin.getSeconds());//Minute :2

// Syntax getSeconds()
const getSec = new Date("October 9, 1999 06:15:45");
console.log("Second: " + getSec.getSeconds())


// Syntax getMilliseconds()
const milliSec =  new Date("October 9, 1999 06:15:45:");
console.log("Milli second :"+ milliSec.getMilliseconds());//123
         
// Syntax getMonth()
const getMon = new Date("october 9, 1999 06:15:45:123");
console.log("Month :"+ getMon.getMonth());
//0-January, 1-February, 2-March, 3-April, 4-May, 5-June, 6-July, 7-August, 8-September, 9-October, 10-November  11-December.

// Syntax getTime()
const getTime  = new Date("October 9,1999 09:15:45:123");
console.log("Time :"+ getTime.getTime()); 

const getTimes  = new Date("January 2, 1970 00:00:00");
console.log("Time :"+ getTimes.getTime()); 

// Syntax getTimezoneOffset()
const date1 = new Date('August 19, 1975 23:15:30 GMT+07:00');
const date2 = new Date('August 19, 1975 23:15:30 GMT-02:00');

console.log(date1.getTimezoneOffset() + "</br>");
// Expected output: your local timezone offset in minutes
// (e.g., -120). NOT the timezone offset of the date object.

console.log(date1.getTimezoneOffset() === date2.getTimezoneOffset()+ "</br>");
// Expected output: true 

    


// Syntax getUTCDate()
const UTCdate =  new Date('August 19, 1975 23:15:30 GMT+07:00');
// EXPECETED RESULT = 19

// Syntax getUTCDay()
const UTCday = new Date();
console.log(UTCday.getUTCDay());


// Syntax getUTCFullYear()
const getFullYear = new Date();
console.log(getFullYear.getUTCFullYear());

// Syntax getUTCHours()
const getUTCHour = new Date();
console.log(getUTCHour.getUTCHours());

//Syntax Date.Now()
   
// // Calculate milliseconds in a year
// const minute = 1000 * 60;
// const hour = minute * 60;
// const day = hour * 24;
// const years = day * 365;

// const myDate = new Date("09/10/1999");

var dob = new Date("09/10/1999");  
//calculate month difference from current date in time  
var month_diff =dob.getTime();
console.log(dob.getTime());

var dob = new Date("09/10/1999");  

//calculate month difference from current date in time  
var month_diff = Date.now() - dob.getTime();  
      
//convert the calculated difference in date format  
var age_dt = new Date(month_diff);   
      
//extract year from date      
var year = age_dt.getUTCFullYear();  
      
//now calculate the age of the user  
var age = Math.abs(year - 1970);  
      
//display the calculated age  
document.write("Age of the date entered: " + age + " years");





























// document.write(allYear);


// Divide Date.now() with a year
// let years = Math.round(Date.now() / year);
// let years = Math.round(Date.now() / hour );
// document.write(years);



// Syntax setMilliseconds()
// Syntax setMonth()
// Syntax setSeconds()
// Syntax toDateString()
// Syntax toISOString()
// Syntax toJSON()
// Syntax toString()
// Syntax toTimeString()
//Syntax valueOf()
