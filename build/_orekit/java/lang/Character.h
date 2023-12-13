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
        mid_init$_df95ad02f5b4acd9,
        mid_charCount_0e7cf35192c3effe,
        mid_charValue_5e2f8fc4d7c03fbd,
        mid_codePointAt_f8cc94d586f10f66,
        mid_codePointAt_7ff102c04b0b108b,
        mid_codePointAt_a45a4db28976f262,
        mid_codePointBefore_f8cc94d586f10f66,
        mid_codePointBefore_7ff102c04b0b108b,
        mid_codePointBefore_a45a4db28976f262,
        mid_codePointCount_a45a4db28976f262,
        mid_codePointCount_9c47b38c82d8ce62,
        mid_codePointOf_f0ba70671b70c6e5,
        mid_compare_a5d81640ebe07772,
        mid_compareTo_1d2c04bb59db5049,
        mid_digit_c59181e65b66f96a,
        mid_digit_92ecd94558bf0c68,
        mid_equals_460c5e2d9d51c6cc,
        mid_forDigit_021469f10b1fd237,
        mid_getDirectionality_84b41b5f574c1407,
        mid_getDirectionality_d0c6ae56518c754e,
        mid_getName_2a9bffd3d5397f7c,
        mid_getNumericValue_722d90999b808801,
        mid_getNumericValue_0e7cf35192c3effe,
        mid_getType_722d90999b808801,
        mid_getType_0e7cf35192c3effe,
        mid_hashCode_55546ef6a647f39b,
        mid_hashCode_722d90999b808801,
        mid_highSurrogate_f41af25e73e22f74,
        mid_isAlphabetic_96f51a3f36d3a2a7,
        mid_isBmpCodePoint_96f51a3f36d3a2a7,
        mid_isDefined_d5858ea00bc2131b,
        mid_isDefined_96f51a3f36d3a2a7,
        mid_isDigit_d5858ea00bc2131b,
        mid_isDigit_96f51a3f36d3a2a7,
        mid_isHighSurrogate_d5858ea00bc2131b,
        mid_isISOControl_d5858ea00bc2131b,
        mid_isISOControl_96f51a3f36d3a2a7,
        mid_isIdentifierIgnorable_d5858ea00bc2131b,
        mid_isIdentifierIgnorable_96f51a3f36d3a2a7,
        mid_isIdeographic_96f51a3f36d3a2a7,
        mid_isJavaIdentifierPart_d5858ea00bc2131b,
        mid_isJavaIdentifierPart_96f51a3f36d3a2a7,
        mid_isJavaIdentifierStart_d5858ea00bc2131b,
        mid_isJavaIdentifierStart_96f51a3f36d3a2a7,
        mid_isJavaLetter_d5858ea00bc2131b,
        mid_isJavaLetterOrDigit_d5858ea00bc2131b,
        mid_isLetter_d5858ea00bc2131b,
        mid_isLetter_96f51a3f36d3a2a7,
        mid_isLetterOrDigit_d5858ea00bc2131b,
        mid_isLetterOrDigit_96f51a3f36d3a2a7,
        mid_isLowSurrogate_d5858ea00bc2131b,
        mid_isLowerCase_d5858ea00bc2131b,
        mid_isLowerCase_96f51a3f36d3a2a7,
        mid_isMirrored_d5858ea00bc2131b,
        mid_isMirrored_96f51a3f36d3a2a7,
        mid_isSpace_d5858ea00bc2131b,
        mid_isSpaceChar_d5858ea00bc2131b,
        mid_isSpaceChar_96f51a3f36d3a2a7,
        mid_isSupplementaryCodePoint_96f51a3f36d3a2a7,
        mid_isSurrogate_d5858ea00bc2131b,
        mid_isSurrogatePair_156ece55eb808655,
        mid_isTitleCase_d5858ea00bc2131b,
        mid_isTitleCase_96f51a3f36d3a2a7,
        mid_isUnicodeIdentifierPart_d5858ea00bc2131b,
        mid_isUnicodeIdentifierPart_96f51a3f36d3a2a7,
        mid_isUnicodeIdentifierStart_d5858ea00bc2131b,
        mid_isUnicodeIdentifierStart_96f51a3f36d3a2a7,
        mid_isUpperCase_d5858ea00bc2131b,
        mid_isUpperCase_96f51a3f36d3a2a7,
        mid_isValidCodePoint_96f51a3f36d3a2a7,
        mid_isWhitespace_d5858ea00bc2131b,
        mid_isWhitespace_96f51a3f36d3a2a7,
        mid_lowSurrogate_f41af25e73e22f74,
        mid_offsetByCodePoints_9c47b38c82d8ce62,
        mid_offsetByCodePoints_fe701040a9f1237c,
        mid_reverseBytes_ba667754cdd82ede,
        mid_toChars_cc9b620c79c199b9,
        mid_toChars_320a535454c577aa,
        mid_toCodePoint_a5d81640ebe07772,
        mid_toLowerCase_ba667754cdd82ede,
        mid_toLowerCase_0e7cf35192c3effe,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toString_935421dbce990c9c,
        mid_toString_2a9bffd3d5397f7c,
        mid_toTitleCase_ba667754cdd82ede,
        mid_toTitleCase_0e7cf35192c3effe,
        mid_toUpperCase_ba667754cdd82ede,
        mid_toUpperCase_0e7cf35192c3effe,
        mid_valueOf_98373d881fa0e0bc,
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
