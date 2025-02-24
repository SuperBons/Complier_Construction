/**
 * This class implements the regular expressions used to parse the input
 */

/**
 * @author Danny Reinheimer
 *
 */
public class RegularExpressions {
	
	// Array of reserved words
	private String [] reservedWords = {"int","void","if","while","return","read","write","print","continue","break","binary",
			"decimal"};
	
	// Array of symbols
	private String [] symbols = {"(",")","{","}","[","]",",",";","+","-","*","/","==","!=",">",">=","<","<=",
			"=","&&","||"};
	
	/**
	 * Checks to see if the input matches a space. A space is defined as tab, spacebar, newline
	 * @param str The String to be checked
	 * @return boolean indicating if it is a space
	 */
	public boolean isSpace(String str) {
		char ch;
		for (int i = 0; i < str.length(); i++) {
			ch = str.charAt(i);
			if(ch != ' ' && ch != '\n' && ch != '\r' && ch != '\u001a' && ch != '\t') {
				// this is not space
				return false;
			}
		}
		return true;
	}
	
	/***
	 * Checks to see if a character is a digit
	 * @param c the character to check 
	 * @return boolean indicating if it is a digit
	 */
	private boolean isDigit(char c) {
		// TODO: Implement the recognition of digits 
		if (c >= '0' && c <= '9') return true;
		return false;
	}
	
	/**
	 * Checks to see if the given input matches the pattern for an identifier.
	 * The pattern is: Letter(Letter|digit)*
	 * @param str The input string that is being pasrsed which will be read one charecter at a time
	 * @return boolean indicating if it is an identifier
	 */
	public boolean isIdentifier(String str) {
		if (str == null || str.isEmpty()) return false;

		char first = str.charAt(0);
		if (!((first >= 'A' && first <= 'Z') || (first >= 'a' && first <= 'z')) && first != '_') {
			return false;
		}
	
		for (int i = 1; i < str.length(); i++) {
			char ch = str.charAt(i);
			if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) && ch != '_') {
				return false;
			}
		}
	
		return true;
	}

	/***
	 * Checks to see if the given input matches the pattern for a number.
	 * The pattern for number is: digit+
	 * @param str The input string that is being parsed which will be read one character at a time
	 * @return boolean indicating if it is a number
	 */
	public boolean isNumber(String str) {
		// TODO: Implement the recognition of numbers 

		if (str.length() == 0) {
			return false;
		}
		for ( int i = 0; i < str.length(); i++) {
			if (!isDigit(str.charAt(i))) {
				return false;
			}
		}
		return true; 
	}
	
	/***
	 * Checks to see if the given input matches the pattern for a reserved word.
	 * reserved words are: int, void, if, while, return, read, write, print, continue, break, binary, decimal
	 * @param str The input string that is being parsed and compaired against the list of reserved words 
	 * @return boolean indicating if it is a reserved word
	 */
	public boolean isReservedWord(String str) {
		// TODO: Implement the recognition of reserved words
		for ( int i = 0; i < reservedWords.length; i++) {
			if (str.equals(reservedWords[i])){ 
				return true;
			}
				
		}
		return false;
	}
	
	/***
	 * Checks to see if the given input matches the pattern for a symbol
	 * @param str The input string that is being parsed and compaired against the list of symbols
	 * @return boolean indicating if it is a symbol
	 */
	public boolean isSymbol(String str) {
		// TODO: Implement the recognition of symbols

		for ( int i = 0; i < symbols.length; i++){ 
			if(str.equals(symbols[i])) return true; 
		}
		return false; 
	}
	
	/**
	 * Checks to see if the given input matches the pattern for a string
	 * The pattern for a string is that it starts and ends with quotations 
	 * @param str The input string that is being parsed
	 * @return boolean indicating if it is a string
	 */
	public boolean isString(String str) {
		// TODO: Implement the recognition of strings
		if (str == null || str.length() < 2) {
			return false;
		}
		return str.charAt(0) == '"' && str.charAt(str.length() - 1) == '"';
	}
	
	/**
	 * Checks to see if the given input matches the pattern for a meta statement
	 * @param str The input string that is being parsed
	 * @return boolean indicating if it is a meta statement
	 */
	public boolean isMetaStatement(String str) {
		// TODO: Implement the recognition of meta statements
		if (str == null) {
			return false;
		}
		if (str.startsWith("#")) {
			return true;
		}
		if (str.startsWith("//")) {
			return true;
		}
		return false;	}
}
