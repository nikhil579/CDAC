query=require("querystring");
url=require("url")
http=require("http");
function processrequest(req,resp){
       u=url.parse(req.url);
	   console.log(u.pathname);
	   switch(u.pathname){
		case "/":
                resp.write("<h1>home page</h1>");
				resp.end();
				break;				
		 case "/about":
                resp.write("<h1>About us</h1>");
				resp.end();
				break;
         case "/datacalc":
                resp.write("<h1>In datacalc</h1>");
				resp.end();
				break;
        default:
                resp.write("<h1>wrong url</h1>");
				resp.end();
				break;					
	   }
        	   

}
s=http.createServer(processrequest);
s.listen(3000);
console.log("server start at port 3000");