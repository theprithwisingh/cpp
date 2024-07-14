//forEach()
//The forEach() method calls a function for each element in an array.
//The forEach() method is not executed for empty elements.
//forEach(callbackFn)
//forEach(callbackFn, thisArg)
//
const array5 =  [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
const forEachCallBack =(value)=>{return value*2;}
array5.forEach((element)=>{
 console.log(forEachCallBack(element))
});


//
const array6 =["Prithwi","singh","chauhan"]
const target = [];
const reverseAndAppend =(str)=>{
let reversingStr = str.split('').reverse().join('');
target.push(reversingStr);
}
array6.forEach(reverseAndAppend);
console.log('Reversed Strings:', target);

//
const staffsDetails = [
 { name: "Jam Josh", age: 44, salary: 4000, currency: "USD" },
 { name: "Justina Kap", age: 34, salary: 3000, currency: "USD" },
 { name: "Chris Colt", age: 37, salary: 3700, currency: "USD" },
 { name: "Jane Doe", age: 24, salary: 4200, currency: "USD" }
];
//How to use the currentElement Argument
staffsDetails.forEach((staffDetail)=>{
 let sentence = `I am ${staffDetail.name} a staff of royal suites.`;
 console.log(sentence);
});

staffsDetails.forEach(({name},index) =>{
 let sentence = `I am ${name} a staff of royal suites.`;
 console.log(sentence);
})

//How to use the index Argument
staffsDetails.forEach((staffDetails, index)=>{
let sentence = `index ${index} : I am ${staffDetails.name} a staff of royal suites `;
console.log(sentence);
}
)

//arrow
const apps = ["calculater", "massaging","clock","maps","location","street"];

apps.forEach(app =>{
    console.log(app);
});

//function old ways
apps.forEach(function(app){
    console.log(app);
})

/*//return nodelist
const items = document.querySelectorAll("ul");
items.forEach(item=>{
    console.log(items)
});*/


//Iterate over array of objects/ array ke element pr loop chlana

const users =[{
    id:1,
    name:"alex"
},{
    id:2,
    name:"sam"
}];

users.forEach(user =>{
    console.log(user);//an object
    console.log(user.id);
    console.log(user.name);
})

//Using the index in the forEach
apps.forEach((app,index)=>{
    console.log(app,index)
});
//"app" is the first argument, representing the current element in the array during each iteration.

apps.forEach(function(app,index){
    if(index < 2){
        return false;
    }
     console.log(app,index);
})
//array.forEach(callback(item, index, array))
