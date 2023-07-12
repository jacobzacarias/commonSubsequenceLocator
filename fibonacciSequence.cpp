#include <iostream>
#include <vector>

// Function to calculate the fibonacci sequence up to a specific limit
std::vector<int> calculateFibonacciSequence(int limit)
{
    std::vector<int> sequence;
    if (limit >= 1)
        sequence.push_back(0); // First Fibonacci number
    if (limit >= 2)
        sequence.push_back(1); // Second Fibonacci number

    int i = 2;
    while (true)
    {
        int nextNum = sequence[i - 1] + sequence[i - 2];
        if (nextNum <= limit)
            sequence.push_back(nextNum);
        else
            break;
        i++;
    }

    return sequence;
}

// Function to locate common sequences
void locateCommonSequences(const std::vector<int>& sequence)
{
    // Here, the logic can locate common sequences
    // This is a simple example that checks for even numbers in the sequence
    std::cout << "Common sequences:\n";
    for (int num : sequence)
    {
        if (num % 2 == 0)
            std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int limit;
    std::cout << "Enter the limit for the Fibonacci sequence: ";
    std::cin >> limit;

    std::vector<int> fibonacciSequence = calculateFibonacciSequence(limit);

    locateCommonSequences(fibonacciSequence);

    return 0;
}
