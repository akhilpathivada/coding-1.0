/* 
 * Given an array of n numbers and a positive integer k. The problem is to find k numbers with most occurrences, i.e., the top k numbers having the maximum frequency. If two numbers have the same frequency then the larger number should be given preference. The numbers should be displayed in decreasing order of their frequencies. It is assumed that the array consists of k numbers with most occurrences.
 *
 * Examples:
 *
 * Input:
 * arr[] = {3, 1, 4, 4, 5, 2, 6, 1},
 * k = 2
 * Output: 4 1
 * Explanation:
 * Frequency of 4 = 2
 * Frequency of 1 = 2
 * These two have the maximum frequency and 4 is larger than 1.
 *
 * Time Complexity: O(k log d + d), where d is the count of distinct elements in the array. To remove the top of priority queue O(log d) time is required, so if k elements are removed then O(k log d) time is required and to traverse the distinct elements O(d) time is required.
 * Auxiliary Space: O(d), where d is the count of distinct elements in the array. To store the elements in HashMap O(d) space complexity is needed.
 *
 *  */

import java.util.*;

class GFG { 

	private static void getKTopFrequenciedNumbers(int[] arr, int n, int k) {

		Map<Integer, Integer> map = new HashMap<Integer, Integer>();

		for(int i : arr) {

			map.put(i, map.getOrDefault(i, 0) + 1);
		}
		
		PriorityQueue<Map.Entry<Integer, Integer>> maxHeap = new PriorityQueue<>(
									(a, b) ->
									a.getValue().equals(b.getValue())
									? Integer.compare(b.getKey(), a.getKey()) 
									: Integer.compare(b.getValue(), a.getValue()));
		
		for(Map.Entry<Integer, Integer> entry : map.entrySet()) {

			maxHeap.offer(entry);
		}
		
		while(k-- > 0) {

			System.out.print(maxHeap.poll().getKey() + ", ");
		}
	}

	public static void main(String[] args) {

		int arr[] = { 7, 10, 11, 5, 2, 5, 5, 7, 11, 8, 9};
		int n = arr.length;
		int k = 4;

		getKTopFrequenciedNumbers(arr, n, k);
	}
}
