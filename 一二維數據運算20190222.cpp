/*************
�@�G���ƾڹB��
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
	
	printf("�аݱz�Q�����عB��(��J 1 �� 2 )\n1.�@���B��\n2.�G���B��\n");
	scanf("%d",&a);
printf("---------------------------------------------------------\n");
	
if(a==1)
{
	printf("���B���ƪ��Ӽ�:");
	scanf("%d",&n);
		
/*��JX[]��*/
	for(i=1;i<=n;i++)
	{
		printf("x[%d]=",i);
		scanf("%lf",&x[i]);
	}
/*�p��x[]������*/
	for(i=1;i<=n;i++)
	{
		Mx=Mx+x[i]; 
	}
	Mx=Mx*1/n;
printf("-------------------------------\n");
				printf("S[%d]�������Ȭ�%lf\n",n,Mx); 
/*�p��зǤ�(1)*/	
		for(i=1;i<=n;i++)
	{
		Z[i]=x[i]-Mx;
	}
 /*�p���ܲ���*/
	for(i=1;i<=n;i++)
	{
		x[i]=x[i]*x[i];
		totalx=totalx+x[i];
	}
	
	totalx=totalx*1/n;
	Mx=Mx*Mx;
	o=totalx-Mx;
				printf("S[%d]���ܲ��Ƭ�%lf\n",n,o);
	o=sqrt(o); /*���ܲ��ƶ}�ڸ��Y�зǮt*/ 
				printf("S[%d]���зǮt��%lf\n",n,o);
/*�p��зǤ�(2)*/				
	for(i=1;i<=n;i++)
	{
		Z[i]=Z[i]*1/o;
	}
	for(i=1;i<=n;i++)
	{
				printf("�зǤƫ�x[%d]�ܬ�%lf\n",i,Z[i]);
	}
printf("-------------------------------\n");
	

}


	
else if(a>2)
{
	printf("�п�J1��2");
}

else if(a<1)
{
	printf("�п�J1��2");
}

else		
{	
	printf("���B���ƪ��Ӽ�:");
	scanf("%d",&n);
	
	
	/*��JX[]��*/
		for(i=1;i<=n;i++)
	{
		printf("x[%d]=",i);
		scanf("%lf",&x[i]);
		
		printf("y[%d]=",i);
		scanf("%lf",&y[i]);
		printf("\n");
	}

printf("-------------------------------\n");
/*�p��x[]������*/
		for(i=1;i<=n;i++)
	{
		Mx=Mx+x[i]; 
	}
	Mx=Mx*1/n;
	Mxt=Mx;
/*�p��y[]������*/
		for(i=1;i<=n;i++)
	{
		My=My+y[i]; 
	}
	My=My*1/n;
	Myt=My;
				printf("S[%d]�������Ȭ�(%lf,%lf)\n",n,Mx,My);	
	
printf("-------------------------------\n");
/*�p��X�зǤ�(1)*/
		for(i=1;i<=n;i++)
	{
		Zx[i]=x[i]-Mx;
	}
/*�p��y�зǤ�(1)*/	
		for(i=1;i<=n;i++)
	{
		Zy[i]=y[i]-My;
	}
	
 /*�p��x�ܲ���*/
	for(i=1;i<=n;i++)
	{
		x[i]=x[i]*x[i];
		totalx=totalx+x[i];
	}
	totalx=totalx*1/n;
	Mx=Mx*Mx;
	Ox=totalx-Mx;
				printf("Sx[%d]���ܲ��Ƭ�%lf\n",n,Ox);
	Ox=sqrt(Ox); /*���ܲ��ƶ}�ڸ��Y�зǮt*/ if(a=2);
				printf("Sx[%d]���зǮt��%lf\n",n,Ox);
printf("\n");
 /*�p��y�ܲ���*/
	for(i=1;i<=n;i++)
	{
		y[i]=y[i]*y[i];
		totaly=totaly+y[i];
	}
	totaly=totaly*1/n;
	My=My*My;
	Oy=totaly-My;
				printf("Sy[%d]���ܲ��Ƭ�%lf\n",n,Oy);
	Oy=sqrt(Oy); /*���ܲ��ƶ}�ڸ��Y�зǮt*/ if(a=2);
				printf("Sy[%d]���зǮt��%lf\n",n,Oy);			
				
printf("-------------------------------\n");				
/*�p��x�зǤ�(2)*/			
	for(i=1;i<=n;i++)
	{
		Zx[i]=Zx[i]*1/Ox;
	}
	for(i=1;i<=n;i++)
	{
				printf("�зǤƫ�x[%d]�ܬ�%lf\n",i,Zx[i]);
	}
printf("\n");			
/*�p��y�зǤ�(2)*/			
	for(i=1;i<=n;i++)
	{
		Zy[i]=Zy[i]*1/Oy;
	}
	for(i=1;i<=n;i++)
	{
				printf("�зǤƫ�y[%d]�ܬ�%lf\n",i,Zy[i]);
	}				
		
printf("-------------------------------\n");		
/*�p������Y��*/			
	for(i=1;i<=n;i++)
	{
		r=r+Zx[i]*Zy[i];
	}	
	r=r*1/n;
				printf("�����Y�Ƭ�%lf\n",r);	
printf("-------------------------------\n");

/*�p��j�k���u���*/
				printf("�j�k���u��Ƭ�y-%f=%f*%f*1/%f*(x-%f)\n",Myt,r,Oy,Ox,Mxt);
printf("-------------------------------\n");







}

	

	system("pause");
	return 0;

 } 
