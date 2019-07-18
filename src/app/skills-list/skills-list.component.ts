import {Component, OnInit} from '@angular/core';
import {LANGUAGE_MOCKED} from '../../mocks/languages.mocks';
import {Language} from '../../models/language';
import {ItSkill} from '../../models/itskill';
import {ITSKILLS_MOCKED} from '../../mocks/itskills';

@Component({
  selector: 'app-skills-list',
  templateUrl: './skills-list.component.html',
  styleUrls: ['./skills-list.component.css']
})
export class SkillsListComponent implements OnInit {

  languageList: Language[] = LANGUAGE_MOCKED;
  itSkillsList: ItSkill[] = ITSKILLS_MOCKED;

  constructor() {
  }

  ngOnInit() {
  }

}
