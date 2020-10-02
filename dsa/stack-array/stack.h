
#define MAX 100
typedef char Entry;

typedef struct Stack {
int top;
Entry entry[MAX];
} stack;

void init(stack *);
void push(Entry, stack *);
int full(stack *);
void pop(Entry *, stack *);
int empty(stack *);
void top(Entry *, stack *);
int size(stack *);
void clear(stack *);
void traverse(stack *, void (*) (Entry));


