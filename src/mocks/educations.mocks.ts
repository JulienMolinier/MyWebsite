import {Education} from '../models/education';

export const EDUCATION_MOCKED: Education[] = [
  {
    diploma: 'Graduate School Of Engineering',
    school: 'Polytech Nice Sophia',
    location: 'University of Nice-Sophia-Antipolis (France)',
    description: 'Master’s degree in engineering specialized in cybersecurity in applications and networks.',
    picturePath: 'assets/images/polytechNice.jpg',
    linkToSchoolWebsite: 'https://polytech.univ-cotedazur.fr/',
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
