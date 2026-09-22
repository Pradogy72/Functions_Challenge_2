#ifndef STUDENTGRADE_GRADEFUNCTIONS_H
#define STUDENTGRADE_GRADEFUNCTIONS_H

void inputGrades(double& g1, double& g2, double& g3);
double calculateAverage(const double g1, const double g2, const double g3);
char getLetterGrade(const double average);

#endif //STUDENTGRADE_GRADEFUNCTIONS_H