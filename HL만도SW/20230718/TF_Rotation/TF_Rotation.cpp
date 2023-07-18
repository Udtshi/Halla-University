#include "stdafx.h"
#define _USE_MATH_DEFINES
#include "math.h"

#define RAD2DEG(x)   x*180/M_PI
#define DEG2RAD(x)   x*M_PI/180

typedef struct
{
	double x;
	double y;
	double theta;
} Pose2D;

typedef struct
{
	double x;
	double y;
} Point2D;


Pose2D    base_link_origin;
Point2D   base_link_Point2D, base_link_map_Point2D;

double angle_degree;
double angle_radian;
double Rotation_matrix[2][2];
double Rotation_matrix_inverse[2][2];

void set_rotation_matrix_inverse(double m_angle_degree)
{
	angle_radian = DEG2RAD(m_angle_degree);

	Rotation_matrix_inverse[0][0] = cos(angle_radian);   Rotation_matrix_inverse[0][1] = sin(angle_radian);
	Rotation_matrix_inverse[1][0] = -sin(angle_radian);   Rotation_matrix_inverse[1][1] = cos(angle_radian);
}


void set_rotation_matrix(double m_angle_degree)
{
	angle_radian = DEG2RAD(m_angle_degree);

	Rotation_matrix[0][0] = cos(angle_radian);   Rotation_matrix[0][1] = -sin(angle_radian);
	Rotation_matrix[1][0] = sin(angle_radian);   Rotation_matrix[1][1] = cos(angle_radian);
}

void TF_base_link_base_link_map()  //5기
{
	set_rotation_matrix(angle_degree);

	printf("%6.3lf  %6.3lf\n", Rotation_matrix[0][0], Rotation_matrix[0][1]);
	printf("%6.3lf  %6.3lf\n", Rotation_matrix[1][0], Rotation_matrix[1][1]);
	// Rotation
	base_link_map_Point2D.x = Rotation_matrix[0][0] * base_link_Point2D.x + Rotation_matrix[0][1] * base_link_Point2D.y;
	base_link_map_Point2D.y = Rotation_matrix[1][0] * base_link_Point2D.x + Rotation_matrix[1][1] * base_link_Point2D.y;
	
	printf("\n\n");
	printf("base_link : (%6.3lf, %6.3lf)    -> base_link_map(%6.3lf, %6.3lf)\n", base_link_Point2D.x, base_link_Point2D.y, base_link_map_Point2D.x, base_link_map_Point2D.y);
	printf("%6.3lf  %6.3lf  %6.3lf\n", base_link_origin.x, base_link_origin.y, base_link_origin.theta);
	printf("\n\n");
}
void TF_base_link_map_base_link()  //5기
{
	set_rotation_matrix_inverse(angle_degree);

	printf("%6.3lf  %6.3lf\n", Rotation_matrix_inverse[0][0], Rotation_matrix_inverse[0][1]);
	printf("%6.3lf  %6.3lf\n", Rotation_matrix_inverse[1][0], Rotation_matrix_inverse[1][1]);

	//	Rotation
	base_link_Point2D.x = Rotation_matrix_inverse[0][0] * base_link_map_Point2D.x + Rotation_matrix_inverse[0][1] * base_link_map_Point2D.y;
	base_link_Point2D.y = Rotation_matrix_inverse[1][0] * base_link_map_Point2D.x + Rotation_matrix_inverse[1][1] * base_link_map_Point2D.y;

	printf("\n\n");
	printf("base_link_map: (%6.3lf, %6.3lf) -> base_link(%6.3lf, %6.3lf)\n", base_link_map_Point2D.x, base_link_map_Point2D.y, base_link_Point2D.x, base_link_Point2D.y);
	printf("%6.3lf  %6.3lf  %6.3lf\n", base_link_origin.x, base_link_origin.y, base_link_origin.theta);
}

int main(void)
{
	base_link_origin.x = 1;
	base_link_origin.y = 1;
	base_link_origin.theta = 90;

	printf("point(x, y): ");
	scanf("%lf %lf", &base_link_Point2D.x, &base_link_Point2D.y);

	printf("rotation(deg): ");
	scanf("%lf", &angle_degree);

	TF_base_link_base_link_map();
	TF_base_link_map_base_link();

	return 0;
}
