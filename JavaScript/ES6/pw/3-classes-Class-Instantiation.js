class Product {
  constructor(n,p,r){
        console.log("calling the constructor")
        this.name = n;
        this.price = p;
        this.rating = r;
    }
    //behaviours -> functions -> member functions
    display(){
        console.log("this refers to", this)
        console.log("displaying the current product", this.name,this.price,this.rating)
    }
}
const p  = new Product("iphone",10000,5); //new -> create an empty plain Object
//in the above piece of code we are calling the constructor method
console.log(p);
p.display();















//the constructor() is a special method that you can include in a class. 
//It's like a function that gets called automatically when you create a new object based on that class. This method is used to set up the initial state of the object.
class Rectangle {
    constructor(width, height) {
      this.width = width;
      this.height = height;
    }
  }
  
  // Creating a new Rectangle object
  const rect = new Rectangle(5, 10);
  console.log(rect.width); // Output: 5
  console.log(rect.height); // Output: 10
  
//HS
class user {
    constructor(username,email,password){
        this.username = username;
        this.email = email;
        this.password = password;
    }

    encryptPassword(){
        return `${this.password}abc`
    }
    changeUsername(){
        return `${this.username.toUpperCase()}`
    }
}

const myUser = new user("tips","tips@gmail.com","123")
console.log(myUser.encryptPassword());
console.log(myUser.changeUsername());

//behind the scene

function users(username,email,password){
    this.username = username;
    this.email = email;
    this.password = password;
}
users.prototype.encryptPassword = function(){
    return `${this.password}abc`

}
users.prototype.changeUsername = function(){
    return `${this.username.toUpperCase()}`}
const myId = new users('tips','tips@email.com','1234')

console.log(myId.encryptPassword());
console.log(myId.changeUsername());


//inheritance 
class userss {
    constructor(username){
        this.username = username
    }
    logMe(){
        console.log(`USERNAME is ${this.username}`)
    }
}

class Teacher extends userss{
    constructor(username, email, password){
        super(username)
        this.email = email
        this.password = password
    }

    addCourse(){
        console.log(`A new course was added by ${this.username}`)
    }
}
const newFaulaty = new Teacher("vinayak","vinayak@teacher.com","123")
console.log(newFaulaty)

//super() -The super keyword is used to call the constructor of its parent class to access the parent's properties and methods.

newFaulaty.addCourse();

const first = new userss("masalaChai")
console.log(first);

first.logMe();

console.log(newFaulaty === first)
console.log(first instanceof userss)

//staticprops

class userr{
    constructor(username){
        this.username = username;

    }
    logMe(){
        console.log(`Username: ${this.username}`)
    }
static createId(){
    return `123`
}
} 
const tips = new userr("hietsh")
tips.createId();
console.log(tips);