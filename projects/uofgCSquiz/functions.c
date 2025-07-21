#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <strings.h>
#include "header.h"

#define MAXQUESTIONS 6

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

typedef struct Question {
    int id;
    int points;
    int completed;
} Question;

void firstYearQuestions () {

    //index randomizer
    srand(time(NULL));
    Question q[MAXQUESTIONS] = {0};
    int questionsAsked = 0;
    char buffer[255];
    char questionChoice[50];

//claud.ai code
while (questionsAsked < 6) {
    // Pick a random question that hasn't been asked yet
    int questionNumber;
    do {
        questionNumber = rand() % 6;
    } while (q[questionNumber].completed == 1);

    // DON'T mark as completed here!
    q[questionNumber].id = questionNumber;
    printf("\nQuestion %d/6 (ID: %d)\n", questionsAsked + 1, questionNumber);

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
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0) {
	    printf("Incorrect. (Answer: 'D')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'C')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'A')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 4
    else if (q[questionNumber].id == 4) {
	divider(70);
	printf("\nQuestion: What is the standard amount of electives you can take in one semester?\n");
	printf(
	"\nA. 3"
	"\nB. 1"
	"\nC. 2"
	"\nD. 4"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "C") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'C')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 5
    else if (q[questionNumber].id == 5) {
	divider(70);
	printf("\nQuestion: Which course is not mandatory in semester one?\n");
	printf(
	"\nA. CIS*1300"
	"\nB. CIS*1050"
	"\nC. CIS*1910"
	"\nD. MATH*1200"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }
    }

    //calculate & print total points
    int totalPoints = q[0].points + q[1].points + q[2].points + q[3].points + q[4].points + q[5].points;
    printf("\nTotal points %d/6\n", totalPoints);
}

void secondYearQuestions () {
    //index randomizer
    srand(time(NULL));
    Question q[MAXQUESTIONS] = {0};
    int questionsAsked = 0;
    char buffer[255];
    char questionChoice[50];

//claud.ai code
while (questionsAsked < 6) {
    // Pick a random question that hasn't been asked yet
    int questionNumber;
    do {
        questionNumber = rand() % 6;
    } while (q[questionNumber].completed == 1);

    // DON'T mark as completed here!
    q[questionNumber].id = questionNumber;
    printf("\nQuestion %d/6 (ID: %d)\n", questionsAsked + 1, questionNumber);

    //question 0
    if (q[questionNumber].id == 0) {
	divider(70);
	printf("\nQuestion: Which programming language is primarily taught in CIS*2430?\n");
	printf(
	"\nA. Python"
	"\nB. Java"
	"\nC. C++"
	"\nD. JavaScript"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: What does SQL stand for?\n");
	printf(
	"\nA. Structured Query Language"
	"\nB. Simple Query Language"
	"\nC. System Query Language"
	"\nD. Sequential Query Language"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "A") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'A')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: Which data structure uses LIFO (Last In, First Out)?\n");
	printf(
	"\nA. Queue"
	"\nB. Stack"
	"\nC. Array"
	"\nD. Linked List"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: What is the time complexity of binary search?\n");
	printf(
	"\nA. O(n)"
	"\nB. O(log n)"
	"\nC. O(n^2)"
	"\nD. O(1)"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 4
    else if (q[questionNumber].id == 4) {
	divider(70);
	printf("\nQuestion: Which of the following is NOT a principle of Object-Oriented Programming?\n");
	printf(
	"\nA. Encapsulation"
	"\nB. Inheritance"
	"\nC. Compilation"
	"\nD. Polymorphism"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "C") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'C')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 5
    else if (q[questionNumber].id == 5) {
	divider(70);
	printf("\nQuestion: What does HTML stand for?\n");
	printf(
	"\nA. Hypertext Markup Language"
	"\nB. High Tech Modern Language"
	"\nC. Home Tool Markup Language"
	"\nD. Hypertext Machine Language"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "A") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'A')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }
    }

    //calculate & print total points
    int totalPoints = q[0].points + q[1].points + q[2].points + q[3].points + q[4].points + q[5].points;
    printf("\nTotal points %d/6\n", totalPoints);
}

void thirdYearQuestions () {
    //index randomizer
    srand(time(NULL));
    Question q[MAXQUESTIONS] = {0};
    int questionsAsked = 0;
    char buffer[255];
    char questionChoice[50];

//claud.ai code
while (questionsAsked < 6) {
    // Pick a random question that hasn't been asked yet
    int questionNumber;
    do {
        questionNumber = rand() % 6;
    } while (q[questionNumber].completed == 1);

    // DON'T mark as completed here!
    q[questionNumber].id = questionNumber;
    printf("\nQuestion %d/6 (ID: %d)\n", questionsAsked + 1, questionNumber);

    //question 0
    if (q[questionNumber].id == 0) {
	divider(70);
	printf("\nQuestion: What is the main purpose of a compiler?\n");
	printf(
	"\nA. To debug code"
	"\nB. To translate high-level code to machine code"
	"\nC. To run programs"
	"\nD. To edit source code"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: In software engineering, what does 'SDLC' stand for?\n");
	printf(
	"\nA. Software Development Life Cycle"
	"\nB. System Design Logic Control"
	"\nC. Software Data Link Control"
	"\nD. System Development Logic Cycle"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "A") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'A')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: Which sorting algorithm has the best average-case time complexity?\n");
	printf(
	"\nA. Bubble Sort"
	"\nB. Selection Sort"
	"\nC. Merge Sort"
	"\nD. Insertion Sort"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "C") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'C')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: What is the purpose of version control systems like Git?\n");
	printf(
	"\nA. To compile code"
	"\nB. To track changes and collaborate on code"
	"\nC. To run automated tests"
	"\nD. To deploy applications"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 4
    else if (q[questionNumber].id == 4) {
	divider(70);
	printf("\nQuestion: In database design, what does 'normalization' refer to?\n");
	printf(
	"\nA. Making data consistent and reducing redundancy"
	"\nB. Increasing database performance"
	"\nC. Adding more tables"
	"\nD. Creating backup copies"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "A") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "B") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'A')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 5
    else if (q[questionNumber].id == 5) {
	divider(70);
	printf("\nQuestion: What is the main advantage of using APIs in software development?\n");
	printf(
	"\nA. They make code run faster"
	"\nB. They allow different software components to communicate"
	"\nC. They reduce memory usage"
	"\nD. They automatically fix bugs"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }
    }

    //calculate & print total points
    int totalPoints = q[0].points + q[1].points + q[2].points + q[3].points + q[4].points + q[5].points;
    printf("\nTotal points %d/6\n", totalPoints);
}

void fourthYearQuestions () {
    //index randomizer
    srand(time(NULL));
    Question q[MAXQUESTIONS] = {0};
    int questionsAsked = 0;
    char buffer[255];
    char questionChoice[50];

//claud.ai code
while (questionsAsked < 6) {
    // Pick a random question that hasn't been asked yet
    int questionNumber;
    do {
        questionNumber = rand() % 6;
    } while (q[questionNumber].completed == 1);

    // DON'T mark as completed here!
    q[questionNumber].id = questionNumber;
    printf("\nQuestion %d/6 (ID: %d)\n", questionsAsked + 1, questionNumber);

    //question 0
    if (q[questionNumber].id == 0) {
	divider(70);
	printf("\nQuestion: What is the primary goal of machine learning?\n");
	printf(
	"\nA. To replace human programmers"
	"\nB. To enable computers to learn patterns from data"
	"\nC. To make computers faster"
	"\nD. To reduce software bugs"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: In cybersecurity, what does 'encryption' protect against?\n");
	printf(
	"\nA. Hardware failures"
	"\nB. Unauthorized data access"
	"\nC. Software bugs"
	"\nD. Network congestion"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: What is the main benefit of cloud computing?\n");
	printf(
	"\nA. Faster internet speeds"
	"\nB. Scalable and on-demand resources"
	"\nC. Better graphics processing"
	"\nD. Automatic code generation"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
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
	printf("\nQuestion: In project management, what does 'Agile methodology' emphasize?\n");
	printf(
	"\nA. Detailed documentation"
	"\nB. Iterative development and customer feedback"
	"\nC. Strict deadlines"
	"\nD. Large team sizes"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 4
    else if (q[questionNumber].id == 4) {
	divider(70);
	printf("\nQuestion: What is the purpose of Big Data analytics?\n");
	printf(
	"\nA. To store more data"
	"\nB. To extract insights from large datasets"
	"\nC. To compress files"
	"\nD. To speed up computers"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }

    //question 5
    else if (q[questionNumber].id == 5) {
	divider(70);
	printf("\nQuestion: In software architecture, what is a 'microservice'?\n");
	printf(
	"\nA. A very small application"
	"\nB. A small, independently deployable service"
	"\nC. A type of database"
	"\nD. A programming language"
	"\n\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", questionChoice);
	printf("\nYour choice: %s.\n", questionChoice);

	if (strcasecmp(questionChoice, "B") == 0) {
	    printf("Correct!\n");
	    q[questionNumber].points = 1;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else if (strcasecmp(questionChoice, "A") == 0 || strcasecmp(questionChoice, "C") == 0 || strcasecmp(questionChoice, "D") == 0) {
	    printf("Incorrect. (Answer: 'B')\n");
	    q[questionNumber].points = 0;
	    q[questionNumber].completed = 1;
	    questionsAsked++;;
	}
	else {
	    printf("Error: Invalid choice.\n");
	}
	divider(70);
	printf("\n");
    }
    }

    //calculate & print total points
    int totalPoints = q[0].points + q[1].points + q[2].points + q[3].points + q[4].points + q[5].points;
    printf("\nTotal points %d/6\n", totalPoints);
}
