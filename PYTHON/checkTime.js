const loop=()=>{
    for (let i = 0;  i <= 1000000;     i++) {
        console.log(`${i}\n`);
    }
}
const before = new Date();
console.log(before)
const beforeTime =before.getHours() * 3600 + before.getMinutes() * 60 + before.getSeconds();
console.log(beforeTime)
// loop();
const after = new Date();
const afterTime  = after.getHours() * 3600 +after.getMinutes() * 60 + after.getSeconds();
const timeTaken =afterTime-beforeTime;
console.log('taken time is ',timeTaken);