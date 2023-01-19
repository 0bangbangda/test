///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//
//
//struct ListNode* removeElements(struct ListNode* head, int val){
//	struct ListNode *cur = head;
//	struct ListNode *prev = NULL;
//	while (cur != NULL){
//		if (head->val == val){//头节点需要删除
//			cur = cur->next;
//			free(head);
//			head = cur;
//		}
//		//头节点不需要删除
//		else{
//			if ((cur->val) != val){
//				prev = cur;
//				cur = cur->next;
//			}
//			else{
//				prev->next = cur->next;
//				cur = prev->next;
//			}
//		}
//	}
//	return head;
//}
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/


//struct ListNode* reverseList(struct ListNode* head){
//	//若链表为空或只有一个节点，返回头指针
//	if (head == NULL || head->next == NULL){
//		return head;
//	}
//	//链表有两个及更多的节点，模拟数组逆序,双指针法
//	else{
//		//先找尾节点
//		struct ListNode *right = head, *left = head, *prev = head;
//		while (right->next != NULL){
//			right = right->next;
//		}
//		while (left != right){
//			int tmp = left->val;
//			left->val = right->val;
//			right->val = tmp;
//			//left指向下一个节点，right指向前一个结点
//			while ((prev->next) != right){
//				prev = prev->next;
//			}
//			if (prev == left){
//				return head;
//			}
//			left = left->next;
//			right = prev;
//			prev = head;
//		}
//	}
//	return head;
//}