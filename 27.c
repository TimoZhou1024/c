#include <stdio.h>
typedef struct Node{
    int x;
    Point *next;
} Point;

int main() {
    int n;
    scanf("%d", &n);
    Point *head = (Point *)malloc(sizeof(Point));
    Point *p = head;
    head=NULL;
    
    
    return 0;
}
