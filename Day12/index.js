const express=require("express");
const app = express();

app.get("/",(req,res)=>{
    res.send("Hello from express server")
})

app.listen(8080);

