/**
 * @file Add_Student.c
 * @author 259819-Preet Kamalnayan Pandit (https://github.com/259819/LnT_MiniProject.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
//#include <stdio_ext.h>
#include <stdlib.h>

#include<../inc/Student.h>

/**
 * @brief adding the record of new student
 * 
 * @param Student 
 * @return int 
 */

int Add_Student(Student_t *Student) {  

  FILE *fptr;
  if ((fptr = fopen("Students.bin", "ab+")) == NULL) {
    return -1;
  }
  fwrite(Student, sizeof(Student_t), 1, fptr);

  fflush(stdin);
  fclose(fptr);

  return 0;
}
/**
 * @brief Create a new Student object
 * 
 * @param Student 
 */

void create_new_Student(Student_t *Student) { 
  printf("\nEnter name: ");
  get_data(Student->name);
  printf("\nEnter the Standard: ");
  get_data(Student->standard);
  printf("\nEnter Email ID: ");
  get_data(Student->email_id);
    printf("\nEnter GPA: ");
  get_data(Student->GPA);
    printf("\nEnter Sports: ");
  get_data(Student->sports);
}
