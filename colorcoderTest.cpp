#include <iostream>
#include <assert.h>
#include "colorcoder.h"

void PairToNumberTest(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber) {
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void NumberToPairTest(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor) {
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

int main() {

    PairToNumberTest(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    PairToNumberTest(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    NumberToPairTest(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    NumberToPairTest(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
 
    return 0;
}
