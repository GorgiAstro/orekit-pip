#ifndef java_lang_Character_H
#define java_lang_Character_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Character;
    class Class;
    class String;
    class Comparable;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Character : public ::java::lang::Object {
     public:
      enum {
        mid_init$_102587d250c3217b,
        mid_charCount_0092017e99012694,
        mid_charValue_d156d1ce330f6993,
        mid_codePointAt_6fa9e4b9900636fe,
        mid_codePointAt_85e776c466ce7677,
        mid_codePointAt_f0b052b9721148b0,
        mid_codePointBefore_6fa9e4b9900636fe,
        mid_codePointBefore_85e776c466ce7677,
        mid_codePointBefore_f0b052b9721148b0,
        mid_codePointCount_f0b052b9721148b0,
        mid_codePointCount_ed571a5dff49de9c,
        mid_codePointOf_a6602ba493f77974,
        mid_compare_c8c304a5511f86d9,
        mid_compareTo_bd48eee168ca5dd8,
        mid_digit_2023ddd7347a5b94,
        mid_digit_5625cf3db98dadc1,
        mid_equals_221e8e85cb385209,
        mid_forDigit_ec470d625afee1a6,
        mid_getDirectionality_93e774631b43a80a,
        mid_getDirectionality_8760571776ef2b7c,
        mid_getName_0f10d4a5e06f61c0,
        mid_getNumericValue_834d0cf4ba67ada8,
        mid_getNumericValue_0092017e99012694,
        mid_getType_834d0cf4ba67ada8,
        mid_getType_0092017e99012694,
        mid_hashCode_412668abc8d889e9,
        mid_hashCode_834d0cf4ba67ada8,
        mid_highSurrogate_4affd00329d5d4cf,
        mid_isAlphabetic_e034cac2b514bb09,
        mid_isBmpCodePoint_e034cac2b514bb09,
        mid_isDefined_8b1aec3f414bd49d,
        mid_isDefined_e034cac2b514bb09,
        mid_isDigit_8b1aec3f414bd49d,
        mid_isDigit_e034cac2b514bb09,
        mid_isHighSurrogate_8b1aec3f414bd49d,
        mid_isISOControl_8b1aec3f414bd49d,
        mid_isISOControl_e034cac2b514bb09,
        mid_isIdentifierIgnorable_8b1aec3f414bd49d,
        mid_isIdentifierIgnorable_e034cac2b514bb09,
        mid_isIdeographic_e034cac2b514bb09,
        mid_isJavaIdentifierPart_8b1aec3f414bd49d,
        mid_isJavaIdentifierPart_e034cac2b514bb09,
        mid_isJavaIdentifierStart_8b1aec3f414bd49d,
        mid_isJavaIdentifierStart_e034cac2b514bb09,
        mid_isJavaLetter_8b1aec3f414bd49d,
        mid_isJavaLetterOrDigit_8b1aec3f414bd49d,
        mid_isLetter_8b1aec3f414bd49d,
        mid_isLetter_e034cac2b514bb09,
        mid_isLetterOrDigit_8b1aec3f414bd49d,
        mid_isLetterOrDigit_e034cac2b514bb09,
        mid_isLowSurrogate_8b1aec3f414bd49d,
        mid_isLowerCase_8b1aec3f414bd49d,
        mid_isLowerCase_e034cac2b514bb09,
        mid_isMirrored_8b1aec3f414bd49d,
        mid_isMirrored_e034cac2b514bb09,
        mid_isSpace_8b1aec3f414bd49d,
        mid_isSpaceChar_8b1aec3f414bd49d,
        mid_isSpaceChar_e034cac2b514bb09,
        mid_isSupplementaryCodePoint_e034cac2b514bb09,
        mid_isSurrogate_8b1aec3f414bd49d,
        mid_isSurrogatePair_522b939d28cefe74,
        mid_isTitleCase_8b1aec3f414bd49d,
        mid_isTitleCase_e034cac2b514bb09,
        mid_isUnicodeIdentifierPart_8b1aec3f414bd49d,
        mid_isUnicodeIdentifierPart_e034cac2b514bb09,
        mid_isUnicodeIdentifierStart_8b1aec3f414bd49d,
        mid_isUnicodeIdentifierStart_e034cac2b514bb09,
        mid_isUpperCase_8b1aec3f414bd49d,
        mid_isUpperCase_e034cac2b514bb09,
        mid_isValidCodePoint_e034cac2b514bb09,
        mid_isWhitespace_8b1aec3f414bd49d,
        mid_isWhitespace_e034cac2b514bb09,
        mid_lowSurrogate_4affd00329d5d4cf,
        mid_offsetByCodePoints_ed571a5dff49de9c,
        mid_offsetByCodePoints_723c61fbbbb55517,
        mid_reverseBytes_33d3b9476ded31af,
        mid_toChars_5db89bc9b6cbd06c,
        mid_toChars_4edf585b2da9b651,
        mid_toCodePoint_c8c304a5511f86d9,
        mid_toLowerCase_33d3b9476ded31af,
        mid_toLowerCase_0092017e99012694,
        mid_toString_3cffd47377eca18a,
        mid_toString_2e13aecc9b888e11,
        mid_toString_0f10d4a5e06f61c0,
        mid_toTitleCase_33d3b9476ded31af,
        mid_toTitleCase_0092017e99012694,
        mid_toUpperCase_33d3b9476ded31af,
        mid_toUpperCase_0092017e99012694,
        mid_valueOf_3ff79cac087c1bb2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Character(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Character(const Character& obj) : ::java::lang::Object(obj) {}

      static jint BYTES;
      static jbyte COMBINING_SPACING_MARK;
      static jbyte CONNECTOR_PUNCTUATION;
      static jbyte CONTROL;
      static jbyte CURRENCY_SYMBOL;
      static jbyte DASH_PUNCTUATION;
      static jbyte DECIMAL_DIGIT_NUMBER;
      static jbyte DIRECTIONALITY_ARABIC_NUMBER;
      static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL;
      static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
      static jbyte DIRECTIONALITY_FIRST_STRONG_ISOLATE;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
      static jbyte DIRECTIONALITY_NONSPACING_MARK;
      static jbyte DIRECTIONALITY_OTHER_NEUTRALS;
      static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
      static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR;
      static jbyte DIRECTIONALITY_UNDEFINED;
      static jbyte DIRECTIONALITY_WHITESPACE;
      static jbyte ENCLOSING_MARK;
      static jbyte END_PUNCTUATION;
      static jbyte FINAL_QUOTE_PUNCTUATION;
      static jbyte FORMAT;
      static jbyte INITIAL_QUOTE_PUNCTUATION;
      static jbyte LETTER_NUMBER;
      static jbyte LINE_SEPARATOR;
      static jbyte LOWERCASE_LETTER;
      static jbyte MATH_SYMBOL;
      static jint MAX_CODE_POINT;
      static jchar MAX_HIGH_SURROGATE;
      static jchar MAX_LOW_SURROGATE;
      static jint MAX_RADIX;
      static jchar MAX_SURROGATE;
      static jchar MAX_VALUE;
      static jint MIN_CODE_POINT;
      static jchar MIN_HIGH_SURROGATE;
      static jchar MIN_LOW_SURROGATE;
      static jint MIN_RADIX;
      static jint MIN_SUPPLEMENTARY_CODE_POINT;
      static jchar MIN_SURROGATE;
      static jchar MIN_VALUE;
      static jbyte MODIFIER_LETTER;
      static jbyte MODIFIER_SYMBOL;
      static jbyte NON_SPACING_MARK;
      static jbyte OTHER_LETTER;
      static jbyte OTHER_NUMBER;
      static jbyte OTHER_PUNCTUATION;
      static jbyte OTHER_SYMBOL;
      static jbyte PARAGRAPH_SEPARATOR;
      static jbyte PRIVATE_USE;
      static jint SIZE;
      static jbyte SPACE_SEPARATOR;
      static jbyte START_PUNCTUATION;
      static jbyte SURROGATE;
      static jbyte TITLECASE_LETTER;
      static ::java::lang::Class *TYPE;
      static jbyte UNASSIGNED;
      static jbyte UPPERCASE_LETTER;

      Character(jchar);

      static jint charCount(jint);
      jchar charValue() const;
      static jint codePointAt(const JArray< jchar > &, jint);
      static jint codePointAt(const ::java::lang::CharSequence &, jint);
      static jint codePointAt(const JArray< jchar > &, jint, jint);
      static jint codePointBefore(const JArray< jchar > &, jint);
      static jint codePointBefore(const ::java::lang::CharSequence &, jint);
      static jint codePointBefore(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const ::java::lang::CharSequence &, jint, jint);
      static jint codePointOf(const ::java::lang::String &);
      static jint compare(jchar, jchar);
      jint compareTo(const Character &) const;
      static jint digit(jchar, jint);
      static jint digit(jint, jint);
      jboolean equals(const ::java::lang::Object &) const;
      static jchar forDigit(jint, jint);
      static jbyte getDirectionality(jchar);
      static jbyte getDirectionality(jint);
      static ::java::lang::String getName(jint);
      static jint getNumericValue(jchar);
      static jint getNumericValue(jint);
      static jint getType(jchar);
      static jint getType(jint);
      jint hashCode() const;
      static jint hashCode(jchar);
      static jchar highSurrogate(jint);
      static jboolean isAlphabetic(jint);
      static jboolean isBmpCodePoint(jint);
      static jboolean isDefined(jchar);
      static jboolean isDefined(jint);
      static jboolean isDigit(jchar);
      static jboolean isDigit(jint);
      static jboolean isHighSurrogate(jchar);
      static jboolean isISOControl(jchar);
      static jboolean isISOControl(jint);
      static jboolean isIdentifierIgnorable(jchar);
      static jboolean isIdentifierIgnorable(jint);
      static jboolean isIdeographic(jint);
      static jboolean isJavaIdentifierPart(jchar);
      static jboolean isJavaIdentifierPart(jint);
      static jboolean isJavaIdentifierStart(jchar);
      static jboolean isJavaIdentifierStart(jint);
      static jboolean isJavaLetter(jchar);
      static jboolean isJavaLetterOrDigit(jchar);
      static jboolean isLetter(jchar);
      static jboolean isLetter(jint);
      static jboolean isLetterOrDigit(jchar);
      static jboolean isLetterOrDigit(jint);
      static jboolean isLowSurrogate(jchar);
      static jboolean isLowerCase(jchar);
      static jboolean isLowerCase(jint);
      static jboolean isMirrored(jchar);
      static jboolean isMirrored(jint);
      static jboolean isSpace(jchar);
      static jboolean isSpaceChar(jchar);
      static jboolean isSpaceChar(jint);
      static jboolean isSupplementaryCodePoint(jint);
      static jboolean isSurrogate(jchar);
      static jboolean isSurrogatePair(jchar, jchar);
      static jboolean isTitleCase(jchar);
      static jboolean isTitleCase(jint);
      static jboolean isUnicodeIdentifierPart(jchar);
      static jboolean isUnicodeIdentifierPart(jint);
      static jboolean isUnicodeIdentifierStart(jchar);
      static jboolean isUnicodeIdentifierStart(jint);
      static jboolean isUpperCase(jchar);
      static jboolean isUpperCase(jint);
      static jboolean isValidCodePoint(jint);
      static jboolean isWhitespace(jchar);
      static jboolean isWhitespace(jint);
      static jchar lowSurrogate(jint);
      static jint offsetByCodePoints(const ::java::lang::CharSequence &, jint, jint);
      static jint offsetByCodePoints(const JArray< jchar > &, jint, jint, jint, jint);
      static jchar reverseBytes(jchar);
      static JArray< jchar > toChars(jint);
      static jint toChars(jint, const JArray< jchar > &, jint);
      static jint toCodePoint(jchar, jchar);
      static jchar toLowerCase(jchar);
      static jint toLowerCase(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jchar);
      static ::java::lang::String toString(jint);
      static jchar toTitleCase(jchar);
      static jint toTitleCase(jint);
      static jchar toUpperCase(jchar);
      static jint toUpperCase(jint);
      static Character valueOf(jchar);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Character);
    extern PyTypeObject *PY_TYPE(Character);

    class t_Character {
    public:
      PyObject_HEAD
      Character object;
      static PyObject *wrap_Object(const Character&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
