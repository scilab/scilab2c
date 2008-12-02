#include "levin.h"

/* Double Functions */
void dr1(double *in,int lines, int rows, int n, double * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[(n-i/rows)*rows + i%rows + j*lines];
		}
	}
}

void dr2(double *in,int lines, int rows, int n, double * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[(n-1-i/rows)*rows + i%rows + j*lines];
		}
	}
}


void dr3(double *in,int lines, int rows, int n, double * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[(i/rows+1)*rows + j%rows + (i%rows)*lines];
		}
	}
}


void dr4(double *in,int lines, int rows, int n, double * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[i + j%rows + (i%rows)*(lines-1)];
		}
	}
}



void dlevinmul(double* in1, double* in2, int n, int rows, int ind_boucle, double* out, int lines, int deb_out,char choix){
	int i=0, j=0, debut=0,start_out=0;
	double accu;	
	
	if (ind_boucle==0) 	debut=0;
	else	debut = (ind_boucle-1)*(n+1)*rows*rows;

	start_out = deb_out*ind_boucle*rows;

	switch(choix){
		case 'u' : 
			for (i=0;i<rows*rows;i++){
				accu=0;
				for(j=0;j<ind_boucle*rows+rows;j++){
					accu += in1[debut+i%rows*(n+1) + (rows*(n+1))*(j%rows)+j/rows] * in2[n*rows-((ind_boucle+1)*rows)+j+(i/rows)*n*rows];
				}
				out[start_out+i%rows+(i/rows)*lines] = accu;
			}
			break;
		case 'd' : 
			for (i=0;i<rows*rows;i++){
				accu=0;
				for(j=0;j<ind_boucle*rows+rows;j++){	
					accu+=in1[debut+i%rows*(n+1) + (rows*(n+1))*(j%rows)+j/rows]*in2[j+(i/rows)*n*rows];	
				}
				out[start_out+i%rows+(i/rows)*lines] = accu;
			}
			break;
		default : break;
	}
}



void dlevinsig(double *sig,int n, int rows, int lines, double *sig1){
	int i=0;
	for (i=0;i<rows*rows;i++){
		sig1[i]=sig[n*rows + i%rows +(i/rows)*lines];
	}
}


void dlevinmul2(double* in1, double *in2,int ind_boucle,int n,int rows,double* out){
	int i=0,j=0, debut;
	double accu;
	debut = ind_boucle*(n+1)*rows*rows;
	for(i=0;i<(n+1)*rows*rows;i++){
		accu=0;
		for (j=0;j<rows;j++){
			accu += in1[(i/(n+1))%rows+j*rows]*in2[debut+i%(n+1)+(i/((n+1)*rows))*(n+1)*rows+j*(n+1)];
		}
		out[i]=accu;
	}
}


void dlevinsub(double* in1, double* in2, int n, int rows, int deb_in, int ind_boucle, double* out){
	int i=0;
	int deb_out= ind_boucle*(n+1)*rows*rows;
	int deb_in1;
	
	if (deb_in==0) deb_in1=0;
	else deb_in1=(deb_in-1)*(n+1)*rows*rows;

	for (i=0;i<(n+1)*rows*rows;i++){
		out[deb_out + i] = in1[deb_in1+i]-in2[i];
	}
}

void dinitTab(double* in, int size){
	int i;
	for (i=0;i<size;i++) in[i]=0;
}


void ddecalage(double* in, int deb_in,int n,int rows,double *out){
	int i=0,j=0;

	for (i=0;i<rows*rows;i++){
			for(j=n;j>0;j--) {out[i*(n+1)+j]=in[i*(n+1)+deb_in+j-1];}
			out[i*(n+1)]=0;
		}

}





/* Float Functions */

void sr1(float *in,int lines, int rows, int n, float * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[(n-i/rows)*rows + i%rows + j*lines];
		}
	}
}

void sr2(float *in,int lines, int rows, int n, float * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[(n-1-i/rows)*rows + i%rows + j*lines];
		}
	}
}


void sr3(float *in,int lines, int rows, int n, float * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[(i/rows+1)*rows + j%rows + (i%rows)*lines];
		}
	}
}


void sr4(float *in,int lines, int rows, int n, float * out){
	int i,j;
	for (i=0;i<n*rows;i++) {
		for (j=0;j<rows;j++){
			out[i+j*n*rows]=in[i + j%rows + (i%rows)*(lines-1)];
		}
	}
}



void slevinmul(float* in1, float* in2, int n, int rows, int ind_boucle, float* out, int lines, int deb_out,char choix){
	int i=0, j=0, debut=0,start_out=0;
	float accu;	
	
	if (ind_boucle==0) 	debut=0;
	else	debut = (ind_boucle-1)*(n+1)*rows*rows;

	start_out = deb_out*ind_boucle*rows;

	switch(choix){
		case 'u' : 
			for (i=0;i<rows*rows;i++){
				accu=0;
				for(j=0;j<ind_boucle*rows+rows;j++){
					accu += in1[debut+i%rows*(n+1) + (rows*(n+1))*(j%rows)+j/rows] * in2[n*rows-((ind_boucle+1)*rows)+j+(i/rows)*n*rows];
				}
				out[start_out+i%rows+(i/rows)*lines] = accu;
			}
			break;
		case 'd' : 
			for (i=0;i<rows*rows;i++){
				accu=0;
				for(j=0;j<ind_boucle*rows+rows;j++){	
					accu+=in1[debut+i%rows*(n+1) + (rows*(n+1))*(j%rows)+j/rows]*in2[j+(i/rows)*n*rows];	
				}
				out[start_out+i%rows+(i/rows)*lines] = accu;
			}
			break;
		default : break;
	}
}



void slevinsig(float *sig,int n, int rows, int lines, float *sig1){
	int i=0;
	for (i=0;i<rows*rows;i++){
		sig1[i]=sig[n*rows + i%rows +(i/rows)*lines];
	}
}


void slevinmul2(float* in1, float *in2,int ind_boucle,int n,int rows,float* out){
	int i=0,j=0, debut;
	float accu;
	debut = ind_boucle*(n+1)*rows*rows;
	for(i=0;i<(n+1)*rows*rows;i++){
		accu=0;
		for (j=0;j<rows;j++){
			accu += in1[(i/(n+1))%rows+j*rows]*in2[debut+i%(n+1)+(i/((n+1)*rows))*(n+1)*rows+j*(n+1)];
		}
		out[i]=accu;
	}
}


void slevinsub(float* in1, float* in2, int n, int rows, int deb_in, int ind_boucle, float* out){
	int i=0;
	int deb_out= ind_boucle*(n+1)*rows*rows;
	int deb_in1;
	
	if (deb_in==0) deb_in1=0;
	else deb_in1=(deb_in-1)*(n+1)*rows*rows;

	for (i=0;i<(n+1)*rows*rows;i++){
		out[deb_out + i] = in1[deb_in1+i]-in2[i];
	}
}

void sinitTab(float* in, int size){
	int i;
	for (i=0;i<size;i++) in[i]=0;
}


void sdecalage(float* in, int deb_in,int n,int rows,float *out){
	int i=0,j=0;

	for (i=0;i<rows*rows;i++){
			for(j=n;j>0;j--) {out[i*(n+1)+j]=in[i*(n+1)+deb_in+j-1];}
			out[i*(n+1)]=0;
		}

}

