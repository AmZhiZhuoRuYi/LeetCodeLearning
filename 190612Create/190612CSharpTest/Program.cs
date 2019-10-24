using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _190612CSharpTest
{
    class Program
    {
        static void Main(string[] args)
        {
            ListNode tNode1 = new ListNode(2);
            tNode1.next = new ListNode(4);
            tNode1.next.next = new ListNode(3);
            ListNode tNode2 = new ListNode(5);
            tNode2.next = new ListNode(6);
            tNode2.next.next = new ListNode(4);

            while (tNode1 != null)
            {
                Console.WriteLine(tNode1.val);
                tNode1 = tNode1.next;
            }
        }

        //static ListNode AddTwoNumber(ListNode InNode1, ListNode InNode2)
        //{
                
        //}
    }
}
