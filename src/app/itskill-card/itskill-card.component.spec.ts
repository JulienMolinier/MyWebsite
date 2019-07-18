import {async, ComponentFixture, TestBed} from '@angular/core/testing';

import {ItskillCardComponent} from './itskill-card.component';

describe('ItskillCardComponent', () => {
  let component: ItskillCardComponent;
  let fixture: ComponentFixture<ItskillCardComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ItskillCardComponent]
    })
      .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(ItskillCardComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
