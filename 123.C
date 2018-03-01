
    #include <stdio.h>
    void main()
    {
 
        int i, k, b, n, num[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &num[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (k= i + 1; k < n; ++k)
            {
 
                if (num[i] > num[k]) 
                {
 
                    b =  num[i];
                    num[i] = num[k];
                    num[k] = b;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", num[i]);
 
    }
