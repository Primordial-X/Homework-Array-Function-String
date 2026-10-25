#include <stdio.h>

// C Array, Function and Strings Practice Questions
// One Dimensional Arrays


/*


// Q1 Sum and Average
// Accept n integers in an array and display their sum and average.
// Use the following function declaration:
// int calculateSum(int a[], int n);


int calculateSum(int a[], int n);

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    int c;
    c = calculateSum(a, n);
    printf("Sum = %d\n", c);

    float avg;
    avg = c / n;
    printf("Average = %.2f\n", avg);
}

int calculateSum(int *a, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+= a[i];
    }
    return sum;
}
    




// Q2 Largest and Smallest Elements
// Find and display the largest and smallest elements in an array.
// Use the following function declaration:
// int findLargest(int a[], int n);
// int findSmallest(int a[], int n);


int findLargest(int a[], int n); 
int findSmallest(int a[], int n);

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    int c, d;
    c = findLargest(a, n); 
    printf("Largest: %d\n", c);

    d = findSmallest(a, n);
    printf("Smallest: %d\n", d);
    
}   

int findLargest(int a[], int n){
    int large = a[1];

    for(int i=0; i<n; i++){
        if(large < a[i]){
            large = a[i];
        }
    }

    return large;
}


int findSmallest(int a[], int n){
    int small = a[1];

    for(int i=0; i<n; i++){
        if(small > a[i]){
            small = a[i];
        }
    }

    return small;
}
    




// Q3 Count Even and Odd Elements
// Count and display the number of even and odd elements in an array.
// Use the following function declaration:
// int countEven(int a[], int n);
// int countOdd(int a[], int n);


int countEven(int a[], int n);
int countOdd(int a[], int n); 

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    int c, d;
    c = countEven(a, n); 
    printf("Even: %d\n", c);

    d = countOdd(a, n);
    printf("Odd: %d\n", d);
}

int countEven(int *a, int n){
    int count1 = 0;

    for(int i=0; i<n; i++){
        if((a[i])%2 == 0){
            count1+= 1;
        }

    }

    return count1;
}


int countOdd(int *a, int n){
    int count2 = 0;

    for(int i=0; i<n; i++){
        if((a[i])%2 != 0){
            count2+= 1;
        }    
    }

    return count2;
}
    



// Q4 Reverse an Array
// Reverse the elements within the same array and display the resulting array.
// Use the following function declaration:
// void reverseArray(int a[], int n);
// Example:
// Input: 10 20 30 40 50
// Output: 50 40 30 20 10


void reverseArray(int a[], int n);

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    reverseArray(a, n);
}

void reverseArray(int a[], int n){
    for(int i=(n-1); i>=0; i--)
    printf("%d ", a[i]);
}
    




// Q5 Search for an Element
// Search for a given element in an array. Return its index if found; otherwise, return -1.
// Use the following function declaration:
// int searchElement(int a[], int n, int key);

int searchElement(int a[], int n, int key);

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    printf("Index: %d", searchElement(a, n, key));

}

int searchElement(int a[], int n, int key){
    int ind = 0;
    for(int i=0; i<n; i++){
        if(key == a[i]){
            ind = i;
        }
    }

    if(key == a[ind])
    return ind;
    else
    return -1;
}
    





// Q6 Frequency of an Element
// Accept an array and a number. 
// Count and display how many times the given number occurs in the array.
// Use the following function declaration:
// int findFrequency(int a[], int n, int key);


int findFrequency(int a[], int n, int key);

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    printf("Index: %d", findFrequency(a, n, key));

}

int findFrequency(int a[], int n, int key){
    int count = 0;
    for(int i=0; i<n; i++){
        if(key == a[i]){
            count+= 1;
        }
    }
    return count;
}





// Q7 Bubble sort
// Sort and display the array
// Use the following function declaration:
// int bubble_sort(int a[], int n);
// Example:
// Array: 10 50 20 40 30
// Second-largest distinct element: 10 20 30 40 50

int bubble_sort(int a[], int n);

int main(){
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter arr: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    int k = bubble_sort(a, n);
    printf("\n");
    printf("Second-largest distinct element: %d", k);
}

int bubble_sort(int a[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-1)-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Array: ");
    for(int i=0; i<n; i++)
    printf("%d ", a[i]);

    return a[n-2];
}




// Two Dimensional Arrays

// Q8 Matrix Input and Display
// Accept and display the elements of a 3 by 3 matrix.
// Use the following function declaration:
// void inputMatrix(int a[][3], int rows);
// void displayMatrix(int a[][3], int rows);

void inputMatrix(int a[][3], int rows);  
void displayMatrix(int a[][3], int rows);

int main(){
    int a[3][3];

    inputMatrix(a, 3);

    displayMatrix(a, 3);
}

void inputMatrix(int a[][3], int rows){
    printf("Enter: ");

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++)
        scanf("%d", &a[i][j]);
    }
}  


void displayMatrix(int a[][3], int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
}


// Q10 Matrix Addition
// Accept two 3 by 3 matrices, add them and store the result in a third matrix. 
//Display the resulting matrix.
// Use the following function declaration:
// void addMatrices(int a[][3], int b[][3], int result[][3], int rows);


void addMatrices(int a[][3], int b[][3], int result[][3], int rows);

int main(){
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    int a[rows][3];
    int b[rows][3];
    int result[rows][3];

    printf("Enter for a[i][j]: ");
    for(int i=0; i<=(rows-1); i++){
        for(int j=0; j<=2; j++)
        scanf("%d", &a[i][j]);
    }

    printf("Enter for b[i][j]: ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<3; j++)
        scanf("%d", &b[i][j]);
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<3; j++)
        result[i][j] = a[i][j] + b[i][j];
    }
  
    addMatrices(a, b, result, rows);
}

void addMatrices(int a[][3], int b[][3], int result[][3], int rows){
    printf("\n");
    printf("Result: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<3; j++)
        printf("%d  ", result[i][j]);
        printf("\n");
    }
}



// Q11 Matrix Multiplication
// Accept two 3 by 3 matrices, multiply them and store the result in a third matrix. 
// Display the resulting matrix.
// Use the following function declaration:
// void addMatrices(int a[][3], int b[][3], int result[][3], int rows);


void addMatrices(int a[][3], int b[][3], int result[][3], int rows);

int main(){
    int a[3][3], b[3][3], result[3][3];
    int i, j;

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    addMatrices(a, b, result, 3);
    printf("Resultant Matrix:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void addMatrices(int a[][3], int b[][3], int result[][3], int rows){
    int i, j, k;
    for (i = 0; i < rows; i++){
        for (j = 0; j < 3; j++){
            result[i][j] = 0;
            for (k = 0; k < 3; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


// Call by Value
// 
// 
// Q12 Observe Changes Made by a Function
// Accept an integer in main and pass it to the function given below. The function should add 10 to its
// parameter and display it. Display the original variable again in main and explain why it remains
// unchanged.
// Use the following function declaration:
// void addTen(int value); 


void addTen(int value); 

int main(){
    int value;
    printf("Enter: ");
    scanf("%d", &value);

    printf("Value by the fun: ");
    addTen(value); 

    printf("\n");
    printf("Value in the fun: ");
    printf("%d", value);
}

void addTen(int value){
    value = value + 10;

    printf("%d", value);
}




// Call by Reference 
// 
// Q13 Swap Two Numbers
// Accept two integers and interchange their values by passing their addresses to a function.
// Use the following function declaration:
// void swap(int *a, int *b);
// Example:
// Before swapping: a = 10, b = 20
// After swapping: a = 20, b = 10

void swap(int *a, int *b);

int main(){
    int a, b;
    printf("Enter: ");
    scanf("%d%d", &a, &b);

    swap(&a, &b);
}

void swap(int *a, int *b){
    int c = *a;
    int d = *b;

    c = c ^ d;
    d = c ^ d;
    c = c ^ d;

    printf("%d %d", c, d);
}




// Q14 Return Sum Difference and Product
// Accept two integers and calculate their sum, difference and product in one function. Return all three
// results to main through pointer parameters.
// Use the following function declaration:
// void calculate(int a, int b, int *sum, int *difference, int *product);

void calculate(int a, int b, int *sum, int *difference, int *product);

int main(){
    int a, b, sum = 0, difference = 0, product = 0;

    printf("Enter: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    product = a * b;

    if(a>b || a==b)
    difference = a-b;
    else
    difference = b-a;

    calculate(a, b, &sum, &difference, &product);
}

void calculate(int a, int b, int *sum, int *difference, int *product){
    printf("Num: %d, %d\n", a, b);
    printf("Sum: %d\n", *sum);
    printf("Difference: %d\n", *difference);
    printf("Product: %d\n", *product);
}




// Q15 Find Minimum and Maximum
// Accept an array and determine its minimum and maximum elements in one function. 
// Return both results through pointer parameters.
// Use the following function declaration:
// void findMinMax(int a[], int n, int *minimum, int *maximum);

void findMinMax(int a[], int n, int *minimum, int *maximum);

int main(){
    int n;
    printf("Size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);

    int max = arr[0], min = arr[0];

    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    findMinMax(arr, n, &min, &max);
}

void findMinMax(int a[], int n, int *minimum, int *maximum){
    printf("Array: ");
    for(int i=0; i<n; i++)
    printf("%d ", a[i]);

    printf("\n");
    printf("Min: %d\n", *minimum);
    printf("Min: %d\n", *maximum);
}



// Q16 Count Positive Negative and Zero Values
// Accept an array and count its positive, negative and zero elements in one function. 
// Return all three counts through pointer parameters.
// Use the following function declaration:
// void countValues(int a[], int n, int *positive, int *negative, int *zero);

void countValues(int a[], int n, int *positive, int *negative, int *zero);

int main(){
    int n;
    printf("Size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);

    int positive = 0, negative = 0, zero = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zero+= 1;
        }else if(arr[i] > 0){
            positive+= 1;
        }else{
            negative+= 1;
        }
    } 
    
    countValues(arr, n, &positive, &negative, &zero);
}

void countValues(int a[], int n, int *positive, int *negative, int *zero){
    printf("Array: ");
    for(int i=0; i<n; i++)
    printf("%d ", a[i]);

    printf("\n");
    printf("Positive: %d\n", *positive);
    printf("Negative: %d\n", *negative);
    printf("Zero: %d\n", *zero);
}

 

// Q17 Quotient and Remainder
// Accept two integers representing a dividend and a non-zero divisor. 
// Calculate and return both quotient and remainder through pointer parameters.
// Use the following function declaration:
// void divideNumbers(int dividend, int divisor, int *quotient, int *remainder); 

void divideNumbers(int dividend, int divisor, int *quotient, int *remainder); 

int main(){
    int dividend, divisor;
    printf("Enter: ");
    scanf("%d%d", &dividend, &divisor);

    int quotient = 0, remainder = 0;

    quotient = (dividend / divisor);
    remainder = (dividend % divisor);

    divideNumbers(dividend, divisor, &quotient, &remainder); 
}

void divideNumbers(int dividend, int divisor, int *quotient, int *remainder){
    printf("Dividend: %d\n", dividend);
    printf("Divisor: %d\n", divisor);
    printf("Quotient: %d\n", *quotient);
    printf("Remainder: %d\n", *remainder);
}



// STRINGS 
// 
// Practice Questions – Strings Using Functions
// Note: Do not use any built-in string functions



// 1. Write a C program using a user-defined function to find the length of a string.
// Function Declaration: int findLength(char str[]); 

int findLength(char str[]);

int main(){
    char str[20];

    printf("Enter: ");
    fgets(str, 19, stdin);

    printf("%d", findLength(str));
}

int findLength(char str[]){
    int count = 0;
    int i = 0;

    while (str[i] != '\n'){
        count+= 1;
        i++;
    }

    return count;
}



// 2. Write a C program using a user-defined function to count the number of vowels and
// consonants in a string.
// Function Declaration: void countVowelsConsonants(char str[]); 

void countVowelsConsonants(char str[]);

int main(){
    char str[20];

    printf("Enter alphabets only: ");
    fgets(str, 19, stdin);

    countVowelsConsonants(str);
}

void countVowelsConsonants(char str[]){
    int count1 = 0, count2 = 0, i=0;

    while(str[i] != '\n'){     
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count1+= 1;
        } else{
            count2+= 1;
        }
        i++;
    }

    printf("Vowels: %d\n", count1);
    printf("Consonants: %d", count2);
}



// 3. Write a C program using a user-defined function to reverse a string.
// Function Declaration: void reverseString(char str[]); 

void reverseString(char str[]); 

int main(){
    char str[20];

    printf("Enter: ");
    fgets(str, 19, stdin);

    reverseString(str);
}

void reverseString(char str[]){
    int count=0, i=0;

    while(str[i] != '\n'){
        count+= 1;
        i++;
    }

    count-= 1;

    for(int j=count; j>=0; j--){
        printf("%c", str[j]);
    }
}



// 4. Write a C program using a user-defined function to check whether a given string is a
// palindrome or not.
// Function Declaration: int isPalindrome(char str[]);

int isPalindrome(char str[]);

int main(){
    char str[20];

    printf("Enter: ");
    fgets(str, 19, stdin);

    int k = isPalindrome(str);

    if(k)
    printf("True");
    else
    printf("False");

}

int isPalindrome(char str[]){
    int b=1, i=0, count=0;
    char arr[20];

    while (str[i] != '\n'){
        count+= 1;
        i++;
    }

    count-= 1;
    
    int k=0;
    for(int j=count; j>=0; j--){
        arr[k] = str[j];
        k++;
    }

    for(int i=0; i<=count; i++){
        if(arr[i] != str[i]){
            b = 0;
            break;
        }
    }

    return b;
}



// 5. Write a C program using a user-defined function to copy one string into another string.
// Function Declaration: void copyString(char source[], char destination[]); 


void copyString(char source[], char destination[]); 

int main(){
    char str[20];
    char arr[20];

    printf("Enter: ");
    fgets(str, 19, stdin);

    copyString(str, arr);
}

void copyString(char source[], char destination[]){
    int i=0, count=0;

    while (source[i] != '\n'){
        count+= 1;
        i++;
    }

    count-= 1;
    
    for(int j=0; j<=count; j++){
        destination[j] = source[j];
    }

    destination[i] = '\0';

    puts(source);
    puts(destination);
} 



// 6. Write a C program using a user-defined function to count the number of words in a sentence.
// Function Declaration: int countWords(char str[]); 

int countWords(char str[]); 

int main(){
    char str[20];

    printf("Enter: ");
    fgets(str, 19, stdin);

    int k = countWords(str);

    printf("Count: %d", k);
}

int countWords(char str[]){
    int i = 0, count = 0;

    while (str[i] != '\0'){
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')){
            if (i == 0 || str[i - 1] == ' '){
                count++;
            }
        }
        i++;
    }

    return count;
}



// 7. Write a C program using a user-defined function to find 
// the frequency of a given character in a string.
// Function Declaration: int frequency(char str[], char ch); 

int frequency(char str[], char ch); 

int main(){
    char str[20];
    char ch;

    printf("Enter: ");
    fgets(str, 19, stdin);

    scanf("%c", &ch);

    int k = frequency(str, ch);

    printf("Frequency: %d", k);
}

int frequency(char str[], char ch){
    int i=0, count=0;

    while(str[i] != '\n'){
        if(str[i] == ch){
            count++;
        }
        i++;
    }

    return count;
}

*/