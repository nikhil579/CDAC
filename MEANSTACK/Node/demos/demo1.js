function factorial(n){
   fact=1;
   for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   return fact;
}

function prime(n){
	for(i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
	
}

exports.f1=factorial;
exports.f2=prime;

/*console.log("Factorial: "+factorial(5));
var n=prime(7)
if(n==true)
{
	console.log("It is prime number")
}
else{
	console.log("It is not prime number")
	
}*/
