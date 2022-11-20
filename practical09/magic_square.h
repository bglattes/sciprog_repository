
int ismagic(int **square, const int n){

if (n<0){return 0;}//no negatives

int num=0, offd=0,i,j;

for (i=0;i<n;i++){
        num=num+square[i][i];//get the sum of the diagonal
	offd = offd +square[i][n-i-1];//sum of the off diagonal
}

if(offd!= num){return 0;}//make sure they match

for(i=0;i<n;i++){
	int rows=0;
	int cols=0;
	for(j=0;j<n;j++){
		rows=rows+square[i][j];//sum of rows
		cols=cols+square[j][i];//sum of columns
}
	if (rows!=num ||cols!=num){return 0;}//make sure rows and columns match diagonal
	return 1;
}
}

