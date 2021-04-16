# Requirements
## Introduction
* Student Record System are often viewed as paperwork produed for the education bureaucracy. However, a well designed automated Student Record System yields many benefits. The most important benefit is the ability to find or report or update information about any individual student within a few seconds. Secondly, the efficiency in processing and exchanging student records among institutes when required becomes very easy.

* Student Record System thus plays a keyrole in the overall functioning of the education system; but more importantly, they increase an institutes ability to meet the needs of a student. In times when there were no computers, maintaining records was quite a labourous task as it used to be on paper and it would take hours and hours of time and would cause lots of paper wastage.

* A computerized Student Record System will eliminate those cumbersome tasks and will improve efficiency by great extent.

## Research
* There are 100s and 1000s of students studying in educational institutes and compare to those numbers, the strengh of staff and management is way less. Pen-paper based management of student record is feasible and was in existence in past and is still in practice in some rural areas but with increase in number of youths, it has become very time consuming and labourous task. Records which are maintained for future help becomes a source of stress.

* Automated SRS helps to avoid those issues. SRS refers to a number of efficient automated systems designed for recording student data and perform functions like display, modify, delete, update save etc. Some Student Record Systems are made for general purpose while some Student Record System are made for specific purpose like exam performance records,  progress records etc.


**Benefits:**


* Less burden on Staff


* Better management of Records


* Reduced wastage of paper


* Time saving


* Improved Communication


* Easy tracking of all students 


* Reduction  of human labour and workload



## Cost and Features

--Time | Feature | Cost(per 
------|----------|---------
Before 1998| Paper Based Management System(on an average, a school used 600000 pages every year and cost per page  0.25 INR)| 600K INR
1995-1998| Introduction of Computer Based Record Management System Method(1995 patent filed and 1998 patent granted) | 500k INR
1998-2005| Expansion of Computer usage in schools, academies and institutes | 1000k INR
Present | updated software and maintainance | 150k INR(per 1000 Students)

## Ageing

* If the first period was about system building and the second period was about its expansion and the internal renegotiation—among students and schools, and schools and each other—that massification required, the current period is characterized by new external demands that have been placed on the system by several forms of accountability: privacy, equity, and efficiency.
* Though all of these pressures predate the current period in some form, major shifts in American political dynamics and in the availability of computing power and digital technologies have converged to amplify old concerns and produce new ones.
* The major upshot of these developments has been to make the student record not just an object of internal (re-)negotiation among postsecondary institutions but one subject to external demands as well. Considering these new developments in-light of the broader history detailed above provides an opportunity to identify the new opportunities as well as the chronic challenges ushered in by the digital era of the student record.

## Defining Our System
   **Assumptions**
   
   Few systems already exists in the network of institutes and other high level  bodies with which our Student Record System will interact.
   
   For example: 
   
   * Student Record and Management Systems of NAAC(NATIONAL ASSESSMENT AND ACCREDITATION COUNCIL)
   
   * Student Record and Management Systems of NBA(The National Board of Accreditation)
   
   * AICTE(All India Council for Technical Education )
   
   * ICSE(The Central Board of Secondary Education), CBSE(The Central Board of Secondary Education), State Boards
   
   ![](https://github.com/259819/LnT_MiniProject/blob/master/Images/define.png)
   
   
   **Explanation**
   
   
   Student Record System holds the capability to perform following functions:
   
  
   * Create a patient record


   * Delete a patient record


   * Read a patient record


   * Update a patient record


   * Save record to file

  
   * Read record from file
  
  
   Other benefits of Student Record System is that it can communicate with other Record Systems interms of exchange of data. The System is managed by a operator or an Admin.
   
 
## SWOT ANALYSIS
![**STUDENT RECORD SYSTEM**](https://github.com/259819/LnT_MiniProject/blob/master/Images/Slide1.PNG)

# 4W&#39;s and 1&#39;H

## Who:

* Small scale to large scale educational institutes.

* Various academies of different field.

## What:

* Manual Paper work becomes very labourous and time consuming task. For students in strength of 1000s.

## When:

* The problem has been around for decades but it was the only option in absence of computers and automated systems but advancement in technologies and its availability at most places has reduced the problem to greater extent.

## Where:

* The problem is expected to be present across the country.

## How:

* The problem was known because of the inconvinience it  caused to staff, management and other people related to it. If not solved, it can cause a large technology gap which will eventually cause a delay in coping up with the new emerging automated systems along with other existing issues of the manual systems. 


# Detail requirements
## High Level Requirements:

 ID | Description | Status (Implemented/Future)
------ |-----------| --------------
HR01 | The admin should be able to add new student records| Technical-Implemented
HR02 | The admin should be able to update the student records| Technical-Implemented
HR03 | The admin should be able to delete the student records| Technical-Implemented
HR04 | The admin should be able to read the student records| Technical-Implemented
HR05 | The admin should be able to save the student record to file| Technical-Implemented
HR06 | The admin shoould be able to read student data from the file| Technical-Implemented
HR07 | There should be no data loss in case of system failure | Future
HR08 |There should be no data breach or leakage and the data should be safe| Future

##  Low level Requirements:
ID | Description | HLR-ID | Status
------|-------------|--------|--------
LR01 |New Records shall be added by providing all the asked information and the roll no. should be unique or else student record should not be accepted|HR01|Implemented
LR02 |If user searches for an invalid Roll no. ,"no record found!" message should be displayed|HR04|Implemented
LR03| To modify a record, user needs to search by name, if no record found, print the message"no record found" else if modification is successful then print "modification successful"|HR02|Implemented
LR04|User needs to search by name for the student to delete the record. If no record is found then display the message "no record found"|HR03|Implemented
LR05| when the system  is turned on, all the options should be displayed on screen(add,modify,delete,search,exit). If incorrect input is given by user then, print the message "selected option unavailable"| HRxx|Implemented

