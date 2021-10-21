#include<stdio.h>
void store_array(int mat3[][3]);


void matrix_mul(int mat1[3][3],int  mat2[3][3], int mat3[3][3])

{
	
	int i,j,k;
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
		    mat3[i][j]=0;
		    {
		    		for(k=0;k<3;k++)
		    		{
		    			mat3[i][j]= mat3[i][j]+ mat1[i][k] * mat2[k][j];
					 }
			 }
		}
	}

	
}
void store_array(int mat3[][3])
{
	int i,j,k=0;
	int array[10];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			array[k]=mat3[i][j];
			k++;
		}
		
	}
	printf(" Print array\n");
   for(i=0;i<9;i++)
   printf(" %d",array[i]);
    printf("\n");
    
    printf("After insertion sort\n");
    
for(i=1;i<9;i++)
	{
	 int 	temp=array[i];
		j=i-1;
		while(j>=0 && array[j]<temp)
			{
				array[j+1]=array[j];
				j--;
			}
			array[j+1]=temp;
	}
for(i=0;i<9;i++)
printf(" %d",array[i]);
printf("\n");
}

int main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3],i,j,k;
	printf("Enter the first Matrix  elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&(*(*(mat1+i)+j)));
		}
	}
	

	printf("Enter the second elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			scanf("%d",&(*(*(mat2+i)+j)));
		}
	}
	
	matrix_mul(mat1,mat2,mat3);
	
	
	printf("First matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("%5d",(*(*(mat1+i)+j)));
		}
		printf("\n");
	}
	
		printf("second matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("%5d",(*(*(mat2+i)+j)));
		}
		printf("\n");
	}
			printf("third matrix\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("%5d",(*(*(mat3+i)+j)));
		}
		printf("\n");
	}
	
	store_array(mat3);
	return 0;
}
