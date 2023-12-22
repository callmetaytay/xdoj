#include <stdio.h>
#include <stdlib.h>

int checkHorSym(char **pA, int n){
		for(int i=0;i<(n+1)/2;i++){
		for(int j=0;j<n;j++){
			if(*(*(pA+j)+i)!=*(*(pA+j)+n-1-i))
				return 0;
		}
	}
	return 1;
}
int checkVerSym(char **pA, int n){

	for(int i=0;i<(n+1)/2;i++){
		for(int j=0;j<n;j++){
			if(*(*(pA+i)+j)!=*(*(pA+n-1-i)+j))
				return 0;
		}
	}
	return 1;
}
int checkDiaSym(char **pA, int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(*(*(pA+j)+i)!=*(*(pA+i)+j))
			return 0;
		}
	}
	return 1;
}
int checkAntiDiaSym(char **pA, int n){
		for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(*(pA+j)+i)!=*(*(pA+n-1-i)+n-1-j))
			return 0;
		}
	}
	return 1;
}
int checkRotSym(char **pA, int n){
		for(int i=0;i<(n+1)/2;i++){
			for(int j=0;j<n;j++){
				if(*(*(pA+j)+i)!=*(*(pA+n-1-j)+n-i-1))
				return 0;
			}
		}
		return 1;
}

int main(void)
{
    int n,i,j,iHorSymFlag=0, iVerSymFlag=0, iDiaSymFlag=0, iAntiDiaSymFlag=0, iRotSymFlag=0;
    char **pA,*pTmp1,*pTmp2;
    scanf("%d", &n);

    pA=(char**) malloc(sizeof(char*)*n);
    for(i=0; i<n; i++)
    {
        pA[i]=(char*) malloc(sizeof(char)*n);
    }
    for(i=0; i<n; i++)
    {
        pTmp1=pA[i];
        for(j=0;j<n;j++)
        {
            scanf("%c", pTmp1);

            while(*pTmp1==' '|| *pTmp1=='\n')//skip spacing or line break
            {
                scanf("%c", pTmp1);
            }
            pTmp1++;
        }
    }



    //horizental symmetry
    iHorSymFlag = checkHorSym(pA, n);

    //vertical symmetry
    iVerSymFlag = checkVerSym(pA, n);

    //diagonal symmetry
    iDiaSymFlag = checkDiaSym(pA, n);


    //antidiagonal symmetry
    iAntiDiaSymFlag = checkAntiDiaSym(pA, n);

    //rotationally symmetry
    iRotSymFlag = checkRotSym(pA, n);

    if(iHorSymFlag)
        printf("1 ");
    if(iVerSymFlag)
        printf("2 ");
    if(iDiaSymFlag)
        printf("3 ");
    if(iAntiDiaSymFlag)
        printf("4 ");
    if(iRotSymFlag)
        printf("5 ");
    printf("\n");

    return 0;
}

