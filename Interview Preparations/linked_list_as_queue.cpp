#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
};
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue *sq = new Queue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
    }

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/
//author : 'Amit Singh Sansoya @amit3200'
//it was all meant to happen as i was all talk!
/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
        // Your Code
        QueueNode *temp=new QueueNode;
        temp->data=x;
        if(front==NULL){
        	front=temp;
        	rear=temp;
        	return;
		}
        rear->next=temp;
        rear=temp;
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        // Your Code
        if(front==NULL){
            return -1;
        }
        if(front!=NULL){
        	int f=front->data;
        	front=front->next;
        	if(front==NULL){
        		front=NULL;
			}
        	return f;
        }
}


