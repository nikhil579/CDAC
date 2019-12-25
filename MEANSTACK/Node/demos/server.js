http=require("http");
s=http.createServer(function(req,resp){
resp.writeHead(200,{"Content-Type":"text/html"});
resp.write("<h1>Hello World</h1>");
resp.write("<h1>Welcome to NodeJs</h1>");
resp.end("This is end");  
});
s.listen(3000);
console.log("server started at port 3000");