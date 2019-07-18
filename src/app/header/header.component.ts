import {Component, OnInit} from '@angular/core';
import {MatIconRegistry} from '@angular/material';
import {DomSanitizer} from '@angular/platform-browser';
import {Router} from '@angular/router';

@Component({
  selector: 'app-header',
  templateUrl: './header.component.html',
  styleUrls: ['./header.component.css']
})
export class HeaderComponent implements OnInit {
  constructor(iconRegistry: MatIconRegistry, sanitizer: DomSanitizer, private router: Router) {
    iconRegistry.addSvgIcon(
      'home',
      sanitizer.bypassSecurityTrustResourceUrl('../assets/icons/home-solid.svg'));
    iconRegistry.addSvgIcon(
      'files',
      sanitizer.bypassSecurityTrustResourceUrl('../assets/icons/folder-open-solid.svg'));
    iconRegistry.addSvgIcon(
      'contact',
      sanitizer.bypassSecurityTrustResourceUrl('../assets/icons/id-badge-solid.svg'));
  }

  ngOnInit() {
  }

  goHome() {
    this.router.navigate(['/home']);
  }

  goContact() {
    this.router.navigate(['/contact']);
  }

  openCV() {
    this.router.navigate(['/cv']);
  }

}
