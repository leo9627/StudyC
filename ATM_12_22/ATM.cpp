#include"ATM.h"
#include<cstdlib>
bool newcomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
int main()
{
	int turnways=0;
	int comers=0;
	int served=0;
	int sum_line=0;
	int wtime=0;
	int wait=0;
	queue q1;
	comer temp;
	for (int time = 0; time < 600; time++)
	{
		if (newcomer(2))
		{
			if (q1.full())
			{
				turnways++;
			}
			else
			{
				comers++;
				temp.rarrive(time);
				q1.enqueue(temp);
				
			}
		}
		if (wtime <= 0&&!q1.empt())
		{
			q1.dequeue(temp);
			wtime = temp.getworktime();
			wait += time - temp.getarrive();
			served++;
		}
		if (wtime > 0)
			wtime--;
		sum_line += q1.getall();

	}
	cout << turnways<<endl;
	cout << comers << endl;
	cout << served << endl;
	cout << sum_line/60 << endl;
	//cout << wtime << endl;
	cout << wait/served << endl;
}