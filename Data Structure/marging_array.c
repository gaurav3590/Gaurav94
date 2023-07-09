
#include<stdio.h>
void main()
{
    int aOne[50], aTwo[50], aMerge[100];
	int sizeOne, sizeTwo, i, k;
    printf("Enter the Size for First Array: ");
    scanf("%d",&sizeOne);
    printf("Enter first array's Elements : ");
    for(i=0; i<sizeOne; i++)
    {
        scanf ("%d",&aOne[i]);
        aMerge[i] = aOne[i];
    }
    k = i;
    printf("\nEnter the Size for Second Array: ");
    scanf("%d",&sizeTwo);
    printf("Enter second array's Elements : ");
    for(i=0; i<sizeTwo; i++)
    {
        scanf("%d",&aTwo[i]);
        aMerge[k] = aTwo[i];
        k++;
    }
    printf("\nThe New Array (Merged Array):\n");
    for(i=0; i<k; i++)
        printf(" %d",aMerge[i]);
    printf("\n");
}