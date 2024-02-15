function fact(a,b){ //fnc define
    if(a==1){return b}
    return a*fact(a-1,b);
}
function lol(){ 
    console.log(arguments);
}

var k="he "
var l="llo"

console.log(k/l) //display

//single line comment

/*
multiple line comment
*/

console.log(1=='1')//compares data types
console.log(65==='A')//compares data types and values
console.log('1'===1)

var i=1;
if(i%2==0){
    console.log("even")
}else{
    console.log("Odd")
}


console.log(fact(5,1))

lol(12,23,12,412,45,43,634,1) //fnc call