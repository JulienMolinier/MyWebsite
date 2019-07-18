import {Component, OnInit} from '@angular/core';
import {Education} from '../../models/education';
import {EDUCATION_MOCKED} from '../../mocks/educations.mocks';

@Component({
  selector: 'app-education-list',
  templateUrl: './education-list.component.html',
  styleUrls: ['./education-list.component.css']
})
export class EducationListComponent implements OnInit {

  private educationList: Education[] = EDUCATION_MOCKED;

  constructor() {
  }

  ngOnInit() {
  }

}
