//Implementation of tree using array
#include<bits/stdc++.h>
using namespace std;

char tree[10];
int root(char key){
    if(tree[0] != '\0'){
        cout<<"Tree already had root!";
    }
    else{
        tree[0]=key;
    }
    return 0;
}

int left(char key,int parent){
    if(tree[parent] == '\0'){
        cout<<"Can't set child at"<<(parent*2)+1<<",no parent found!";
    }
    else{
        tree[(parent*2)+1]=key;
    }
    return 0;
}
int right(char key,int parent){
    if(tree[parent] == '\0'){
        cout<<"Can't set child at"<<(parent*2)+1<<",no parent found!";
    }
    else{
        tree[(parent*2)+2]=key;
    }
    return 0;
}
int show_tree(){
    for(int i=0;i<10;i++){
        if(tree[i]!='\0'){
            cout<<tree[i];
        }
        else{
            cout<<"-";
        }
    }
    return 0;
}

int main(){
    cout<<"Enter root Node:";
    char rt;
    cin>>rt;
    root('A');
    left('B',0);
    right('C', 0);
    left('D', 1);
    right('E', 1);
    right('F', 2);
    show_tree();
  /*
       A(0)    
      /    \
     B(1)  C(2)  
   /   \      \
 D(3)  E(4)   F(6)
  */
    return 0;
}