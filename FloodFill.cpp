#include <iostream>
using namespace std;

#define R 12
#define C 10


void stampa(int M[R][C]){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

void floodfill(int M[R][C], int i, int j, int c, int col){
	if(i<0 || i>=R || j<0 || j>=C || (col!=-1&&M[i][j]!=col)){
		return;
	}
	 
	//stampa(M);
	//cout << "---------------------------------------" << endl;
	 
	if(col == -1){
		col = M[i][j];
		
	}
	
	if(M[i][j] != col)
		return;
	
	M[i][j] = c;
	
	floodfill(M, i+1,j,c,col);
	floodfill(M, i-1,j,c,col);
	floodfill(M, i,j+1,c,col);
	floodfill(M, i,j-1,c,col);
	
	
} 


int main(){
	int M[R][C] = {
   							{ 0, 0, 0, 0, 1, 1, 0, 0, 1, 0 }, 
						    { 0, 0, 0, 0, 1, 1, 0, 0, 1, 1 }, 
						    { 0, 1, 1, 0, 1, 1, 0, 0, 0, 0 }, 
						    { 0, 1, 1, 0, 0, 1, 0, 0, 0, 0 }, 
						    { 0, 0, 0, 0, 0, 1, 1, 1, 1, 1 }, 
						    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
						    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, 
						    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }, 
						    { 1, 1, 1, 1, 0, 0, 1, 1, 0, 0 }, 
						    { 1, 1, 1, 1, 0, 0, 0, 1, 1, 0 }, 
						    { 1, 1, 1, 1, 0, 0, 0, 0, 1, 1 }, 
						    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 }			//i = 11 j = 4 --> col = 0 --> M[i][j] = 2
						};
						
						
	//Active function
	floodfill(M, 11, 4, 2, -1);	

	stampa(M);
					
	
	return 0;
}



