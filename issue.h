#ifndef CANDIDATE_H_
#define CANDIDATE_H_

typedef struct Choices {
    char description[255];
    int votes;
} CHOICE;
typedef struct Issues {
    char name[255];
    char description[255];
    CHOICE choices[10];
} ISSUE;

void printissue(ISSUE *i);

#endif