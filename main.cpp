    #include <iostream>  
    using namespace std;  
    int main()  
    {  
        int a = 3, b = 3;
    int x[a][b],v[a][b],mul[a][b],i,j,z,k;    
    cin>>x[i][j];  
    
    cout<<"enter the second matrix element=\n";    
    for(i=0;i<3;i++)    
    {    
    for(j=0;j<3;j++)    
    {    
    cin>>v[i][j];    
    }    
    }    
    cout<<"multiply of the matrix=\n";    
    for(i=0;i<3;i++)    
    {    
    for(j=0;j<3;j++)    
    {    
    mul[i][j]=0;    
    for(k=0;k<3;k++)    
    {    
    mul[i][j]+=a[i][k]*b[k][j];    
    }    
    }    
    }    
    //for printing result    
    for(i=0;i<3;i++)    
    {    
    for(j=0;j<3;j++)    
    {    
    cout<<mul[i][j]<<" ";    
    }    
    cout<<"\n";    
    }    
    return 0;  
    }    