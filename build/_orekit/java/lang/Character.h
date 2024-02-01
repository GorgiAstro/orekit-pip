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
        mid_init$_e8d07df586815a42,
        mid_charCount_d938fc64e8c6df2d,
        mid_charValue_153df32fe8b51cb6,
        mid_codePointAt_b02bbbd170d2fcab,
        mid_codePointAt_476f0175409db7b1,
        mid_codePointAt_1f255a7d724a5165,
        mid_codePointBefore_b02bbbd170d2fcab,
        mid_codePointBefore_476f0175409db7b1,
        mid_codePointBefore_1f255a7d724a5165,
        mid_codePointCount_1f255a7d724a5165,
        mid_codePointCount_9df436cfc781a40e,
        mid_codePointOf_84fe1f8fbbcb0268,
        mid_compare_e8954842228aac27,
        mid_compareTo_17fa0763069cc198,
        mid_digit_4a20c422dd799f2c,
        mid_digit_91b9e1e34b2235d5,
        mid_equals_72faff9b05f5ed5e,
        mid_forDigit_1da7a9e502a29fc9,
        mid_getDirectionality_65d0e7c7b6622f46,
        mid_getDirectionality_18c5b8ad844d9d5c,
        mid_getName_c81987d6b0e2977a,
        mid_getNumericValue_62edd80a8fb142bf,
        mid_getNumericValue_d938fc64e8c6df2d,
        mid_getType_62edd80a8fb142bf,
        mid_getType_d938fc64e8c6df2d,
        mid_hashCode_d6ab429752e7c267,
        mid_hashCode_62edd80a8fb142bf,
        mid_highSurrogate_80723b5d4f0fdfa2,
        mid_isAlphabetic_e24caac814db1df5,
        mid_isBmpCodePoint_e24caac814db1df5,
        mid_isDefined_6086956fa8cb2297,
        mid_isDefined_e24caac814db1df5,
        mid_isDigit_6086956fa8cb2297,
        mid_isDigit_e24caac814db1df5,
        mid_isHighSurrogate_6086956fa8cb2297,
        mid_isISOControl_6086956fa8cb2297,
        mid_isISOControl_e24caac814db1df5,
        mid_isIdentifierIgnorable_6086956fa8cb2297,
        mid_isIdentifierIgnorable_e24caac814db1df5,
        mid_isIdeographic_e24caac814db1df5,
        mid_isJavaIdentifierPart_6086956fa8cb2297,
        mid_isJavaIdentifierPart_e24caac814db1df5,
        mid_isJavaIdentifierStart_6086956fa8cb2297,
        mid_isJavaIdentifierStart_e24caac814db1df5,
        mid_isJavaLetter_6086956fa8cb2297,
        mid_isJavaLetterOrDigit_6086956fa8cb2297,
        mid_isLetter_6086956fa8cb2297,
        mid_isLetter_e24caac814db1df5,
        mid_isLetterOrDigit_6086956fa8cb2297,
        mid_isLetterOrDigit_e24caac814db1df5,
        mid_isLowSurrogate_6086956fa8cb2297,
        mid_isLowerCase_6086956fa8cb2297,
        mid_isLowerCase_e24caac814db1df5,
        mid_isMirrored_6086956fa8cb2297,
        mid_isMirrored_e24caac814db1df5,
        mid_isSpace_6086956fa8cb2297,
        mid_isSpaceChar_6086956fa8cb2297,
        mid_isSpaceChar_e24caac814db1df5,
        mid_isSupplementaryCodePoint_e24caac814db1df5,
        mid_isSurrogate_6086956fa8cb2297,
        mid_isSurrogatePair_3f0bc9a17399b9f1,
        mid_isTitleCase_6086956fa8cb2297,
        mid_isTitleCase_e24caac814db1df5,
        mid_isUnicodeIdentifierPart_6086956fa8cb2297,
        mid_isUnicodeIdentifierPart_e24caac814db1df5,
        mid_isUnicodeIdentifierStart_6086956fa8cb2297,
        mid_isUnicodeIdentifierStart_e24caac814db1df5,
        mid_isUpperCase_6086956fa8cb2297,
        mid_isUpperCase_e24caac814db1df5,
        mid_isValidCodePoint_e24caac814db1df5,
        mid_isWhitespace_6086956fa8cb2297,
        mid_isWhitespace_e24caac814db1df5,
        mid_lowSurrogate_80723b5d4f0fdfa2,
        mid_offsetByCodePoints_9df436cfc781a40e,
        mid_offsetByCodePoints_ed2b2ed2981f0162,
        mid_reverseBytes_fbf0bc309b9508c6,
        mid_toChars_c8887dd513ec1d3b,
        mid_toChars_04ee0426a82aa3d5,
        mid_toCodePoint_e8954842228aac27,
        mid_toLowerCase_fbf0bc309b9508c6,
        mid_toLowerCase_d938fc64e8c6df2d,
        mid_toString_d2c8eb4129821f0e,
        mid_toString_53bd6cb431dc0332,
        mid_toString_c81987d6b0e2977a,
        mid_toTitleCase_fbf0bc309b9508c6,
        mid_toTitleCase_d938fc64e8c6df2d,
        mid_toUpperCase_fbf0bc309b9508c6,
        mid_toUpperCase_d938fc64e8c6df2d,
        mid_valueOf_190c77a13da8b632,
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
