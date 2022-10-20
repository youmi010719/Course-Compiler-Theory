#include "analyzer_args.h"
#include "methods.h"

int letter(char c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return IDENTIFIER;
	else
		return 0;
}

int number(char c)
{
	if(c >= '0' && c <= '9')
		return IDENTIFIER;
	else
		return 0;
}

int cat_identifier(char s[])
{
	if(strcmp(s, "void") == 0)
		return VOID;
	else if(strcmp(s, "float") == 0)
		return FLOAT;
	else if(strcmp(s, "double") == 0)
		return DOUBLE;
	else if(strcmp(s, "if") == 0)
		return IF;
	else if(strcmp(s, "else") == 0)
		return ELSE;
	else if(strcmp(s, "for") == 0)
		return FOR;
	else if(strcmp(s, "do") == 0)
		return DO;
	else if(strcmp(s, "while") == 0)
		return WHILE;
	else if(strcmp(s, "return") == 0)
		return RETURN;
	else if(strcmp(s, "break") == 0)
		return BREAK;
	else
		return IDENTIFIER;
}

int cat_singleChar(char c)
{
	if(c == ';')
		return SEMICOLON;
	else if(c == ',')
		return COMMA;
	else if(c == '(')
		return L_PTS;
	else if(c == ')')
		return R_PTS;
	else if(c == '[')
		return L_BRACKET;
	else if(c == ']')
		return R_BRACKET;
	else if(c == '{')
		return L_BRACE;
	else if(c == '}')
		return R_BRACE;
	else if(c == '%')
		return IDIV;
	else
		return 0;
}

int analyzer(FILE* fp)
{
	while(!feof(fp))
	{
		
	}
}