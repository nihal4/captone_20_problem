#include <stdio.h>
#include <math.h>  

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imaginaryPart;

    
    printf("Input a: ");
    scanf("%f", &a);
    printf("Input b: ");
    scanf("%f", &b);
    printf("Input c: ");
    scanf("%f", &c);

   
    discriminant = (b * b) - (4 * a * c);

    
    if (discriminant > 0) {
        
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: root1 = %.2f and root2 = %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        
        root1 = root2 = -b / (2 * a);
        printf("One real root (double root): root1 = root2 = %.2f\n", root1);
    } 
    else {
        
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Two complex roots: root1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
