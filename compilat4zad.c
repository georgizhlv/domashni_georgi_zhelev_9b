#ifndef PERSON_H_
#define PERSON_H_

struct Person {
  char firstname[20];
  char secondname[20];
  char surname[20];
  int birth;
};

#endif

#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

struct SchoolClass {
   struct Person students[26];
    char section;
    int classNumber;
    Person classTeacher;
}

#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

struct SchoolRoom {
    int roomNumber;
    struct Person peopleInRoom[50];
};

#endif

#include "schoolclass.h"
#include "schoolroom.h"

struct School {
    struct SchoolClass schoolClasses[20];
    struct SchoolRoom schoolRooms[10];
};

int main() {
    struct School mySchool;
    
    return 0;
}