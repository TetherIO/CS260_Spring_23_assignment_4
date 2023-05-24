# CS260_Spring_23_assignment_4
Assignment 4 (Arbitrary list operations)

    Create a linked-list that allows:

        an add function that takes a value and inserts it into a given position into the list
   ![](https://github.com/TetherIO/CS260_Spring_23_assignment_4/blob/main/addfunction.png)

        a remove function that takes a position and removes the value stored at that position of the list and returns it
   ![](https://github.com/TetherIO/CS260_Spring_23_assignment_4/blob/main/removefunction.png)

        a get function that takes a position and returns that value without removing it
   ![](https://github.com/TetherIO/CS260_Spring_23_assignment_4/blob/main/getfunction.png)

    Oe test function for each piece of functionality that should verify that your code is working!
![](https://github.com/TetherIO/CS260_Spring_23_assignment_4/blob/main/simpletests.png)


The time complexity of the functions are likely all O(n) because they all require a traversal of elements for up to n elements. It seems to be this way because the other operations are constant time operations like returning data, removal of nodes, and creating a new node -- which suggests to me that overall they're O(n)
