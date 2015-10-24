
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
	
				//length of start and endtag
				int sl= strlen(pStartTag)++;
				int el = strlen(pEndTag)++;

				//initialize mem space of pStartTag, pEndTag
				StringParserClass::pStartMem = (char*)malloc(sl);
				StringParserClass::pEndMem = (char*)malloc(el);

				//set tag to pStartTag
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
