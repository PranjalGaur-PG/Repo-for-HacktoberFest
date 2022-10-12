#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

class Queue {
    int front,rear,size;
    unsigned cap;
    int* arr;

    public:
    Queue* Create(int val) {
        Queue* q= new Queue();
        Queue->cap = val;
        Queue->front = Queue->size = 0;
        Queue->rear = cap - 1;
        Queue->arr = new int[(val * sizeof(int))];
    }

    bool Full(Queue* Queue) {
        if(Queue->size == Queue->cap) return true;
        return false;
    }
    bool Empty(Queue* Queue) {
        if(Queue->size == 0) return true;
        return false;
    }

    void enQueue(Queue* Queue, int item) 
    { 
        if (isFull(Queue)) return; 
        Queue->rear = (Queue->rear + 1) % Queue->capacity; 
        Queue->array[Queue->rear] = item; 
        Queue->size = Queue->size + 1; 
        cout << item << " enQueued to Queue\n"; 
    } 

    int deQueue(Queue* Queue) 
    { 
        if (isEmpty(Queue)) return INT_MIN; 
        int item = Queue->array[Queue->front]; 
        Queue->front = (Queue->front + 1) % Queue->capacity; 
        Queue->size = Queue->size - 1; 
        return item; 
    }

};

int main()
{
    IOS;
    Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    return 0;
}