// 190612Create.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct ListNode 
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};


class Solution 
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
	{
		ListNode* tNumNode = new ListNode(0);
		int tUnitNum = 0;
		ListNode* tL1;
		ListNode* tL2;
		ListNode* tPoint;

		tL1 = l1;
		tL2 = l2;
		tPoint = tNumNode;


		do
		{
			int tSum = 0;
			if (tL1 == nullptr && tL2 != nullptr) 
			{
				tSum = tL2->val + tUnitNum;
				tL2 = tL2->next;
			}
			else if (tL1 != nullptr && tL2 == nullptr)
			{
				tSum = tL1->val + tUnitNum;
				tL1 = tL1->next;
			}
			else 
			{
				tSum = tL1->val + tL2->val + tUnitNum;
				tL1 = tL1->next;
				tL2 = tL2->next;
			}
			
			tUnitNum = 0;
			if (tSum >= 10)
			{
				int tMod = tSum % 10;
				tUnitNum = 1;
				tPoint->val = tMod;
			}
			else 
			{
				tPoint->val = tSum;
			}


			if (tL1 != nullptr || tL2 != nullptr) 
			{
				ListNode* tNode = new ListNode(0);
				tPoint->next = tNode;
				tPoint = tPoint->next;
			}
			else if (tUnitNum == 1)
			{
				ListNode* tNode = new ListNode(1);
				tPoint->next = tNode;
			}

		} while (tL1 != nullptr || tL2 != nullptr);

		return tNumNode;
	}
};

int main()
{
	Solution* tSolution = new Solution();

	ListNode* tListOne = new ListNode(3);
	tListOne->next = new ListNode(4);
	tListOne->next->next = new ListNode(6);

	ListNode* tListTwo = new ListNode(5);
	tListTwo->next = new ListNode(6);
	tListTwo->next->next = new ListNode(4);

	ListNode* tListResult;

	tListResult = tSolution->addTwoNumbers(tListOne, tListTwo);

	while (tListResult != nullptr)
	{
		cout << tListResult->val << endl;
		tListResult = tListResult->next;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
