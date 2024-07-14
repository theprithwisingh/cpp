//#variableName - variableName ke sath #hash lagate variable ko private krne k liye aur acess bhi #hash ke sath hi hota hai.
//private esiliye krte hai taki koe variable value ko change na kr ske
// class ke andar variable class ke bahar bhi accese kr skte hai
//
class ComplexNumber {
    #real;
    #imag;

    constructor(r,i){
        this.#real = r;
        this.#imag = i;
    }

    display(){
        console.log(this.#real,"+ i", this.#imag)
    }
    get real(){
        return this.#real;
    }

    get imag(){
        return this.#imag;
    }
   
    addComplexNumber(c){
        this.#real+=c.real;
        this.#imag+=c.imag;
    }
}

const c1 = new ComplexNumber(3, 4);
c1.display(); // Output: 3 + i 4
const c2 = new ComplexNumber(5, 6);
c1.addComplexNumber(c2);
c1.display(); // Output: 8 + i 10