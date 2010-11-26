#include "StandardEncoding.h"
#include "BetweenIncluding.h"

static const char* scGlyphNames[256] = 
{
		".notdef", ".notdef", ".notdef", ".notdef", ".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		"space", "exclam", "quotedbl", "numbersign","dollar", "percent", "ampersand", "quoteright",
		"parenleft", "parenright", "asterisk", "plus","comma", "hyphen", "period", "slash",
		"zero", "one", "two", "three","four", "five", "six", "seven",
		"eight", "nine", "colon", "semicolon","less", "equal", "greater", "question",
		"at", "A", "B", "C", "D", "E", "F", "G",
		"H", "I", "J", "K", "L", "M", "N", "O",
		"P", "Q", "R", "S", "T", "U", "V", "W",	
		"X", "Y", "Z", "bracketleft", "backslash", "bracketright", "asciicircum", "underscore",
		"quoteleft", "a", "b", "c", "d", "e", "f", "g",
		"h", "i", "j", "k", "l", "m", "n", "o",
		"p", "q", "r", "s", "t", "u", "v", "w",
		"x", "y", "z", "braceleft",	"bar", "braceright", "asciitilde", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",	".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", "exclamdown", "cent", "sterling","fraction", "yen", "florin", "section",
		"currency", "quotesingle", "quotedblleft", "guillemotleft",	"guilsinglleft", "guilsinglright", "fi", "fl",
		".notdef", "endash", "dagger", "daggerdbl",	"periodcentered", ".notdef", "paragraph", "bullet",
		"quotesinglbase", "quotedblbase", "quotedblright", "guillemotright","ellipsis", "perthousand", ".notdef", "questiondown",
		".notdef", "grave", "acute", "circumflex","tilde", "macron", "breve", "dotaccent",
		"dieresis", ".notdef", "ring", "cedilla",".notdef", "hungarumlaut", "ogonek", "caron",
		"emdash", ".notdef", ".notdef", ".notdef",".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", ".notdef", ".notdef", ".notdef",".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", "AE", ".notdef", "ordfeminine",".notdef", ".notdef", ".notdef", ".notdef",
		"Lslash", "Oslash", "OE", "ordmasculine",".notdef", ".notdef", ".notdef", ".notdef",
		".notdef", "ae", ".notdef", ".notdef",".notdef", "dotlessi", ".notdef", ".notdef",
		"lslash", "oslash", "oe", "germandbls",".notdef", ".notdef", ".notdef", ".notdef"
};

StandardEncoding::StandardEncoding(void)
{
}

StandardEncoding::~StandardEncoding(void)
{
}

const char* StandardEncoding::GetEncodedGlyphName(IOBasicTypes::Byte inEncodedCharacter)
{
	return scGlyphNames[inEncodedCharacter];
}
