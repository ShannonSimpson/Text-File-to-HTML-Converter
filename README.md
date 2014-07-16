Text-File-to-HTML-Converter
===========================

Given specific attributes added to text in .txt file, text is converted to .html file

written by: Shannon Simpson

Utilizes Polymorphism, Inheritence, Flow control, stream handling, and header and implementation files.

The program will be a 3 step process:
1.) read in a text file (or text directly from the console)
2.) apply a series of filters to it (involving some primitive HTML conversion)
3.) then send the output to a file (or back to the console).

The program will first prompt the user for the input file to use; 
  if the user enters “console”, the program will take its input directly from the console.
Then the program will ask for the output file to use. 
  Again, if the user enters “console” it will send the output directly to the console.

The filters required (and the letter used to indicate them) are:
H – HTMLize. 
  This filter will make the output into a valid HTML document; 
  adding “<html><head><title>HTML document</title></head><body>” to the beginning and “</body></html>” to the end 
I – Italicize. 
  It is a common convention in text to add emphasis to a word or phrase by surrounding it with asterisks. 
  This filter will read in those asterisks and replace them with HTML italics tags; 
  so that “*this is important*” will be replaced with “<i>this is important</i>”.
B – Bold. 
  To use bold instead of italics, filter using B before I.
  so the bold filter will replace asterisk-marked text with HTML bold tags – so “*emphasis*” becomes “<b>emphasis</b>”.
U – Underline. 
  This filter will do much the same as the I and B filters, 
  except it will convert text marked out with underscores into HTML underline tags – 
  so “_underlined text_” becomes “<u>underlined text</u>”.
E – Endlines. 
  This filter will convert any end of line characters (which can be identified as a ‘\n’ character) to “<br>” 
L – Links. 
  This filter will find any HTML links embedded in the raw text and convert them into actual HTML links, 
  so “http://www.google.com” becomes “<a href=”www.google.com”>http://www.google.com</a>”
