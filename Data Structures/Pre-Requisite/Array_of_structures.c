#include <stdio.h>
struct Card
{
    int face;
    int shape;
    int color;
};
int main ()
{
    struct Card deck[52] = {{1,0,0}, {1,2,1}, {10,2,1}}; //More cards can be made this way.
    printf("%d\n",deck[0].face);
    printf("%d\n",deck[0].shape);
    printf("%d\n",deck[0].color);
    printf("%d\n",deck[1].face);
}