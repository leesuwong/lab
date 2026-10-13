#include <stdio.h>
#define MAX_STUDENTS 50

void bubbleSort(int* arr, int size);

void bubbleSort(int* arr, int size){
    for (int i = 0; i < size -1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
        
    }
}

int main(){
    int student;

    printf("학생 수를 입력하세요. (최대 50명) : ", MAX_STUDENTS);
    scanf("%d", &student);

    if (student>MAX_STUDENTS){
        printf("오류발생. \n");
        return 1;
    }

    int* gradePointer;
    int grades[MAX_STUDENTS];
    gradePointer = grades;

    for (int i = 0; i < student; i++)
    {
        printf("%d번 학생의 최종 성적을 입력하세요. : ", i+1);
        scanf("%d", gradePointer, student);
    }

    bubbleSort(gradePointer, student);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i < student; i++)
    {
        printf("%d ", *(gradePointer + i));
    }
    printf("\n\n최고 성적 : %d\n", *(gradePointer + student - 1));
    printf("최하 성적 : %d\n", *gradePointer);

    return 0;
    
    

}