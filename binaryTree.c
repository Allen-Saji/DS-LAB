#include<stdio.h>

void insert(int arr[])
{
    if(arr[1]==-1){
        printf("Enter the root value: ");
        scanf("%d",&arr[1]);
         printf("Root successfully inserted!\n");
    }
    else{
        printf("Under which node do you wanna insert: ");
        int i;
        scanf("%d",&i);
        if(arr[i]==-1){
            printf("Insertion not possible as the parent doesn't exist.\n");
        }
        else{
            printf("Left Child(L) or Right Child(R)? ");
            char s,ch;
            scanf("%c%c",&s,&ch);
           
            if(ch=='l'||ch=='L'){
                printf("Enter the value of the node: ");
                scanf("%d",&arr[2*i]);
                printf("Node successfully inserted!");
            }else if(ch=='r'|| ch=='R'){
                printf("Enter the value of the node: ");
                scanf("%d",&arr[(2*i)+1]);
                printf("Node successfully inserted!");
            }else{
                printf("Invalid Input");
            }
            
        }
    }

}

void display(int arr[])
{
   for(int i=1;i<50;i++){
       if(arr[i]!=-1){
           printf("%d ",arr[i]);
       }
   }

}

int main()
{
    int arr[50]={[0 ... 49]=-1};
    int n=0;
    
    while(n!=3){
        printf("\nWhich operation do you wanna perform: ");
        printf("\n1.Insertion\n2.Display\n3.Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1: {
            insert(arr);
            break;
        }

        case 2: {
            display(arr);
            break;
        }
        
        case 3: {
            printf("Successfully exited!");
        }
                break;
        
        default: printf("Invalid Choice!");
            break;
        }
    }

    return 0;

}
