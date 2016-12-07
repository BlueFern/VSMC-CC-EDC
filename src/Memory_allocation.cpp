#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include<sys/stat.h>

/**
 * @file Memory_allocation.cpp
 * \brief This file contains "void allocatememory(int var_tot, int par_tot)" function
 */

extern double *y, *par, *y_temp, *y_converge;
extern double *TDMB, *TDMD, *TDMCC, *TDMDD;
extern double *TDMB_IP3, *TDMD_IP3, *TDMCC_IP3, *TDMDD_IP3;
extern double *TDMB_Ca, *TDMD_Ca, *TDMCC_Ca, *TDMDD_Ca;
extern int *num_cell;
extern double *Q_ip3r, *Q_serca, *Q_ryr;
extern double *L_cell, *L_rest;
extern double *IP3_P, *Ca_SD_P;

/**************************************************************************************/
/**/void allocatememory(int var_tot, int par_tot) /**/
/**************************************************************************************/
{
	y = (double *) malloc(var_tot * sizeof(double));
	if (y == NULL) {
		printf("allocation failed at y\n");
		abort();
	}
	y_temp = (double *) malloc(var_tot * sizeof(double));
	if (y_temp == NULL) {
		printf("allocation failed at y_temp\n");
		abort();
	}
	y_converge = (double *) malloc(var_tot * sizeof(double));
	if (y_converge == NULL) {
		printf("allocation failed at y_converge\n");
		abort();
	}
	par = (double *) malloc(par_tot * sizeof(double));
	if (par == NULL) {
		printf("allocation failed at par\n");
		abort();
	}
	TDMB = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMB == NULL) {
		printf("allocation failed at TDMB\n");
		abort();
	}
	TDMD = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMD == NULL) {
		printf("allocation failed at TDMD\n");
		abort();
	}
	TDMDD = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMDD == NULL) {
		printf("allocation failed at TDMDD\n");
		abort();
	}
	TDMCC = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMCC == NULL) {
		printf("allocation failed at TDMCC\n");
		abort();
	}

	TDMB_IP3 = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMB_IP3 == NULL) {
		printf("allocation failed at TDMB\n");
		abort();
	}
	TDMD_IP3 = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMD_IP3 == NULL) {
		printf("allocation failed at TDMD\n");
		abort();
	}
	TDMDD_IP3 = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMDD_IP3 == NULL) {
		printf("allocation failed at TDMDD\n");
		abort();
	}
	TDMCC_IP3 = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMCC_IP3 == NULL) {
		printf("allocation failed at TDMCC\n");
		abort();
	}

	TDMB_Ca  = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMB_Ca  == NULL) {
		printf("allocation failed at TDMB\n");
		abort();
	}
	TDMD_Ca  = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMD_Ca  == NULL) {
		printf("allocation failed at TDMD\n");
		abort();
	}
	TDMDD_Ca  = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMDD_Ca  == NULL) {
		printf("allocation failed at TDMDD\n");
		abort();
	}
	TDMCC_Ca = (double *) malloc(num_cell[0] * sizeof(double));
	if (TDMCC_Ca  == NULL) {
		printf("allocation failed at TDMCC\n");
		abort();
	}

	Q_ip3r = (double *) malloc(num_cell[0] * sizeof(double));
	if (Q_ip3r == NULL) {
		printf("allocation failed at Q_ip3r\n");
		abort();
	}

	Q_serca = (double *) malloc(num_cell[0] * sizeof(double));
	if (Q_serca == NULL) {
		printf("allocation failed at Q_serca\n");
		abort();
	}

	Q_ryr = (double *) malloc(num_cell[0] * sizeof(double));
	if (Q_ryr == NULL) {
		printf("allocation failed at Q_ryr\n");
		abort();
	}


	IP3_P = (double *) malloc(sizeof(double));
	if (IP3_P == NULL) {
		printf("allocation failed at IP3_P\n");
		abort();
	}

	L_cell = (double *) malloc(num_cell[0] * sizeof(double));
	if (L_cell == NULL) {
		printf("allocation failed at L_cell\n");
		abort();
	}

	Ca_SD_P = (double *) malloc(sizeof(double));
	if (Ca_SD_P == NULL) {
		printf("allocation failed at IP3_P\n");
		abort();
	}

	L_rest = (double *) malloc(sizeof(double));
}
