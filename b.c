#include<stdio.h> 
 
int main() 
{ 
 
  int process,j,n,time,remain,flag=0,time_quantum; 
  int wait_time=0,turnaround_time=0,arrivaltime[100],bursttime[100],remtime[100],pt[100]; 
  printf("Enter Total Process:\t "); 
  scanf("%d",&n); 
  remain=n; 
  for(process=0;process<n;process++) 
  { 
    printf("Enter Arrival Time and Burst Time and prority for Process Process Number %d :",process+1); 
    scanf("%d",&arrivaltime[process]); 
    scanf("%d",&bursttime[process]); 
    scanf("%d",&pt[process]); 
	 remtime[process]=bursttime[process]; 
  } 
  printf("Enter Time Quantum:\t"); 
  scanf("%d",&time_quantum); 
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
  for(time=0,process=0;remain!=0;) 
  { 
    if(remtime[process]<=time_quantum && remtime[process]>0) 
    { 
      time+=remtime[process]; 
      remtime[process]=0; 
      flag=1; 
    } 
    else if(remtime[process]>0) 
    { 
      remtime[process]-=time_quantum;
      time+=time_quantum; 
    } 
    if(remtime[process]==0 && flag==1) 
    { 
      remain--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",process+1,time-arrivaltime[process],time-arrivaltime[process]-bursttime[process]); 
      wait_time+=time-arrivaltime[process]-bursttime[process]; 
      turnaround_time+=time-arrivaltime[process]; 
      flag=0; 
    } 
    if(process==n-1) 
      process=0; 
    else if(arrivaltime[process+1]=time) 
      {
	  process++; 
      }
	else 
      process=0;
	  
  } 
  printf("\nAverage Waiting Time= %f\n",wait_time*1.0/n); 
  printf("Avg Turnaround Time = %f",turnaround_time*1.0/n); 
  
  return 0; 
}
