#define size 6000//数组大小
#define N 12//滑动平均滤波计算平均值时所取的点数
/*上面两句在使用下面这个函数的时候加到程序的开头*/
void Smooth(float data[]);
int main(void)
{
	float a[] = {12.3, 13.4, 12.5};
	Smooth(a);
}
void Smooth(float data[])
{
	int Sum1;

    Sum1=0;
    for(int j=0;j<size;j++)
    {
        if(j<N/2)
        {
            for(int k=0;k<N;k++)
            {
                Sum1+=data[j+k];
            }
            data[j]=Sum1/N;
        }
        else
            if(j<size -N/2)
            {
                for(int k=0;k<N/2;k++)
                {
                    Sum1+=(data[j+k]+data[j-k]);
                }
                data[j]=Sum1/N;
            }
            else
            {
                for(int k=0;k<size-j;k++)
                {
                    Sum1+=data[j+k];
                }
                for(int k=0;k<(N-size+j);k++)
                {
                    Sum1+=data[j-k];
                }
                data[j]=Sum1/N;
            }
        Sum1=0;
    }
}
