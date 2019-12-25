function displayData(){
  var nm=document.getElementById("nm").value;
  var hobbies=document.getElementsByName("hobbies");
  var str="";
  for(i=0;i<hobbies.length;i++){
       if(hobbies[i].checked==true){
	       str+=hobbies[i].value+",";
	   }
  }
  str1="";
  str1+="Name: "+nm + "<br> Hobbies: "+str;
  document.getElementById("myid").innerHTML=str1;
}

function validateName(){
	var myp=document.getElementById("nmmsg");
	var txt=document.getElementById("nm").value;
	if(txt==""){
		myp.innerHTML="Name cannot be empty";
		return false;
	}
	else{
		if(txt.length<3){
			myp.innerHTML="Name length cannot be less than 3";
		    return false;
		}else{
			return true;
		}
	}
}

function validateHobbies(){
	var cnt=0;
	hobbies=document.getElementsByName("hobbies");
	for(var i=0;i<hobbies.length;i++){
		if(hobbies[i].checked==true){
			cnt++;
		}
	}
	if(cnt<2){
		document.getElementById("hbmsg").innerHTML="select minimum 2 hobbies";
		return false;
	}
	else{
		return true;
	}
}


validatedata=function(){
	var nm=validateName();
	var hb=validateHobbies();
	if (nm==true && hb==true){
		return true;
	}
	else{
		return false;
	}
}