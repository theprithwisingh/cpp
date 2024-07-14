//HS
const promiseOne = new Promise(function(resolve, reject){
    //Do an async task
    //DB calls, cryptography, network
    setTimeout(function(){
        console.log('Async task is complete');
        resolve()//this resolve() ka mtlb ,ye hai ki .then() se connect ho gya
    },1000)
})
//then-> mean directly->resolve()
//then() having a callback function

promiseOne.then(function(){
    console.log("Promise consumed")
})

//
new Promise(function(resolve, reject){
    setTimeout(() => {
        console.log("ASYN TASK 2")
    }, 1000);
    resolve();
}).then(function(){
    console.log("Async 2 resolved")
})

//
const promiseThree  = new Promise(function(resolve,reject){
    setTimeout(function(){
        resolve({username:"hey, parth", email:"heyparth@email.com"})
    })
})
//.then(function(user)) function parameter carry -> resolve() object value
promiseThree.then(function(user){
    console.log(user);
})

//
const promiseFour  = new Promise(function(resolve,reject){
    setTimeout(() => {
        let error = true
        if(!error){
            resolve({username:"hitesh", password: "123"})
        }else{
            reject("Error: something going wrong")
        }
    }, 1000);
})
const username = promiseFour.then(user=>{
    console.log(user);
    return user.username;
})
.then((username)=>{
    console.log(username)
})
.catch(function(error){
    console.log(error)
})
.finally(()=>{
    console.log("The promise is either resolve or rejected")
})
console.log(username);


















/*
const promiseFive = new Promise(function(resolve,reject){
    setTimeout(() => {
        let error = false
        if(!error){
            resolve({username:"hitesh", password: "123"})
        }else{
            reject("Error: something going wrong")
        }
    }, 1000);
})
*/