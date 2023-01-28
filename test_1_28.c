/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
	//     if(list1==NULL){
	//         return list2;
	//     }
	//     if(list2==NULL){
	//         return list1;
	//     }
	// struct ListNode *newHead=NULL,*next=NULL,*newTail=NULL;
	// //尾插法
	// if(list1->val<list2->val){
	//     next=list1->next;
	//     newHead=list1;
	//     newTail=list1;
	//     newTail->next=NULL;
	//     list1=next;
	// }
	// else{
	//     next=list2->next;
	//     newHead=list2;
	//     newTail=list2;
	//     newTail->next=NULL;
	//     list2=next;
	// }
	// while(list1!=NULL&&list2!=NULL){
	//     if(list1->val<list2->val){
	//         next=list1->next;
	//         newTail->next=list1;
	//         newTail=list1;
	//         list1=next;
	//     }
	//     else{
	//         next=list2->next;
	//         newTail->next=list2;
	//         newTail=list2;
	//         list2=next;
	//     }
	// }
	// while(list1!=NULL){
	//     next=list1->next;
	//     newTail->next=list1;
	//     newTail=list1;
	//     list1=next;
	// }
	// while(list2!=NULL){
	//     next=list2->next;
	//     newTail->next=list2;
	//     newTail=list2;
	//     list2=next;
	// }
	// return newHead;
	if (list1 == NULL){
		return list2;
	}
	if (list2 == NULL){
		return list1;
	}
	//创建带哨兵位的链表
	struct ListNode *newHead = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *newTail = newHead, *next = NULL;
	while (list1 != NULL&&list2 != NULL){
		if (list1->val<list2->val){
			next = list1->next;
			newTail->next = list1;
			newTail = list1;
			list1 = next;
		}
		else{
			next = list2->next;
			newTail->next = list2;
			newTail = list2;
			list2 = next;
		}
	}
	while (list1 != NULL){
		next = list1->next;
		newTail->next = list1;
		newTail = list1;
		list1 = next;
	}
	while (list2 != NULL){
		next = list2->next;
		newTail->next = list2;
		newTail = list2;
		list2 = next;
	}
	return newHead->next;
}
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


int kthToLast(struct ListNode* head, int k){
	struct ListNode *fast = head, *slow = head;
	while (k--){
		fast = fast->next;
	}
	while (fast != NULL){
		fast = fast->next;
		slow = slow->next;
	}
	return slow->val;
}
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* middleNode(struct ListNode* head){
	//快慢指针法
	if (head == NULL){
		return NULL;
	}
	else{
		//链表不为空
		struct ListNode *fast = head, *slow = head;
		while (fast != NULL&&fast->next != NULL){
			fast = fast->next->next;
			slow = slow->next;
		}
		return slow;
	}
}
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


struct ListNode* partition(struct ListNode* head, int x){
	if (head == NULL){
		return NULL;
	}
	struct ListNode *p = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *next = NULL, *tail = p, *phead = newhead;
	p->val = x;
	p->next = NULL;
	newhead->next = p;
	//小于x插入在x左边，大于则尾插
	while (head != NULL){
		if (head->val<p->val){
			next = head->next;
			phead->next = head;
			head->next = p;
			phead = head;
			head = next;
		}
		else{
			next = head->next;
			tail->next = head;
			tail = tail->next;
			tail->next = NULL;
			head = next;
		}
	}
	phead->next = p->next;
	free(p);
	p = NULL;
	return newhead->next;
}