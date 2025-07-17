#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>
#include "header.h"

#define MAXQUESTIONS 5

void divider (int num) {

    for (int i = 0; i < num; i++) {
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
	int points;
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
	"\nD. 4"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 1
    else if (q[questionNumber].id == 1) {
	divider(70);
	printf("\nQuestion: Which course is not included in semester one?\n");
	printf(
	"\nA. CIS*1300"
	"\nB. CIS*1910"
	"\nC. MATH*1200"
	"\nD. MATH*1080"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "D") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0) {
	    printf("Incorrect. (Answer: 'D')\n");
	    q[questionNumber].points = 0;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 2
    else if (q[questionNumber].id == 2) {
	divider(70);
	printf("\nQuestion: How long is each semseter?\n");
	printf(
	"\nA. 8 weeks"
	"\nB. 14 weeks"
	"\nC. 12 weeks"
	"\nD. 10 weeks"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "C") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'C')\n");
	    q[questionNumber].points = 0;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 3
    else if (q[questionNumber].id == 3) {
	divider(70);
	printf("\nQuestion: What is the minimum cGPA needed to avoid academic probation?\n");
	printf(
	"\nA. 1.7"
	"\nB. 2.3"
	"\nC. 0.7"
	"\nD. 3.0"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "A") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	}
	else if (strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'A')\n");
	    q[questionNumber].points = 0;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //calculate & print total points
    int totalPoints = q[0].points + q[1].points + q[2].points + q[3].points;
    printf("\nTotal points %d/5\n", totalPoints);
}

void secondYearQuestions () {

}

void thirdYearQuestions () {

}

void fourthYearQuestions () {

}
