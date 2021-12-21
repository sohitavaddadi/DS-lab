	#include<stdio.h>
#include<stdlib.h>
	#define SIZE 5
	int i,ele,top = -1,stack[SIZE];
	void push(int ele){
	     stack[++top] = ele;
	}
	int pop(){
	    return(stack[top--]);
	}
	int peek(){
	    return(stack[top]);
	}
	void display(){
	     for(i = top; i >= 0; i--){
	         printf("%d\n",stack[i]);
	     }
	}
	int main(){
	    int ch;
	    while(1){
	          printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit");
	          printf("\nEnter your choice : ");
	          scanf("%d",&ch);
	          switch(ch){
	                case 1 : if(top == SIZE - 1){
	                                  printf("stack overflow");
	                        }
	                        else{
	                            printf("Enter element to be inserted : ");
	                            scanf("%d",&ele);
	                            push(ele);
	                       }
	                       break;
	                case 2 : if(top == -1){
	                                 printf("stack underflow");
	                         }
	                         else{
	                             printf("deleted element is %d",pop());
	                         }
	                         break;
	                case 3 : if(top == -1){
	                                 printf("stack underflow");
	                         }
	                         else{
	                             printf("top element is %d",peek());
	                         }
	                         break;
	                case 4 : if(top == -1){
	                                 printf("stack underflow");
	                         }
	                         else{
	                              display();
	                         }
	                         break;
	                case 5 : exit(0);
	

	            }
	    }
	}
	

	Output:
	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 1
	Enter element to be inserted : 6
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 1
	Enter element to be inserted : 2
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 1
	Enter element to be inserted : 3
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 4
	3
	2
	6
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 2
	deleted element is 3
	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 4
	2
	6
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 3
	top element is 2
	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 5
ii)Pointers
        
	#include<stdio.h>
#include<stdlib.h>
	struct node{
	       int data;
	       struct node*link;
	};
	struct node*top = NULL, *cur, *temp;
	void push(int ele){
	     cur = (struct node*)malloc(sizeof(struct node));
	     cur->data = ele;
	     if(top == NULL){
	             cur->link = NULL;
	     }
	     else{
	         cur->link = top;
	     }
	     top = cur;
	}
	int pop(){
	    temp = top;
	    if(top == NULL){
	            printf("stack underflow");
	    }
	    else{
	        top = top->link;
	        return(temp->data);
	        free(temp);
	    }
	}
	int peek(){
	    return(top->data);
	}
	void display(){
	     temp = top;
	     while(temp != NULL){
	                 printf("%d\n", temp->data);
	                 temp = temp->link;
	     }
	}
	int main(){
	    int ch,ele;
	    while(1){
	         printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit");
	         printf("\nEnter your choice : ");
	         scanf("%d", &ch);
	         switch(ch){
	                case 1 : printf("Enter element : ");
	                         scanf("%d", &ele);
	                         push(ele);
	                         break;
	                case 2 : printf("Deleted element id %d",pop());
	                         break;
	                case 3 : if(top == NULL){
	                                 printf("stack underflow");
	                         }
	                         else{
	                             printf("top most ele is %d",peek());
	                         }
	                         break;
	               case 4 : if(top == NULL){
	                                 printf("stack underflow");
	                        }
	                        else{
	                            display();
	                        }
	                        break;
	               case 5 : exit(0);
	        }
	    }
	}
	

	Output:
	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 1
	Enter element : 1
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 1
	Enter element : 4
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 1
	Enter element : 3
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 4
	3
	4
	1
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 2
	Deleted element id 3
	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 4
	4
	1
	

	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 3
	top most ele is 4
	1-push
	2-pop
	3-peek
	4-display
	5-exit
	Enter your choice : 5

