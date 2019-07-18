import {Component, Input, OnInit} from '@angular/core';
import {Career} from '../../models/career';

@Component({
  selector: 'app-career-card',
  templateUrl: './career-card.component.html',
  styleUrls: ['./career-card.component.css']
})
export class CareerCardComponent implements OnInit {

  @Input()
  career: Career;

  constructor() {
  }

  ngOnInit() {
  }

}
