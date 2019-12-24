List Insert( List L, ElementType X ){
	List i=L;
	for(i=L;i!=NULL&&i->Data<X&&i->Next!=NULL&&i->Next->Data<X;i=i->Next);
	List p=(List)malloc(sizeof(struct Node));
	p->Data=X;
	p->Next=i->Next;
	i->Next=p;
	return L;
}
