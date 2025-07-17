#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>
#include "header.h"

#define MAXQUESTIONS 5

void divider (int num) {

    for (int i = 0; i <= num; i++) {
	printf("*");
    }
}

void menuChoiceOne () {

    printf(
    "\nQuizzes are based on yearly schedules (from 1-4),"
    "\nnot the entire degree (that would be too hard :p)."
    );

    char buffer[255];
    int programYear;

    while (1) {
    printf("\n");
    printf("\nEnter your year: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &programYear);

    switch (programYear) {
	case 1:
	    printf("You selected: First year\n");
	    firstYearQuestions();
	break;
	case 2:
	    printf("You selected: Second year\n");
	    secondYearQuestions();
	break;
	case 3:
	    printf("You selected: Third year\n");
	    thirdYearQuestions();
	break;
	case 4:
	    printf("You selected: Fourth year\n");
	    fourthYearQuestions();
	break;
	}

	if (programYear < 1 || programYear > 4) {
	    printf("Error: Invalid option please try again.\n");
	}
	else {
	    break;
	}
    }
}

void firstYearQuestions () {

    typedef struct Question {
	int id;
    } Question;

    //index randomizer
    srand(time(NULL));
    Question q[MAXQUESTIONS];

    int questionNumber = rand() % 5;
    q[questionNumber].id = questionNumber;

    printf("\nYour random index: %d\n", q[questionNumber].id);

    char buffer[255];
    char questionChoice[50];

    //question 0

    if (q[questionNumber].id == 0) {
	divider(70);
	printf("\nQuestion: How many credits do you complete by the end of one semester?\n");
	printf(
	"\nA. 2"
	"\nB. 2.5"
	"\nC. 0.5"
	"\nD. 4\n"
	"\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
    }

    //question 1

    else if (q[questionNumber].id == 1) {
	divider(70);
	printf("\nQuestion: Which course is not included in semester one?\n");
	printf(
	"\nA. CIS*1300"
	"\nB. CIS*1910"
	"\nC. MATH*1200"
	"\nD. MATH*1080\n"
	"\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "D") == 0) {
	    printf("Correct!\n");
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0) {
	    printf("Incorrect. (Answer: 'D')\n");
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
    }
}


void secondYearQuestions () {

}

void thirdYearQuestions () {

}

void fourthYearQuestions () {

}
