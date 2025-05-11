#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    /**
     * Define three fields of type int: length, width and height
     */
    int length, width, height;
};

typedef struct box box;

int get_volume(box b)
{
    /**
     * Return the volume of the box
     */
    return ((b.height) * (b.length) * (b.width));
}

int is_lower_than_max_height(box b)
{
    /**
     * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
     */
    if (b.height < MAX_HEIGHT)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    box *boxes = malloc(n * sizeof(box));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    for (int i = 0; i < n; i++)
    {
        if (is_lower_than_max_height(boxes[i]))
        {
            printf("%d\n", get_volume(boxes[i]));
        }
    }
    return 0;
}

/*  "Boxes through a Tunnel":-

"Input Format":-
The first line contains a single integer n, denoting the number of boxes.
n lines follow with three integers on each separated by single spaces — lengthi,widthi and heighti which are length, width and height in feet of the i-th box.

"Output Format":-
For every box from the input which has a height lesser than 41 feet, print its volume in a separate line.

"Sample Input":-
4
5 5 5
1 2 40
10 5 41
7 2 42

"Sample Output":-
125
80
*/