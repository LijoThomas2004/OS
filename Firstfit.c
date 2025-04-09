#include<stdio.h>
struct memory{
    int size,alloc;
};
struct process{
     int psize,flag;
};
int main(){
    int i,j,n,f;
printf("Enter the number of memory blocks:");
scanf("%d",&n);
struct memory m[n];
printf("Enter the size of memory block:\n");
for(i=0;i<n;i++){
    scanf("%d",&m[i].size);
    m[i].alloc=0;
}
printf("Enter the number of process:");
scanf("%d",&f);
struct process p[f];
printf("Enter the size of each process:\n");
for(i=0;i<f;i++){
    scanf("%d",&p[i].psize);
    p[i].flag=0;
}
printf("\nPROCESS\t\tBLOCK SIZE\t\tPROCESS SIZE\n");
for(i=0;i<f;i++){
    for(j=0;j<n;j++){
        if(p[i].flag==0&&p[i].psize<=m[j].size&&m[j].alloc==0){
                    m[j].alloc=1;
                     p[i].flag=1;
                        printf("\t%d\t\t%d\t\t%d\n",i+1,m[j].size,p[i].psize);
                        break;
    }
}
}
                        
  for(i=0;i<f;i++){
     if(p[i].flag==0){
        printf("\n\tThere is no space for blocks %d with size %d\n",i+1,p[i].psize);
     }
    }
}
                    
                 



