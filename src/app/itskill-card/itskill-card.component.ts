import {Component, Input, OnInit} from '@angular/core';
import {ItSkill} from '../../models/itskill';

@Component({
  selector: 'app-itskill-card',
  templateUrl: './itskill-card.component.html',
  styleUrls: ['./itskill-card.component.css']
})
export class ItskillCardComponent implements OnInit {

  @Input()
  itSkill: ItSkill;

  constructor() {
  }

  ngOnInit() {
  }

}
