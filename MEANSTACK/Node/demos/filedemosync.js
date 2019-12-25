fs=require("fs");
data=fs.readFileSync("myfile.txt");
console.log(data.toString());
data=fs.readFileSync("myfile2.txt");
console.log(data.toString());
console.log("program ends");
console.log("Thank you for visiting");
