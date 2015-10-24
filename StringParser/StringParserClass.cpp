
#include <string>
#include "..\Include\stringparserClass.h"
#include "..\Include\FileReader.h"
#include "..\Include\constants.h"
#include "..\Include\Debug_Help.h"

using namespace std;
using namespace KP_StringParserClass;

//TODO Fill this in
StringParserClass::StringParserClass(void){
		char	*pStartTag = new char;
		char	*pEndTag = new char;
		bool	areTagsSet = false;
		int		lastError=0;
}
StringParserClass::~StringParserClass(){}
int StringParserClass::getLastError(){

	return lastError;
}
bool StringParserClass::setTags(const char *pStartTag, const char *pEndTag){
	
				//length of both tags
				int sl= strlen(pStartTag)++;
				int el = strlen(pEndTag)++;

				//initialize memory space
				StringParserClass::pStartMem = (char*)malloc(sl);
				StringParserClass::pEndMem = (char*)malloc(el);

				//set memory space to pStartMem
				strncpy(StringParserClass::pStartMem,pStartMem,sl);
				strncpy(StringParserClass::pEndMem,pEndMem,el);
				if(*StringParserClass::pStartMem != NULL && *StringParserClass::pEndMem != NULL){
					areTagsSet = true;
				}else{
					lastError = ERROR_DATA_NULL;
					return false;
				}
				return areTagsSet;
		}
