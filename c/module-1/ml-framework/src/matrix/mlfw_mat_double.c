#include<mlfw_matrix.h>
#include<stlib.h>
#include<stdio.h>

typedef stuct __mlfw_mat_double
{
double **data;
dimension_t rows;
dimension_t column;
}mlfw_mat_double;


mlfw_mat_double * mlfw_mat_double_create_new(dimension_t rows,dimension_t columns)
{
return NULL;
}

void mlfw_mat_double_destroy(mlfw_mat_double *matrix)
{
}

mlfw_mat_double * mlfw_mat_double_from_csv(const char *csv_file_name)
{
return NULL;
}


