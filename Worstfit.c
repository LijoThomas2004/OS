#include<stdio.h>
struct memory{
    int size,alloc,index;
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
    m[i].index=i+1;
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(m[i].size<m[j].size){
            struct memory temp=m[i];
            m[i]=m[j];
            m[j]=temp;
    }
  }
}
printf("Enter the number of process:");
scanf("%d",&f);
struct process p[f];
printf("Enter the size of each process:\n");
for(i=0;i<f;i++){
    scanf("%d",&p[i].psize);
    p[i].flag=0;
}
printf("\nPROCESS\t\tPROCESS SIZE\t\tBLOCK SIZE\t\tBLOCK NO\n");
for(i=0;i<f;i++){
    for(j=0;j<n;j++){
        if(p[i].flag==0&&p[i].psize<=m[j].size&&m[j].alloc==0){
                    m[j].alloc=1;
                     p[i].flag=1;
                        printf("\t%d\t\t%d\t\t%d\t\t%d\n",i+1,p[i].psize,m[j].size,m[j].index);
                        break;
    }
  }
}
                        
  for(i=0;i<f;i++){
     if(p[i].flag==0){
        printf("\n\tThere is no space for blocks for process of size %d\n",p[i].psize);
     }
    }
}
                    
                 



