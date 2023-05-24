#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int current_angle = 0;
	int target_angle = 0;
	int error = 0;
	int corrected_error = 0;

	printf("Input Current Angle = ");
	scanf("%d", &current_angle);

	printf("Input Target Angle = ");
	scanf("%d", &target_angle);

//360 deg 보다 큰 각도 처리
	while (current_angle > 360 || target_angle > 360) {
		if (current_angle > 360) {
			current_angle = current_angle - 360;
		}
		else if (target_angle > 360) {
			target_angle = target_angle - 360;
		}
		else {
			break;
		}
	}

//로봇이 돌아야 할 각도
	error = target_angle - current_angle;

	if (error > 180 || error < -180) {
		if (error > 0) {
			corrected_error = error - 360;
			printf("c. Error  : %d  =  %d  -  %d", corrected_error, target_angle, current_angle);
		}
		else {
			corrected_error = 360 + error;
			printf("c. Error  : %d  =  %d  -  %d", corrected_error, target_angle, current_angle);
		}
	}	
	else if (error == 180 || error == -180) {
		corrected_error = 180;
		printf("c. Error  : %d  =  %d  -  %d", corrected_error, target_angle, current_angle);
	}
	else {
		corrected_error = error;
		printf("c. Error  : %d  =  %d  -  %d", corrected_error, target_angle, current_angle);
	}
}