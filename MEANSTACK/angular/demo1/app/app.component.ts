import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'myapp';
  Name="Rajan"
  age=15;
  changeName(){
     if(this.Name=="Rajan"){
        this.Name="Kishori";
  }else{
    this.Name="Rajan";
  }
}
}
