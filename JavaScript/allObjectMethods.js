function sumOfAllParameters(...args) {
    let sum = "";
    for (let i = 0; i < args.length; i++) {
      sum += args[i];
    }
    return sum;
  }
  
  let result = sumOfAllParameters(1,2,3,4,5,6,7);
  document.write(result);
  
  
  let obj = {id:101,name:"prithwi",salary:1000000}
  
  let emp = new Object();
  emp.name = "prithvi";
  emp.id = 102;
  emp.salary =10000000000000;  
  console.log(emp);
  console.log(obj);
  
  function ram(i,n,s){
    this.id = i;
    this.name = n;
    this.salary = s;
  }
   let e = new ram(101,"name",123);
   console.log(e);