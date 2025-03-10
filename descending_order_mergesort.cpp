
using System.Diagnostics;

namespace MergeSort
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const int arrayLength = 1_000_000;

            int[] inputArray = new int[arrayLength];

            Random random = new();
            for (int i = 0; i < arrayLength; i++)
                inputArray[i] = random.Next();

            Stopwatch stopwatch = new();
            stopwatch.Start();

            PerformMergeSort(inputArray);

            stopwatch.Stop();

            for (int i = 0; i < inputArray.Length; i++)
                Console.Write($"{inputArray[i]}  ");

            Console.WriteLine();
            Console.WriteLine($"Sorted {arrayLength:#,#} elements in {stopwatch.Elapsed.TotalMilliseconds} milliseconds");
        }

        private static void PerformMergeSort(int[] arr)
        {
            int length = arr.Length;

            if (length <= 1)
                return;

            int middleElementPosition = length / 2;

            int[] leftPartition = new int[middleElementPosition];
            int[] rightPartition = new int[length - middleElementPosition];

            for (int i = 0; i < middleElementPosition; i++)
                leftPartition[i] = arr[i];

            for (int i = middleElementPosition; i < length; i++)
                rightPartition[i - middleElementPosition] = arr[i];

            PerformMergeSort(leftPartition);
            PerformMergeSort(rightPartition);
            MergeTwoArrays(arr, leftPartition, rightPartition);
        }

        private static void MergeTwoArrays(int[] originalInputArray, int[] leftPartition, int[] rightPartition)
        {
            int leftSize = leftPartition.Length;
            int rightSize = rightPartition.Length;

            int leftPartitionIterator = 0, rightPartitionIterator = 0, originalArrayIterator = 0;

            while (leftPartitionIterator < leftSize && rightPartitionIterator < rightSize)
            {
                if (leftPartition[leftPartitionIterator] >= rightPartition[rightPartitionIterator])
                    originalInputArray[originalArrayIterator++] = leftPartition[leftPartitionIterator++];
                else
                    originalInputArray[originalArrayIterator++] = rightPartition[rightPartitionIterator++];
            }

            while (leftPartitionIterator < leftSize)
                originalInputArray[originalArrayIterator++] = leftPartition[leftPartitionIterator++];

            while (rightPartitionIterator < rightSize)
                originalInputArray[originalArrayIterator++] = rightPartition[rightPartitionIterator++];
        }
    }
}

