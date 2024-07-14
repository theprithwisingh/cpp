/* function multipleBy5(num){
     this.num = num
     return num*5
 }
 multipleBy5.power = 2

 console.log(multipleBy5(5));
 console.log(multipleBy5.power)
 console.log(multipleBy5.prototype)
 */


/*
function createUser(username, score){
 this.username  = username
 this.score = score
}
createUser.prototype.increment = function(){
    this.score++
}
createUser.prototype.printMe = function(){
    console.log(`Price of chai ${this.score}`)
}
const chai = new createUser("chai", 25)
const tea = createUser("tea,250")

chai.printMe()
*/

//Here's what happens behind the scenes when the new keyboard is used:
// A new object is created: the new keyword initiates the creation of a new javascript object.
// A prototype is linked: the newly created object gets linked to the protoptype property of the constructor function. this means that it has access to properties and method defined on the consyter's prototype.
//the constructor is called: the constructor function is called with the specified argument and this is bound to the newly created object.if no explicit retutrn value is specified from the constructor, javascript assumes this,the newly created object, to be the intended return value.

//The new object is returned: After the constructor function has been called, if it doesn't return a non-primitive value (object, array, function, etc), the newly created object is returned.


/*
let myName = "prithwi   ";
let mycoding = "    coding   "
console.log(myName.trim().length);
*/

let myHero = ["thor", "spiderman"]
let heroPower = {
    thor: "hammer",
    spiderman:"sling",

    getSpiderPower: function(){
        console.log(` spiderman power is ${this.spiderman}`)
    }
}

Object.prototype.hitesh = function(){
    console.log(`hitesh is present in all objects`)
}
heroPower.hitesh();
myHero.hitesh();


Array.prototype.heyHitesh=function(){
    console.log(`Hitesh says hello`)
}
// myHero.hitesh()
myHero.heyHitesh()
// heroPower.heyHitesh()//

// prototype inheritance

const user  = {
    name:"tps"
}
const Teacher = {
    makeVideo:true
}

const TeachingSupport = {
    isAvailable:false
}

const TASupport = {
    makeAssignment:'JS assignment',
    fullTime:true,
    __proto__: TeachingSupport
}
Teacher.__proto__ = user

//modern syntax
Object.setPrototypeOf(TeachingSupport, Teacher)

let anotherUserName = "Prithwi N singh"
 String.prototype.trueLength = function(){
    console.log(`${this}`)
    console.log(`${this.name}`)
    console.log(`True length is ${this.trim().length}`)
 }

 anotherUserName.trueLength()
 "HITESH".trueLength()
 "GHTHSBJUIAUVBSBBVBBV".trueLength()