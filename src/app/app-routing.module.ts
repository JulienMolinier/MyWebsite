import {NgModule} from '@angular/core';
import {RouterModule, Routes} from '@angular/router';
import {ContactComponent} from './contact/contact.component';
import {HomeComponent} from './home/home.component';
import {CvComponent} from './cv/cv.component';


const routes: Routes = [
  {path: '', redirectTo: 'home', pathMatch: 'full'},
  {path: 'contact', component: ContactComponent},
  {path: 'home', component: HomeComponent},
  {path: 'cv', component: CvComponent}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule {
}
