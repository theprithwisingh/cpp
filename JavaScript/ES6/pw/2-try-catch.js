try{
    //risky code
}
catch{
    //resolving risky code
}
finally{
// this is alwalys get excuted
}

try{
    let x= undefined;
    console.log(x[0])
}
catch{
    console.log("catch error")
}
finally{
    console.log("this code should alwas get excuted")
}

//
try{
    console.log('hello')
    console.log(a)
    console.log("end")
}
catch(e){
    console.log('hello moto', e)
}
console.log("the endgame")