/*************
一二維數據運算
**************/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	short int a;
	int n,i;
	double x[n],y[n],Z[n],Zx[n],Zy[n],Mx,Mxt,My,Myt,Ox,Oy,r,o;
	double totalx,totaly=0;
	
	printf("請問您想做哪種運算(輸入 1 或 2 )\n1.一維運算\n2.二維運算\n");
	scanf("%d",&a);
printf("---------------------------------------------------------\n");
	
if(a==1)
{
	printf("欲運算資料的個數:");
	scanf("%d",&n);
		
/*輸入X[]值*/
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=",i);
		scanf("%lf",&x[i]);
	}
/*計算x[]平均值*/
	for(i=1;i<=n;i++)
	{
		Mx=Mx+x[i]; 
	}
	Mx=Mx*1/n;
printf("-------------------------------\n");
				printf("S[%d]的平均值為%lf\n",n,Mx); 
/*計算標準化(1)*/	
		for(i=1;i<=n;i++)
	{
		Z[i]=x[i]-Mx;
	}
 /*計算變異數*/
	for(i=1;i<=n;i++)
	{
		x[i]=x[i]*x[i];
		totalx=totalx+x[i];
	}
	
	totalx=totalx*1/n;
	Mx=Mx*Mx;
	o=totalx-Mx;
				printf("S[%d]的變異數為%lf\n",n,o);
	o=sqrt(o); /*把變異數開根號即標準差*/ 
				printf("S[%d]的標準差為%lf\n",n,o);
/*計算標準化(2)*/				
	for(i=1;i<=n;i++)
	{
		Z[i]=Z[i]*1/o;
	}
	for(i=1;i<=n;i++)
	{
				printf("標準化後x[%d]變為%lf\n",i,Z[i]);
	}
printf("-------------------------------\n");
	

}


	
else if(a>2)
{
	printf("請輸入1或2");
}

else if(a<1)
{
	printf("請輸入1或2");
}

else		
{	
	printf("欲運算資料的個數:");
	scanf("%d",&n);
	
	
	/*輸入X[]值*/
		for(i=1;i<=n;i++)
	{
		printf("x[%d]=",i);
		scanf("%lf",&x[i]);
		
		printf("y[%d]=",i);
		scanf("%lf",&y[i]);
		printf("\n");
	}

printf("-------------------------------\n");
/*計算x[]平均值*/
		for(i=1;i<=n;i++)
	{
		Mx=Mx+x[i]; 
	}
	Mx=Mx*1/n;
	Mxt=Mx;
/*計算y[]平均值*/
		for(i=1;i<=n;i++)
	{
		My=My+y[i]; 
	}
	My=My*1/n;
	Myt=My;
				printf("S[%d]的平均值為(%lf,%lf)\n",n,Mx,My);	
	
printf("-------------------------------\n");
/*計算X標準化(1)*/
		for(i=1;i<=n;i++)
	{
		Zx[i]=x[i]-Mx;
	}
/*計算y標準化(1)*/	
		for(i=1;i<=n;i++)
	{
		Zy[i]=y[i]-My;
	}
	
 /*計算x變異數*/
	for(i=1;i<=n;i++)
	{
		x[i]=x[i]*x[i];
		totalx=totalx+x[i];
	}
	totalx=totalx*1/n;
	Mx=Mx*Mx;
	Ox=totalx-Mx;
				printf("Sx[%d]的變異數為%lf\n",n,Ox);
	Ox=sqrt(Ox); /*把變異數開根號即標準差*/ if(a=2);
				printf("Sx[%d]的標準差為%lf\n",n,Ox);
printf("\n");
 /*計算y變異數*/
	for(i=1;i<=n;i++)
	{
		y[i]=y[i]*y[i];
		totaly=totaly+y[i];
	}
	totaly=totaly*1/n;
	My=My*My;
	Oy=totaly-My;
				printf("Sy[%d]的變異數為%lf\n",n,Oy);
	Oy=sqrt(Oy); /*把變異數開根號即標準差*/ if(a=2);
				printf("Sy[%d]的標準差為%lf\n",n,Oy);			
				
printf("-------------------------------\n");				
/*計算x標準化(2)*/			
	for(i=1;i<=n;i++)
	{
		Zx[i]=Zx[i]*1/Ox;
	}
	for(i=1;i<=n;i++)
	{
				printf("標準化後x[%d]變為%lf\n",i,Zx[i]);
	}
printf("\n");			
/*計算y標準化(2)*/			
	for(i=1;i<=n;i++)
	{
		Zy[i]=Zy[i]*1/Oy;
	}
	for(i=1;i<=n;i++)
	{
				printf("標準化後y[%d]變為%lf\n",i,Zy[i]);
	}				
		
printf("-------------------------------\n");		
/*計算相關係數*/			
	for(i=1;i<=n;i++)
	{
		r=r+Zx[i]*Zy[i];
	}	
	r=r*1/n;
				printf("相關係數為%lf\n",r);	
printf("-------------------------------\n");

/*計算迴歸直線函數*/
				printf("迴歸直線函數為y-%f=%f*%f*1/%f*(x-%f)\n",Myt,r,Oy,Ox,Mxt);
printf("-------------------------------\n");







}

	

	system("pause");
	return 0;

 } 
