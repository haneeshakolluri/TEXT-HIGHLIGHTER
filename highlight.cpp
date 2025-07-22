#include "highlight.hpp" 
 
void highlight_token(const std::string& token_type, const std::string& lexeme) { 
    if (token_type == "keyword") { 
        std::cout << "\033[1;34m" << lexeme << "\033[0m "; // Blue for keywords 
    } else if (token_type == "identifier") { 
        std::cout << "\033[0;32m" << lexeme << "\033[0m "; // Green for identifiers 
    } else if (token_type == "literal") { 
        std::cout << "\033[0;36m" << lexeme << "\033[0m "; // Cyan for literals 
    } else if (token_type == "operator") { 
        std::cout << "\033[0;33m" << lexeme << "\033[0m "; // Yellow for operators 
    } else if (token_type == "punctuation") { 
        std::cout << "\033[0;31m" << lexeme << "\033[0m "; // Red for punctuation 
    } else if (token_type == "comment") { 
        std::cout << "\033[0;35m" << lexeme << "\033[0m "; // Magenta for comments 
    } 
} 
