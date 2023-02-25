int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
        int i,j,k,l;
        k=0;
        //int **arr = (int **)malloc(r * sizeof(int *));
        int*temp=(int *)malloc(r*c*sizeof(int));
        int arr[r][c];
      //  printf("%d",*matColSize);
        for(i=0;i<matSize;i++)
        {
            for(j=0;j<*matColSize;j++)
            {
                temp[k]=mat[i][j];
                //printf("%d",temp[k]);
                k++;
               
            }
        }
        l=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                
                arr[i][j]=temp[l];
                l++;
               // printf("%d",arr[i][j]);
                
            }
           // printf("\n");
        }
    *returnSize=r;
    //*returnColumnSizes=c;
    free(temp);
    return(arr);
}