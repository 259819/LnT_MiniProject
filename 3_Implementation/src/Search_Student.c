/**
 * @file Search_Student.c
 * @author 259819-Preet Kamalnayan Pandit (https://github.com/259819/LnT_MiniProject.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<../inc/Student.h>


int Search_Student(const char *name) {
  Student_t Student;
  FILE *f;

  f = fopen("Students.bin", "rb");
  if (f == NULL) {
    return -2;
  }

  while (fread(&Student, sizeof(Student_t), 1, f) == 1) {
    if (strcmp(Student.name, name) == 0) {
      printf("\n details for %s:\n", name);
      printf("Name = %s\nStandard = %s\nEmail ID = %s\nGPA = %s\nsports activity = %s\n\n ", Student.name,
             Student.standard, Student.email_id,Student.GPA,Student.sports);
      fclose(f);
      return 0;
    }
  }
  fclose(f);
  return -1;
}