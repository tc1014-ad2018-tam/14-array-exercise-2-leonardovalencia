/*
 * This program allows the user enter as many numbers as he wants.
 * It wil display a menu and then depending on the user's choice, it will display the sum, the average, the biggest number or the smallest number.
 *Author: Marco Leonardo Valencia Martinez
 *Date: October 15th, 2018
 * a01412017@itesm.mx
 */
#include <stdio.h>
void menu(){
    printf("1.- Sum\n");
    printf("2.- Average\n");
    printf("3.- Smarllest Value\n");
    printf("4.- Biggest Value\n");
    printf("0.- Exit the program");
};

double sum(double numbers[], int n){
    double sum=0;
    for (int i = 0; i < n; ++i)    {
        sum += numbers[i];
    }
    return sum;
    }

/*double average(double numbers[], int n){
    double average=0;
    for (int i = 0; i < n; ++i) {
        average = (average + numbers[n])/n;
    }
} */ // or

double average(double numbers[], int n){
    return sum(numbers, n)/n;
}
double minimum(double numbers[], int n){
    double min=numbers[0];
    for (int i = 0; i < n; ++i) {
        if (min<numbers[i]){
            min = numbers[i];
        }
    }
    return min;
}

double Maximum(double numbers[], int n){
    double max = numbers[0];

    for(int i = 0; i < n; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }

    return max;
}

int main() {
    // This is were I declare the variables.
    int n;
    int choice;

    printf("How many numbers are you going to enter?");
    scanf("%d", &n);

    // This is the array.
    double numbers[n];

    // Here I store the values.
    for(int i = 0; i < n; i++){
        printf("%d:", i+1);
        scanf("%lf", &numbers[i]);
    }

    do{
        // This presents the menu and goes to the option selected.
        menu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Sum: %lf\n\n", sum(numbers, n));
                break;
            case 2:
                printf("Average: %lf\n\n",average(numbers, n));
                break;
            case 3:
                printf("Minimum value: %lf\n\n", minimum(numbers, n));
                break;
            case 4:
                printf("Maximum value: %lf\n\n", Maximum(numbers, n));
                break;
            case 0:
                printf("Bye.");
                break;
            default:
                printf("Not valid.");
                break;
        }
    } while(choice != 0);
    return 0;
}