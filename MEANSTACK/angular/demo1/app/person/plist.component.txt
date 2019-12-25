import { Component } from '@angular/core';

@Component({
 selector:'plist',
 templateUrl:'./plist.component.html',
 styleUrls:['./plist.component.css']

})
export class PlistComponent{
    parr=[{id:12,name:"Kishori",sal:12345},
    {id:13,name:"Rajan",sal:222222},
    {id:14,name:"Revati",sal:33333}];
}