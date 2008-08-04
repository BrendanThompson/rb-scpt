/*
 * TEConstantGlue.h
 *
 * /Applications/TextEdit.app
 * osaglue 0.4.0
 *
 */

#import <Foundation/Foundation.h>


#import "Appscript/Appscript.h"


@interface TEConstant : ASConstant
+ (id)constantWithCode:(OSType)code_;

/* Enumerators */

+ (TEConstant *)applicationResponses;
+ (TEConstant *)ask;
+ (TEConstant *)case_;
+ (TEConstant *)detailed;
+ (TEConstant *)diacriticals;
+ (TEConstant *)expansion;
+ (TEConstant *)hyphens;
+ (TEConstant *)no;
+ (TEConstant *)numericStrings;
+ (TEConstant *)punctuation;
+ (TEConstant *)standard;
+ (TEConstant *)whitespace;
+ (TEConstant *)yes;

/* Types and properties */

+ (TEConstant *)April;
+ (TEConstant *)August;
+ (TEConstant *)December;
+ (TEConstant *)EPSPicture;
+ (TEConstant *)February;
+ (TEConstant *)Friday;
+ (TEConstant *)GIFPicture;
+ (TEConstant *)JPEGPicture;
+ (TEConstant *)January;
+ (TEConstant *)July;
+ (TEConstant *)June;
+ (TEConstant *)March;
+ (TEConstant *)May;
+ (TEConstant *)Monday;
+ (TEConstant *)November;
+ (TEConstant *)October;
+ (TEConstant *)PICTPicture;
+ (TEConstant *)RGB16Color;
+ (TEConstant *)RGB96Color;
+ (TEConstant *)RGBColor;
+ (TEConstant *)Saturday;
+ (TEConstant *)September;
+ (TEConstant *)Sunday;
+ (TEConstant *)TIFFPicture;
+ (TEConstant *)Thursday;
+ (TEConstant *)Tuesday;
+ (TEConstant *)Wednesday;
+ (TEConstant *)alias;
+ (TEConstant *)anything;
+ (TEConstant *)application;
+ (TEConstant *)applicationBundleID;
+ (TEConstant *)applicationSignature;
+ (TEConstant *)applicationURL;
+ (TEConstant *)attachment;
+ (TEConstant *)attributeRun;
+ (TEConstant *)best;
+ (TEConstant *)boolean;
+ (TEConstant *)boundingRectangle;
+ (TEConstant *)bounds;
+ (TEConstant *)centimeters;
+ (TEConstant *)character;
+ (TEConstant *)classInfo;
+ (TEConstant *)class_;
+ (TEConstant *)closeable;
+ (TEConstant *)collating;
+ (TEConstant *)color;
+ (TEConstant *)colorTable;
+ (TEConstant *)copies;
+ (TEConstant *)cubicCentimeters;
+ (TEConstant *)cubicFeet;
+ (TEConstant *)cubicInches;
+ (TEConstant *)cubicMeters;
+ (TEConstant *)cubicYards;
+ (TEConstant *)dashStyle;
+ (TEConstant *)data;
+ (TEConstant *)date;
+ (TEConstant *)decimalStruct;
+ (TEConstant *)degreesCelsius;
+ (TEConstant *)degreesFahrenheit;
+ (TEConstant *)degreesKelvin;
+ (TEConstant *)document;
+ (TEConstant *)doubleInteger;
+ (TEConstant *)elementInfo;
+ (TEConstant *)encodedString;
+ (TEConstant *)endingPage;
+ (TEConstant *)enumerator;
+ (TEConstant *)errorHandling;
+ (TEConstant *)eventInfo;
+ (TEConstant *)extendedFloat;
+ (TEConstant *)faxNumber;
+ (TEConstant *)feet;
+ (TEConstant *)fileName;
+ (TEConstant *)fileRef;
+ (TEConstant *)fileSpecification;
+ (TEConstant *)fileURL;
+ (TEConstant *)fixed;
+ (TEConstant *)fixedPoint;
+ (TEConstant *)fixedRectangle;
+ (TEConstant *)float128bit;
+ (TEConstant *)float_;
+ (TEConstant *)floating;
+ (TEConstant *)font;
+ (TEConstant *)frontmost;
+ (TEConstant *)gallons;
+ (TEConstant *)grams;
+ (TEConstant *)graphicText;
+ (TEConstant *)id_;
+ (TEConstant *)inches;
+ (TEConstant *)index;
+ (TEConstant *)integer;
+ (TEConstant *)internationalText;
+ (TEConstant *)internationalWritingCode;
+ (TEConstant *)item;
+ (TEConstant *)kernelProcessID;
+ (TEConstant *)kilograms;
+ (TEConstant *)kilometers;
+ (TEConstant *)list;
+ (TEConstant *)liters;
+ (TEConstant *)locationReference;
+ (TEConstant *)longFixed;
+ (TEConstant *)longFixedPoint;
+ (TEConstant *)longFixedRectangle;
+ (TEConstant *)longPoint;
+ (TEConstant *)longRectangle;
+ (TEConstant *)machPort;
+ (TEConstant *)machine;
+ (TEConstant *)machineLocation;
+ (TEConstant *)meters;
+ (TEConstant *)miles;
+ (TEConstant *)miniaturizable;
+ (TEConstant *)miniaturized;
+ (TEConstant *)missingValue;
+ (TEConstant *)modal;
+ (TEConstant *)modified;
+ (TEConstant *)name;
+ (TEConstant *)null;
+ (TEConstant *)ounces;
+ (TEConstant *)pagesAcross;
+ (TEConstant *)pagesDown;
+ (TEConstant *)paragraph;
+ (TEConstant *)parameterInfo;
+ (TEConstant *)path;
+ (TEConstant *)pixelMapRecord;
+ (TEConstant *)point;
+ (TEConstant *)pounds;
+ (TEConstant *)printSettings;
+ (TEConstant *)processSerialNumber;
+ (TEConstant *)properties;
+ (TEConstant *)property;
+ (TEConstant *)propertyInfo;
+ (TEConstant *)quarts;
+ (TEConstant *)record;
+ (TEConstant *)reference;
+ (TEConstant *)requestedPrintTime;
+ (TEConstant *)resizable;
+ (TEConstant *)rotation;
+ (TEConstant *)script;
+ (TEConstant *)shortFloat;
+ (TEConstant *)shortInteger;
+ (TEConstant *)size;
+ (TEConstant *)squareFeet;
+ (TEConstant *)squareKilometers;
+ (TEConstant *)squareMeters;
+ (TEConstant *)squareMiles;
+ (TEConstant *)squareYards;
+ (TEConstant *)startingPage;
+ (TEConstant *)string;
+ (TEConstant *)styledClipboardText;
+ (TEConstant *)styledText;
+ (TEConstant *)suiteInfo;
+ (TEConstant *)targetPrinter;
+ (TEConstant *)text;
+ (TEConstant *)textStyleInfo;
+ (TEConstant *)titled;
+ (TEConstant *)typeClass;
+ (TEConstant *)unicodeText;
+ (TEConstant *)unsignedInteger;
+ (TEConstant *)utf16Text;
+ (TEConstant *)utf8Text;
+ (TEConstant *)version;
+ (TEConstant *)version_;
+ (TEConstant *)visible;
+ (TEConstant *)window;
+ (TEConstant *)word;
+ (TEConstant *)writingCode;
+ (TEConstant *)yards;
+ (TEConstant *)zoomable;
+ (TEConstant *)zoomed;
@end


