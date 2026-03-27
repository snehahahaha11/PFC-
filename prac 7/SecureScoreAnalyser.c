/* SecureScoreAnalyser.c
   Practical 7, Part 3
   Simple secure score analysis based on SecureArrayProcessing.c
   Sneha Yadav */

#include <stdio.h>
#include <stdbool.h>

#define MAX_ARRAY_SIZE 100
#define ARRAY_SIZE 5
#define MIN_SCORE 0
#define MAX_SCORE 100

bool validateArrayParams(int *arr, int size){
    if(arr==NULL){
        printf("Error: Array pointer is NULL\n");
        return false;
    }

    if(size<=0){
        printf("Error: Invalid array size(%d)\n", size);
        return false;
    }

    if(size>MAX_ARRAY_SIZE){
        printf("Error: Array size too large(%d > %d)\n",
               size, MAX_ARRAY_SIZE);
        return false;
    }

    return true;
}

bool validateScore(int score){
    if(score<MIN_SCORE||score>MAX_SCORE){
        printf("Error: Score %d not in range %d-%d\n", 
               score, MIN_SCORE, MAX_SCORE);
        return false;
    }

    return true;
}

void clearBuffer(){
    int c;
    while((c=getchar())!='\n' && c!=EOF);
}

bool secureCalculateSum(int *arr, int size, int *result){
    if(result==NULL){
        printf("Error: Result pointer is NULL\n");
        return false;
    }

    if(!validateArrayParams(arr, size)){
        return false;
    }

    int sum=0;
    for(int i=0; i<size; i++){
        sum+=*(arr+i);
    }

    *result=sum;
    return true;
}

bool secureFindMax(int *arr, int size, int *maxValue){
    if(maxValue==NULL){
        printf("Error: Max value pointer is NULL\n");
        return false;
    }
    if(!validateArrayParams(arr, size)){
        return false;
    }
    int max=*arr;
    for(int i=1; i<size; i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    *maxValue=max;
    return true;
}

bool secureFindMin(int *arr, int size, int *minValue){
    if(minValue==NULL){
        printf("Error: Min value pointer is NULL\n");
        return false;
    }
    if(!validateArrayParams(arr, size)){
        return false;
    }
    int min=*arr;
    for(int i=1; i<size; i++){
        if(*(arr+i)<min){
            min=*(arr+i);
        }
    }
    *minValue=min;
    return true;
}

bool secureCalculateAverage(int *arr, int size, double *result){
    if(result==NULL){
        printf("Error: Result pointer is NULL\n");
        return false;
    }
    if(!validateArrayParams(arr, size)){
        return false;
    }
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=*(arr+i);
    }
    *result=(double)sum/size;
    return true;
}

bool secureAccessElement(int *arr, int size, int index, int *value){
    if(!validateArrayParams(arr, size)||value==NULL){
        return false;
    }

    if(index<0||index>=size){
        printf("Error: Index %d out of bounds [0, %d)\n",
               index, size);
        return false;
    }

    *value=*(arr+index);
    return true;
}

bool readScores(int *arr, int size){
    if(!validateArrayParams(arr, size)){
        return false;
    }

    printf("Enter %d scores(0-100):\n", size);
    for(int i=0; i<size; i++){
        printf("  Score [%d]: ", i);
        if(scanf("%d",(arr+i))!=1){
            printf("Error: Invalid input\n");
            clearBuffer();
            return false;
        }

        if(!validateScore(*(arr+i))){
            return false;
        }
    }

    clearBuffer();
    return true;
}

int main(){
    int scores[ARRAY_SIZE];
    int sum, max, min, value;
    double average;

    printf("=== Secure Score Analyser ===\n\n");

    printf("=== Test 1: Read and Process Scores ===\n");
    if(readScores(scores, ARRAY_SIZE)){
        printf("\nScores entered successfully\n");
        
        if(secureCalculateSum(scores, ARRAY_SIZE, &sum)){
            printf("Sum: %d\n", sum);
        }

        if(secureCalculateAverage(scores, ARRAY_SIZE, &average)){
            printf("Average: %.2f\n", average);
        }

        if(secureFindMax(scores, ARRAY_SIZE, &max)){
            printf("Maximum: %d\n", max);
        }

        if(secureFindMin(scores, ARRAY_SIZE, &min)){
            printf("Minimum: %d\n", min);
        }
    }

    printf("\n=== Test 2: NULL Pointer ===\n");
    if(!secureCalculateSum(NULL, ARRAY_SIZE, &sum)){
        printf("Handled NULL pointer safely\n");
    }

    printf("\n=== Test 3: Invalid Size ===\n");
    if(!secureCalculateSum(scores, -5, &sum)){
        printf("Rejected negative size\n");
    }

    printf("\n=== Test 4: Bounds Checking ===\n");
    if(secureAccessElement(scores, ARRAY_SIZE, 2, &value)){
        printf("Element at index 2: %d\n", value);
    }

    if(!secureAccessElement(scores, ARRAY_SIZE, 10, &value)){
        printf("Prevented buffer overflow\n");
    }

    printf("\n=== Test 5: Score Range(0-100) ===\n");
    printf("Testing validateScore:\n");
    printf("  -5: %s\n", validateScore(-5)?"OK":"Rejected");
    printf("  150: %s\n", validateScore(150)?"OK":"Rejected");
    printf("  0: %s\n", validateScore(0)?"Accepted":"Error");
    printf("  100: %s\n", validateScore(100)?"Accepted":"Error");

    printf("\n=== Test 6: Edge Case(Single Score) ===\n");
    int single[1]={75};
    if(secureFindMin(single, 1, &min) && secureFindMax(single, 1, &max)){
        printf("Single score [75]: Min=%d, Max=%d\n", min, max);
    }

    printf("\n=== All tests completed! ===\n");
    return 0;
}