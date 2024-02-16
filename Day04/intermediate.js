//higher order function

function operation(operator,a,b){
    return operator(a,b)
}
function sum(a,b){
    return a+b
}
result=operation(sum,2,3)
console.log(result)

function greetMethod(){
    return function(){//anonymous function: (a function with wno name)
        console.log("Hello there")
    }
    
}
let greet=greetMethod()
console.log(typeof greet)//function type
greet()

//forEach is a higher order predefined function

numbersToSum=[1,2,3,4,5,6,7,8,9,10]

numbersToSum.forEach(
    function Sum(numbersToSum){
        return console.log(numbersToSum)
    }
)

//you can also do like this
//numbersToSum.forEach((numbersToSum)=>console.log(numbersToSum))

//map function performs operation on each element without changing the orignal array

num_arr=[1,2,3,4,5,6]
cube_arr=num_arr.map(num_arr=>num_arr**3)
console.log(cube_arr)
console.log(num_arr)

//filter function filters out using a given condition in orignal array

num2_arr=[1,2,3,4,5,6]
even_arr=num2_arr.filter(num2_arr=>num2_arr%2==0)
console.log(even_arr)
console.log(num2_arr)

//reduce function reduces the whole array into a single number

sumOfArr=[1,2,3,4,5,6].reduce((curr,next)=>curr+next)
console.log(sumOfArr)