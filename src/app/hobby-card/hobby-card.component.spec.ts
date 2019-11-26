import {async, ComponentFixture, TestBed} from '@angular/core/testing';

import {HobbyCardComponent} from './hobby-card.component';

describe('HobbyCardComponent', () => {
  let component: HobbyCardComponent;
  let fixture: ComponentFixture<HobbyCardComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [HobbyCardComponent]
    })
      .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(HobbyCardComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
