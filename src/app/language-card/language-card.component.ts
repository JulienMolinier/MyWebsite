import {Component, Input, OnInit} from '@angular/core';
import {Language} from '../../models/language';

@Component({
  selector: 'app-language-card',
  templateUrl: './language-card.component.html',
  styleUrls: ['./language-card.component.css']
})
export class LanguageCardComponent implements OnInit {

  @Input()
  language: Language;

  constructor() {
  }

  ngOnInit() {
  }

}
