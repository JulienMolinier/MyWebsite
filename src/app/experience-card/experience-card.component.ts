import {Component, Input, OnInit} from '@angular/core';
import {Education} from '../../models/education';

@Component({
  selector: 'app-experience-card',
  templateUrl: './experience-card.component.html',
  styleUrls: ['./experience-card.component.css']
})
export class ExperienceCardComponent implements OnInit {

  @Input()
  education: Education;

  constructor() {
  }

  ngOnInit() {
  }

}
