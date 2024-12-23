#include <stdio.h>
#include <stdlib.h>

int main(){
    //Varibales for quiz grades in the class.
    float quizWeight = 10; 
    printf("How many total quizzer are in your class?\n");
    int numQuizGrades = 0;
    scanf(); //Stores the number of quizzes in the class.
    int quizChoice = 0;
    printf("Have you calculated the total possible quiz points and the total");

        //If you already have this information calculated, just enter the values into this spot.
        int quizTotalPossible, quizTotalEarned = 0.0; //If you already calculated the total possible points and the total points you earned.
        
        //Variables if you haven't calculated the grades so far. 
        float* numQuizPossibleGrades = (float*)malloc(numQuizGrades * sizeof(float));
        float* numQuizEarnedGrades = (float*)malloc(numQuizGrades * sizeof(float));

    //Varibales for exam grades in the class. 
    float examWeight = 50;
    int examChoice = 0;
    int numExamGrades = 2; //Stores the number of quizzes in the class.

        //If you already have this information calculated, just enter the values into this spot.
        int examTotalPossible, examTotalEarned =0.0; //If you already calculated the total possible points and the total points you earned.
        
        //Variables if you haven't calculated the grades so far. 
        float* numExamPossibleGrades = (float*)malloc(numExamGrades * sizeof(float));
        float* numExamEarnedGrades = (float*)malloc(numExamGrades * sizeof(float));

    //Varibales for assignment grades in the class. 
    float assWeight =0;
    int assChoice = 0;
    int numAssGrades = 13; //Stores the number of quizzes in the class.

        //If you already have this information calculated, just enter the values into this spot.
        int assTotalPossible, assTotalEarned =0.0; //If you already calculated the total possible points and the total points you earned.
        
        //Variables if you haven't calculated the grades so far. 
        float* numAssPossibleGrades = (float*)malloc(numAssGrades * sizeof(float));
        float* numAssEarnedGrades = (float*)malloc(numAssGrades * sizeof(float));

    
    //Calculate percentage to overall grade for quiz grades. 

    //Calculate percentage to overall grade for exam grades. 

    //Calculate percentage to overall grade for assignment grades. 


}

// Make sure the array was allocated the memory correctly.
void arrayAllocateCheck (float* array){
    if(array == NULL){
        fprintf(stderr, "Memory allocation failed\n");
    }
}