void push(struct node* head, int data)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

void push_test()
{
	newNode* head = build();      // List ���� �������� �� newNode*
	push(&head, 1);               // ����������� ���������� �������
}
