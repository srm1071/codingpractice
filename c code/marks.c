#include<stdio.h>
#include<math.h>
int main()
{
    int math,phy,chem,tot,phmath;
    printf("enter marks in math,physics,chem\n");
    scanf("%d%d%d\n",&math,&phy,&chem);
    printf("now deciding\n");
    tot=math+phy+chem;
    printf("total is %d",tot);
    phmath=phy+math;
    printf("physics and math total is %d",phmath);
    if(math>=60 && phy>=50 && chem>=40 && tot>=200)
        printf("qualified");
    else if(phmath>=200)
        printf("qualified");
    else
        printf("disqualified");
    return 0;
}
