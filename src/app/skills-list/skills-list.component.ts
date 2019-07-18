import {Component, OnInit} from '@angular/core';
import {LANGUAGE_MOCKED} from '../../mocks/languages.mocks';
import {Language} from '../../models/language';

@Component({
  selector: 'app-skills-list',
  templateUrl: './skills-list.component.html',
  styleUrls: ['./skills-list.component.css']
})
export class SkillsListComponent implements OnInit {

  languageList: Language[] = LANGUAGE_MOCKED;

  constructor() {
  }

  ngOnInit() {
  }

}
