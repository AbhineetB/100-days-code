const http=require('http')
const server=http.createServer((req,res)=>{
    if(req.url=='/hello'){
        res.end('Hello there')
    }else{
        res.end('you are not supposed to be here')
    }
})

server.listen(8000,()=>{
    console.log('server is Created')
})