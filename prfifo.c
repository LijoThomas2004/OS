#include<stdio.h>
void main(){
    int i,j,n,k,pf=0,count=0,rs[25],m[10],f;
    printf("Enter the length of the refrence strng:");
    scanf("%d",&n);
    printf("Enter the reference string:");
    for(i=0;i<n;i++){
        scanf("%d",&rs[i]);
    }
    printf("Enter the number of frames:");
    scanf("%d",&f);
    for(i=0;i<f;i++){
        m[i]=-1;
    }
    printf("\nThe page replacement process is\n");
    for(i=0;i<n;i++){
        for(k=0;k<f;k++){
            if(m[k]==rs[i])
                break;
            }
     if(k==f){
        m[count++]=rs[i];
        pf++;
     } 
     for(j=0;j<f;j++)
      printf("%d\t",m[j]);
      if(k==f)
        printf("\t PAGE NO:%d",pf);
        printf("\n");
      if(count==f)
       count=0;
    }
    printf("\n The number of page fault using FIFO is:%d",pf);
}





