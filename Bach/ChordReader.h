/*
  ==============================================================================

    ChordReader.h
    Created: 7 Apr 2017 5:49:51pm
    Author:  blist

  ==============================================================================
*/

#ifndef CHORDREADER_H_INCLUDED
#define CHORDREADER_H_INCLUDED
#include "../JuceLibraryCode/JuceHeader.h"
#include <map>
#include<string>
#include<regex>
#include <vector>
#include <iostream>
using namespace std;
class ChordReader {
public:
    ChordReader();
	Array<String> readChord(String symbol);
private:
    HashMap<String, Array<String>> SYMBOLS;
	var c;
	String parsing;
	Array<String> additionals;
	String name;
	var chordLength;
	Array<String> notes;
	bool explicitMajor;
	void resetState();
	void setChord(String name);
	Array<String> split(string s, regex regexDelimiter);
};




#endif  // CHORDREADER_H_INCLUDED