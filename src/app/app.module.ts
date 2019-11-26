import {BrowserModule} from '@angular/platform-browser';
import {NgModule} from '@angular/core';

import {AppRoutingModule} from './app-routing.module';

import {AppComponent} from './app.component';
import {HeaderComponent} from './header/header.component';
import {ContactComponent} from './contact/contact.component';
import {ExperienceCardComponent} from './experience-card/experience-card.component';
import {EducationListComponent} from './education-list/education-list.component';
import {CareerListComponent} from './career-list/career-list.component';
import {FooterComponent} from './footer/footer.component';
import {HttpClientModule} from '@angular/common/http';
import {HomeComponent} from './home/home.component';
import {MatButtonModule, MatButtonToggleModule, MatCardModule, MatIconModule, MatToolbarModule} from '@angular/material';
import {CvComponent} from './cv/cv.component';
import {CareerCardComponent} from './career-card/career-card.component';
import {SkillsListComponent} from './skills-list/skills-list.component';
import {LanguageCardComponent} from './language-card/language-card.component';
import {FlexModule} from '@angular/flex-layout';
import {BarRatingModule} from 'ngx-bar-rating';
import {ItskillCardComponent} from './itskill-card/itskill-card.component';
import {HobbyCardComponent} from './hobby-card/hobby-card.component';

@NgModule({
  declarations: [
    AppComponent,
    HeaderComponent,
    ContactComponent,
    ExperienceCardComponent,
    EducationListComponent,
    CareerListComponent,
    FooterComponent,
    HomeComponent,
    CvComponent,
    CareerCardComponent,
    SkillsListComponent,
    LanguageCardComponent,
    ItskillCardComponent,
    HobbyCardComponent
  ],
  imports: [
    BrowserModule,
    HttpClientModule,
    AppRoutingModule,
    MatToolbarModule,
    MatIconModule,
    MatButtonToggleModule,
    MatButtonModule,
    MatCardModule,
    FlexModule,
    BarRatingModule,
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule {
}
