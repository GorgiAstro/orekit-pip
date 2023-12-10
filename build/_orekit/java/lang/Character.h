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
        mid_init$_be0046d7f7239695,
        mid_charCount_38565d58479aa24a,
        mid_charValue_29e026b9d068f1c7,
        mid_codePointAt_3d8664f3fe7532d9,
        mid_codePointAt_0bdb7007ef94b15e,
        mid_codePointAt_a7dcb595f3e6fbfc,
        mid_codePointBefore_3d8664f3fe7532d9,
        mid_codePointBefore_0bdb7007ef94b15e,
        mid_codePointBefore_a7dcb595f3e6fbfc,
        mid_codePointCount_a7dcb595f3e6fbfc,
        mid_codePointCount_0b8a9d9908fcde8d,
        mid_codePointOf_5d6fce34d596f8f0,
        mid_compare_edc01deaecaf3b63,
        mid_compareTo_feaeef792645bb35,
        mid_digit_c3e6094108d475ef,
        mid_digit_d9790ac9eecfe931,
        mid_equals_229c87223f486349,
        mid_forDigit_5fbdcc3da1bdb333,
        mid_getDirectionality_4e6484d999e31d98,
        mid_getDirectionality_1f47c6a92c9478c9,
        mid_getName_90cbcc0b7a5ddae9,
        mid_getNumericValue_2681da20b1beaea7,
        mid_getNumericValue_38565d58479aa24a,
        mid_getType_2681da20b1beaea7,
        mid_getType_38565d58479aa24a,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_2681da20b1beaea7,
        mid_highSurrogate_52047e692b58eb87,
        mid_isAlphabetic_e95e4c7cd3dd17ff,
        mid_isBmpCodePoint_e95e4c7cd3dd17ff,
        mid_isDefined_490c9f5ddce460a1,
        mid_isDefined_e95e4c7cd3dd17ff,
        mid_isDigit_490c9f5ddce460a1,
        mid_isDigit_e95e4c7cd3dd17ff,
        mid_isHighSurrogate_490c9f5ddce460a1,
        mid_isISOControl_490c9f5ddce460a1,
        mid_isISOControl_e95e4c7cd3dd17ff,
        mid_isIdentifierIgnorable_490c9f5ddce460a1,
        mid_isIdentifierIgnorable_e95e4c7cd3dd17ff,
        mid_isIdeographic_e95e4c7cd3dd17ff,
        mid_isJavaIdentifierPart_490c9f5ddce460a1,
        mid_isJavaIdentifierPart_e95e4c7cd3dd17ff,
        mid_isJavaIdentifierStart_490c9f5ddce460a1,
        mid_isJavaIdentifierStart_e95e4c7cd3dd17ff,
        mid_isJavaLetter_490c9f5ddce460a1,
        mid_isJavaLetterOrDigit_490c9f5ddce460a1,
        mid_isLetter_490c9f5ddce460a1,
        mid_isLetter_e95e4c7cd3dd17ff,
        mid_isLetterOrDigit_490c9f5ddce460a1,
        mid_isLetterOrDigit_e95e4c7cd3dd17ff,
        mid_isLowSurrogate_490c9f5ddce460a1,
        mid_isLowerCase_490c9f5ddce460a1,
        mid_isLowerCase_e95e4c7cd3dd17ff,
        mid_isMirrored_490c9f5ddce460a1,
        mid_isMirrored_e95e4c7cd3dd17ff,
        mid_isSpace_490c9f5ddce460a1,
        mid_isSpaceChar_490c9f5ddce460a1,
        mid_isSpaceChar_e95e4c7cd3dd17ff,
        mid_isSupplementaryCodePoint_e95e4c7cd3dd17ff,
        mid_isSurrogate_490c9f5ddce460a1,
        mid_isSurrogatePair_02a07f55b7dbf98b,
        mid_isTitleCase_490c9f5ddce460a1,
        mid_isTitleCase_e95e4c7cd3dd17ff,
        mid_isUnicodeIdentifierPart_490c9f5ddce460a1,
        mid_isUnicodeIdentifierPart_e95e4c7cd3dd17ff,
        mid_isUnicodeIdentifierStart_490c9f5ddce460a1,
        mid_isUnicodeIdentifierStart_e95e4c7cd3dd17ff,
        mid_isUpperCase_490c9f5ddce460a1,
        mid_isUpperCase_e95e4c7cd3dd17ff,
        mid_isValidCodePoint_e95e4c7cd3dd17ff,
        mid_isWhitespace_490c9f5ddce460a1,
        mid_isWhitespace_e95e4c7cd3dd17ff,
        mid_lowSurrogate_52047e692b58eb87,
        mid_offsetByCodePoints_0b8a9d9908fcde8d,
        mid_offsetByCodePoints_3eb6658f3c13cf78,
        mid_reverseBytes_14a065e19b24d2b2,
        mid_toChars_4f8b778f6b7240e5,
        mid_toChars_ab656bff88aa3eb0,
        mid_toCodePoint_edc01deaecaf3b63,
        mid_toLowerCase_14a065e19b24d2b2,
        mid_toLowerCase_38565d58479aa24a,
        mid_toString_0090f7797e403f43,
        mid_toString_1e1a62b6126a9504,
        mid_toString_90cbcc0b7a5ddae9,
        mid_toTitleCase_14a065e19b24d2b2,
        mid_toTitleCase_38565d58479aa24a,
        mid_toUpperCase_14a065e19b24d2b2,
        mid_toUpperCase_38565d58479aa24a,
        mid_valueOf_f904144d696baa24,
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
