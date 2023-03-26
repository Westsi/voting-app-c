#include "issue.h"
#include<stdio.h>

void printissue(ISSUE *i) {
    ISSUE ii = *i;
    printf("Name: %s\nDescription: %s\nChoices: %s\n", ii.name, ii.description, ii.choices[0].description); // change choices printing method
}