#include <iostream>
#include <string>

/*
    Headers Should Not Include using Declarations
    Code inside headers ordinarily should not use using declarations.
    The reason is that the contents of a header are copied into the including program’s
    text. If a header has a using declaration, then every program that includes that
    header gets that same using declaration. As a result, a program that didn’t intend
    to use the specified library name might encounter unexpected name conflicts.
*/
using std::string;
using std::cin;
using std::cout;
using std::endl;

/*
    os << s Writes s onto output stream os. Returns os.
    is >> s Reads whitespace-separated string from is into s. Returns is.
    getline(is, s) Reads a line of input from is into s. Returns is.
    s.empty() Returns true if s is empty; otherwise returns false.
    s.size() Returns the number of characters in s.
    s[n] Returns a reference to the char at position n in s; positions start at 0.
    s1 + s2 Returns a string that is the concatenation of s1 and s2.
    s1 = s2 Replaces characters in s1 with a copy of s2.
    s1 == s2
    s1 != s2
    The strings s1 and s2 are equal if they contain the same characters.
    Equality is case-sensitive.
    <, <=, >, >= Comparisons are case-sensitive and use dictionary ordering.
*/

int main(){
    string firstname, lastname;
    string greeting = "Hello" ;

    string s5 = "hiya"; // copy initialization
    string s6("hiya");  // direct initialization
    string s7(10, 'c'); // direct initialization; s7 is cccccccccc

    cout << "Enter your first name and last name: " << endl;
    cin>>firstname>>lastname;
    // When we mix strings and string or character literals, at least one operand to each +operator must be of string type
    // string s5 = "hello" + ", "; // error: no string operand. "hello" is a string literal and ", " is a string literal
    cout << greeting + " " + firstname + " " + lastname + "!" << endl;

    // Reading an Unknown Number of strings or invalid input
    string word;
    while (cin >> word)       // read until end-of-file
        cout << word << endl; // write each word followed by a new line

    // Using getline to Read an Entire Line

    /*
        The getline function takes an input stream and a string. This function reads the given stream
        up to and including the first newline and stores what it read—not including the
        newline—in its string argument. After getline sees a newline, even if it is the
        first character in the input, it stops reading and returns. If the first character in the
        input is a newline, then the resulting string is the empty string.
        Like the input operator, getline returns its istream argument. As a result,
        we can use getline as a condition just as we can use the input operator as a
        condition. The following loop reads an entire line at a time:
    */
    string line;
    // read input a line at a time until end-of-file. The newline that causes getline to return is discarded; the newline is
    //not stored in the string.
    while (getline(cin, line)) 
        if (line.size() > 80)
            cout<< line << endl; // write each line followed by a new line

    // The string::size_type Type
    /*
        It might be logical to expect that size returns an int or, at least, an unsigned int.
        Instead, size returns a string::size_type value.
        The string class—and most other library types—defines several companion types. These companion types make it possible to use the library types in a
        machine-independent manner. The type size_type is one of these companion
        types. To use the size_type defined by string, we use the scope operator to
        say that the name size_type is defined in the string class. 
        The type string::size_type is an unsigned type that is big enough to hold the size of any string.
    */
    // Any variable used to store the result from the string size operation
    // should be of type string::size_type. Under the new
    //standard, we can ask the compiler to provide the appropriate type by using auto or decltype
    auto len = line.size(); // len has type string::size_type
    cout << "Length of line: " << len << endl;

    // Processing Every Character? Use Range-Based for
    /*
        for (declaration : expression)
            statement
    */

    string str("Hello World!!!");
    decltype(str.size()) punct_cnt = 0;
    // print the characters in str one character to a line
    for (auto c : str){     // for every char in str
        cout << c << endl; // print the current character followed by a newline
        if (ispunct(c))        // if the character is punctuation
            ++punct_cnt;       // increment the punctuation counter
    }
    cout << punct_cnt<< " punctuation characters in " << str << endl;

    /*
        isalnum(c) true if c is a letter or a digit.
        isalpha(c) true if c is a letter.
        iscntrl(c) true if c is a control character.
        isdigit(c) true if c is a digit.
        isgraph(c) true if c is not a space but is printable.
        islower(c) true if c is a lowercase letter.
        isprint(c) true if c is a printable character (i.e., a space or a character that has a
        visible representation).
        ispunct(c) true if c is a punctuation character (i.e., a character that is not a control
        character, a digit, a letter, or a printable whitespace).
        isspace(c) true if c is whitespace (i.e., a space, tab, vertical tab, return, newline, or
        formfeed).
        isupper(c) true if c is an uppercase letter.
        isxdigit(c) true if c is a hexadecimal digit.
        tolower(c) If c is an uppercase letter, returns its lowercase equivalent; otherwise
        returns c unchanged.
        toupper(c) If c is a lowercase letter, returns its uppercase equivalent; otherwise returns
        c unchanged.
    */

    // Using a Range for to Change the Characters in a string

    string s("Hello World!!!");
    // convert s to uppercase
    for (auto &c : s)   // for every char in s (note: c is a reference)
        c = toupper(c); // c is a reference, so the assignment changes the char in s
    cout << s << endl;

    // Subscripting a string Returns a Reference to the Character
    /*Subscripts for strings start at zero; if s is a string with at least two characters, then s[0] is the first character, 
    s[1] is the second, and the last character is in s[s.size() - 1].
    */
    string s1 = "A string example";
    if (!s1.empty()) // make sure there's a character to print
        s1[0] = toupper(s1[0]); // capitalize the first character in s

    // Using a Subscript for Iteration
    // process characters in s until we run out of characters or we hit a whitespace
    for (decltype(s.size()) index = 0;  index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]); // capitalize the current character

    return 0;

}