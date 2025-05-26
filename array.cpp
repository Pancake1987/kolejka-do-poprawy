
#define STACK_SIZE 5

int queue_table[STACK_SIZE] = {0};
int queue_index = 0;
int queue_front = 0;
int queue_back = 0;

int isQueueEmpty(void)
{
    return (queue_index == 0);
}

int isQueueFull(void)
{
    return (queue_index == STACK_SIZE);
}

int Pop(void)
{
    if (!isQueueEmpty())
    {
        int val = queue_table[queue_front];
        queue_front = (queue_front + 1) % STACK_SIZE;
        queue_index--;
        return val;
    }
    return -1; // Error: queue empty
}

int Top(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[queue_front];
    }
    return -1; // Error: queue empty
}

void Push(int val)
{
    if (!isQueueFull())
    {
        queue_table[queue_back] = val;
        queue_back = (queue_back + 1) % STACK_SIZE;
        queue_index++;
    }
   
}
