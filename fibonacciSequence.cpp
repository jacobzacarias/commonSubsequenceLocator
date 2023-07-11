using System;

class TextTransformer
{
    public static string TransformText(string inputText)
    {
        // Add your transformation logic here
        // This is just a simple example
        string transformedText = "Thank you for your input: " + inputText;
        return transformedText;
    }

    static void Main()
    {
        Console.WriteLine("Enter a text to transform:");
        string input = Console.ReadLine();

        string transformedText = TransformText(input);
        Console.WriteLine("Transformed text: " + transformedText);

        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}
