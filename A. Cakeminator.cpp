#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    char mat[r][c];
    set<int> cols;
    set<int> rows;

    for(int i=0; i<r; i++)
    {

        for(int j=0; j<c; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]=='S'){
                cols.insert(i);
                rows.insert(j);

            }
        }
    }



printf("%d\n",r*c-cols.size()*rows.size());

    return 0;

}