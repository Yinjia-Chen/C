int FactorialSum( List L ){
    List current=L;
    int sum=0,i,num;

    for(;current!=NULL;current=current->Next){
        int f=1;
        int num=current->Data;
        for(;num>1;){
            f*=num;
            num--;
        }
        sum+=f;
    }

    return sum;
}
