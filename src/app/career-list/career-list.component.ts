import {Component, OnInit} from '@angular/core';
import {Career} from '../../models/career';
import {CAREER_MOCKED} from '../../mocks/careers.mocks';

@Component({
  selector: 'app-career-list',
  templateUrl: './career-list.component.html',
  styleUrls: ['./career-list.component.css']
})
export class CareerListComponent implements OnInit {
  careerList: Career[] = CAREER_MOCKED;

  constructor() {
  }

  ngOnInit() {
  }

}
