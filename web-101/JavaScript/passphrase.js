function isValidPassphrase(text) {
  let words = text.split(" ");
  if (words.length < 4) {
    return false;
  }
  for (let i = 0; i < words.length; i++) {
    if (words[i].length <= 1) {
      return false;
    }
  }
  return true;
}

module.exports = isValidPassphrase;

// **Important notes on the task:**

// 1. Fill in your code only in the commented space (// Please full in your code here) and do not change any other parts of the file.
// 2. Your implementation should basically use the input `text` and check whether it's a valid passphrase as described in the lesson content.
// 3. The function should return a boolean value, i.e return a true if the `text` is a valid passphrase and a false otherwise.
// 4. As you are yet to be introduced to functions , here are few examples to understand what it means to `return` a value.
//		Consider a function called sum that addes two numbers as given below:
//
//		function sum(a,b)
//		{
//		  let result = a + b;
//
// 		  return result;
//		}
//
//      Or another function that returns a boolean value based on the input color string.
//
//		function isColorRed(color)
//		{
//		  let result = color == "red";
//
// 		  return result;
//		}
//
// 	  In a similar fashion inside your function `isValidPassphrase` fill in code that would compute the validity of the passphrase and return that value.
//    Here is approximately how it would like like.
//		function isValidPassphrase(text)
//		{
//		  let result = #####;
// 		  return result;
//		}
//
//    Here `result` is just a variable that holds the value that the function returns. You need to complete the way in which `result` is computed. Good luck with the task :)
// 5. Inorder to test the code you can just copy the function alone to a browser console, and call the function with different values of input text.

// **A small note on module.exports**
//
// You might be curious what module.exports does in this file after the function definition, though you wouldn't need to touch those lines of code in this file.
// In a real world large code base you might have your code distributed over lot of files.
// Exports allow us to make different components such as variables, functions etc in one file available in another file. We basically import statement is the target file.
