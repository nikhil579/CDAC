fs=require("fs");
fs.readFile("myfile2.txt",function(err,data){
    if(err){
	   console.log("error occured!");
	}else{
       console.log("contents are :"+data)
    }
});

console.log("program ends");
console.log("Thank you for visiting");
