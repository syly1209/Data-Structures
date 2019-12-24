//空一个头节点，尾节点不空 
bool Inject(ElementType X,Deque D){
    if((D->Rear+1)%D->MaxSize==D->Front)
    return false;
    D->Data[D->Rear]=X;
    D->Rear=(D->Rear+1)%D->MaxSize;
    return true;
}
bool Push(ElementType X,Deque D){
    if((D->Rear+1)%D->MaxSize==D->Front)
    return false;
	D->Front=(D->Front-1+D->MaxSize)%D->MaxSize;
    D->Data[D->Front]=X;
    return true;
}
ElementType Pop(Deque D){
    if(D->Rear==D->Front)
    return ERROR;
    ElementType x=D->Data[D->Front];
	D->Front=(D->Front+1)%D->MaxSize;
    return x;
}
ElementType Eject(Deque D){
    if(D->Rear==D->Front)
    return ERROR;
    D->Rear=(D->Rear-1+D->MaxSize)%D->MaxSize;
    ElementType x=D->Data[D->Rear];
    return x;
}
