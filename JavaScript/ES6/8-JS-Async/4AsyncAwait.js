async function harry(){
    let delhiWeather = new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("27 Deg")
        },7000)
    })

    let bangaloreWeather = new Promise((resolve,reject)=>{
        setTimeout(()=>{
            resolve("21 Deg")
        },5000)
    })
    // delhiWeather.then(alert)
    // bangaloreWeather.then(alert)

    //await
    console.log("Fetching Delhi Weather Please wait")
    let delhiW = await delhiWeather;
    console.log("Fetched Delhi Weather " + delhiW)
    console.log("Fetching bangalore Weather Please wait")
    let bangaloreW = await bangaloreWeather;
    console.log("Fetched bangalore Weather " + bangaloreW)
     return [delhiW,bangaloreW]

}
const b  = async function(){
    setTimeout(()=>{
        console.log("hey i m [b] and i m waiting")
    },6000)
} 

const c = async ()=>{
    console.log("Welcome to weather control room")
    let d = await b();
    let e = await harry();
}
c();