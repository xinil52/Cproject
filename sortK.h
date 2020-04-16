
void fun(int *a, int left, int right)
{
    int s=0, p=left,n=right,temp,k;
    k=a[left];
    while(1){
        if(s%2){
            while(1){
                if(a[left]>k||left==right){
                    break;
                }
                ++left;
            }
        }
        else{
            while(1){
                if(a[right]<k||left==right){
                    break;
                }
                --right;
            }
        }
        if(left==right){
            break;
        }
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        ++s;
    }
    if(p<left-1){
        fun(a,p,left-1);
    }
    if(right+1<n){
        fun(a,right+1,n);
    }
}
