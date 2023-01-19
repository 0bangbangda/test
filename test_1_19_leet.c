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
//		if (head->val == val){//ͷ�ڵ���Ҫɾ��
//			cur = cur->next;
//			free(head);
//			head = cur;
//		}
//		//ͷ�ڵ㲻��Ҫɾ��
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
//	//������Ϊ�ջ�ֻ��һ���ڵ㣬����ͷָ��
//	if (head == NULL || head->next == NULL){
//		return head;
//	}
//	//����������������Ľڵ㣬ģ����������,˫ָ�뷨
//	else{
//		//����β�ڵ�
//		struct ListNode *right = head, *left = head, *prev = head;
//		while (right->next != NULL){
//			right = right->next;
//		}
//		while (left != right){
//			int tmp = left->val;
//			left->val = right->val;
//			right->val = tmp;
//			//leftָ����һ���ڵ㣬rightָ��ǰһ�����
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