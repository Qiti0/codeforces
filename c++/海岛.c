#include<stdio.h>
int n,m;
void Change(char p[][100],int x,int y)
{
if(p[x][y]=='#')
{
	p[x][y]='.';
	if(x+1<n)
		Change(p,x+1,y);
	if(x-1>=0)
		Change(p,x-1,y);
	if(y+1<m)
		Change(p,x,y+1);
	if(y-1>=0)
		Change(p,x,y-1);
		
}	
}
int main()
{
	char a[100][100];
	char b[100][100],c[100][100];
	int i,j,k,l,o,q;
	int cnt=0,cnt1=0;
	char ch;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			ch=getchar();
			if(ch!='\n')
			c[i][j]=b[i][j]=a[i][j]=ch;
			else
			j--;
		}
	}
			
	for(k=0;k<n;k++)
	{
		for(l=0;l<m;l++)
		{
			if(a[k][l]=='#')
			{
			Change(a,k,l);
			cnt++;
	   		}
		}
	}
	for(o=0;o<n;o++)
	{
		for(q=0;q<m;q++)
		{
			if(b[o][q]=='.')
			{
				if(o+1<n)
				c[o+1][q]='.';
				if(o-1>=0)
				c[o-1][q]='.';
				if(q+1<m)
				c[o][q+1]='.';
				if(q-1>=0)
				c[o][q-1]='.';
			}
		}
	}
		for(k=0;k<n;k++)
	{
		for(l=0;l<m;l++)
		{
			if(c[k][l]=='#')
			{	
			Change(c,k,l);
			cnt1++;
			}
		
		}
	}
	printf("%d\n%d",cnt,cnt1);
	return 0;
}