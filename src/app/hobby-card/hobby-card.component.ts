import {Component, Input, OnInit} from '@angular/core';

@Component({
  selector: 'app-hobby-card',
  templateUrl: './hobby-card.component.html',
  styleUrls: ['./hobby-card.component.css']
})
export class HobbyCardComponent implements OnInit {

  @Input()
  hobby: Hobby;

  constructor() {
  }

  ngOnInit() {
  }

}
