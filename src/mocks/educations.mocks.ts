import {Education} from '../models/education';

export const EDUCATION_MOCKED: Education[] = [
  {
    diploma: 'Graduate School Of Engineering',
    school: 'Polytech Nice Sophia',
    location: 'University of Nice-Sophia-Antipolis (France)',
    description: 'Second year of a master’s degree in engineering specialized in computer science, 16th out of 103 in first year',
    picturePath: 'assets/images/polytechNice.jpg',
    linkToSchoolWebsite: 'http://www.polytech.unice.fr/',
  },
  {
    diploma: 'Cycle Intégré Préparatoire',
    school: 'Polytech Montpellier',
    location: 'University of Montpellier (France)',
    description: 'A two-year in-school preparatory degree in Engineering, Graduated 455th out of 1572',
    picturePath: 'assets/images/polytechMtp.jpg',
    linkToSchoolWebsite: 'https://www.polytech.umontpellier.fr/',
  },
  {
    diploma: 'Baccalauréat Scientifique',
    school: 'Lycée BELLEVUE',
    location: '30100 Alès (France)',
    description: 'Equivalent to British ‘A’ Levels or American High School Diploma, Graduated with greatest honour, European English section',
    picturePath: 'assets/images/bellevue.jpg',
    linkToSchoolWebsite: 'https://www.institution-bellevue.fr/',
  },
];
