<h2>BASICS: </h2>

The basic idea of the greedy approach is to calculate the ratio profit/weight for each item and sort the item on the basis of this ratio. Then take the item with the highest ratio and add them as much as we can (can be the whole element or a fraction of it).

This will always give the maximum profit because, in each step it adds an element such that this is the maximum possible profit for that much weight.


<h2>EXample: </h2>

Consider the example: arr[] = {{100, 20}, {60, 10}, {120, 30}}, W = 50.

Sorting: Initially sort the array based on the profit/weight ratio. The sorted array will be {{60, 10}, {100, 20}, {120, 30}}.

<h2> <b>Iteration:</b></h2>

For i = 0, weight = 10 which is less than W. So add this element in the knapsack. profit = 60 and remaining W = 50 – 10 = 40.
For i = 1, weight = 20 which is less than W. So add this element too. profit = 60 + 100 = 160 and remaining W = 40 – 20 = 20.
For i = 2, weight = 30 is greater than W. So add 20/30 fraction = 2/3 fraction of the element. Therefore profit = 2/3 * 120 + 160 = 80 + 160 = 240 and remaining W becomes 0.
So the final profit becomes 240 for W = 50.

<h2>STEPS: </h2>

1. Calculate the ratio (profit/weight) for each item.
2. Sort all the items in decreasing order of the ratio.
3. Initialize res = 0, curr_cap = given_cap.
4. Do the following for every item i in the sorted order:
5. If the weight of the current item is less than or equal to the remaining capacity then add the value of that item into the result
6. Else add the current item as much as we can and break out of the loop.
7. Return res.
