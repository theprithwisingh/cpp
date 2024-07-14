for( let i = 0; i <= 25; i++){
    name += "My name is " + "Prithwi singh"  + "</br>";
    }
    console.log(name);
    
    
    for (var i = 0; i < 10; i++) {
      let name = "John Doe";
      console.log("Hi, my name is " + name + '</br>');
    }
    
    
    
     var x1  = "20";
     switch(x1){
        case 20:
        console.log("x1==20");
        break;
        default:
            console.log("x i s not equal to 20");
     }
    
    
    
    var a = [1,2,3,4,5];
    for(var i in a){
        if (a[i] % 2 ===0){
            console.log(a[i]);
        }
    }
   
    
    
    
    for( var i = 2; i < 5; i++){
        if ( i === 3){
            break;
        }
        console.log(i);
    }
    
    
    
    
    
    for( var i = 2; i < 5; i++){
        if ( i === 3){
            continue;
        }
        console.log(i);
    }
    
    
    const one1 = false || {} || null;
    const two2 = null || false || "";
    const three3 = [] || 0 || true;
    console.log(one1, two2, three3);

    
    const one = false || {} || null;
    const two = null || false || "";
    const three = [] || 0 || true;
    
    console.log(one, two,three);

    
    for (var i = 0; i < 5;i++){
        console.log(i)
    }