//Guilherme Bortoletto
//Ryan Sakurai
//Vinicius Castro

#ifndef MACROS_H
#define MACROS_H


enum Level {LOW, MID, HIGH};
typedef enum Level Level;

typedef struct Task {
  char description[100];
  Level priority;
} Task;


enum Action {ADDITION, REMOVAL};
typedef enum Action Action;

typedef struct Modification {
  Action description;
  Task target;
} Modification;


#endif