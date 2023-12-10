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
        mid_init$_636c0bbb96cab723,
        mid_charCount_2235cd056f5a882b,
        mid_charValue_7818f5b58320cd1f,
        mid_codePointAt_59f9c2d0435954b6,
        mid_codePointAt_72df1bce0f4d6206,
        mid_codePointAt_e1525dbb996fb0b1,
        mid_codePointBefore_59f9c2d0435954b6,
        mid_codePointBefore_72df1bce0f4d6206,
        mid_codePointBefore_e1525dbb996fb0b1,
        mid_codePointCount_e1525dbb996fb0b1,
        mid_codePointCount_c028f0c47f9d8f31,
        mid_codePointOf_02f02486e9727d8f,
        mid_compare_dd48bf2aa6dfbaa3,
        mid_compareTo_d3818e483000ff27,
        mid_digit_508f62e89e997929,
        mid_digit_819f91eddf220c5b,
        mid_equals_65c7d273e80d497a,
        mid_forDigit_fc758e31b1fe694a,
        mid_getDirectionality_731379c577217b6e,
        mid_getDirectionality_aadb1e26b1fc3f0a,
        mid_getName_8cc8a10236476f23,
        mid_getNumericValue_d31f2b475a1ea885,
        mid_getNumericValue_2235cd056f5a882b,
        mid_getType_d31f2b475a1ea885,
        mid_getType_2235cd056f5a882b,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_d31f2b475a1ea885,
        mid_highSurrogate_9d4c2604195fbadb,
        mid_isAlphabetic_b6e9be1df30aebaf,
        mid_isBmpCodePoint_b6e9be1df30aebaf,
        mid_isDefined_75aee5383fa9200e,
        mid_isDefined_b6e9be1df30aebaf,
        mid_isDigit_75aee5383fa9200e,
        mid_isDigit_b6e9be1df30aebaf,
        mid_isHighSurrogate_75aee5383fa9200e,
        mid_isISOControl_75aee5383fa9200e,
        mid_isISOControl_b6e9be1df30aebaf,
        mid_isIdentifierIgnorable_75aee5383fa9200e,
        mid_isIdentifierIgnorable_b6e9be1df30aebaf,
        mid_isIdeographic_b6e9be1df30aebaf,
        mid_isJavaIdentifierPart_75aee5383fa9200e,
        mid_isJavaIdentifierPart_b6e9be1df30aebaf,
        mid_isJavaIdentifierStart_75aee5383fa9200e,
        mid_isJavaIdentifierStart_b6e9be1df30aebaf,
        mid_isJavaLetter_75aee5383fa9200e,
        mid_isJavaLetterOrDigit_75aee5383fa9200e,
        mid_isLetter_75aee5383fa9200e,
        mid_isLetter_b6e9be1df30aebaf,
        mid_isLetterOrDigit_75aee5383fa9200e,
        mid_isLetterOrDigit_b6e9be1df30aebaf,
        mid_isLowSurrogate_75aee5383fa9200e,
        mid_isLowerCase_75aee5383fa9200e,
        mid_isLowerCase_b6e9be1df30aebaf,
        mid_isMirrored_75aee5383fa9200e,
        mid_isMirrored_b6e9be1df30aebaf,
        mid_isSpace_75aee5383fa9200e,
        mid_isSpaceChar_75aee5383fa9200e,
        mid_isSpaceChar_b6e9be1df30aebaf,
        mid_isSupplementaryCodePoint_b6e9be1df30aebaf,
        mid_isSurrogate_75aee5383fa9200e,
        mid_isSurrogatePair_8fd095b4916b50a5,
        mid_isTitleCase_75aee5383fa9200e,
        mid_isTitleCase_b6e9be1df30aebaf,
        mid_isUnicodeIdentifierPart_75aee5383fa9200e,
        mid_isUnicodeIdentifierPart_b6e9be1df30aebaf,
        mid_isUnicodeIdentifierStart_75aee5383fa9200e,
        mid_isUnicodeIdentifierStart_b6e9be1df30aebaf,
        mid_isUpperCase_75aee5383fa9200e,
        mid_isUpperCase_b6e9be1df30aebaf,
        mid_isValidCodePoint_b6e9be1df30aebaf,
        mid_isWhitespace_75aee5383fa9200e,
        mid_isWhitespace_b6e9be1df30aebaf,
        mid_lowSurrogate_9d4c2604195fbadb,
        mid_offsetByCodePoints_c028f0c47f9d8f31,
        mid_offsetByCodePoints_9f320347b8952a1f,
        mid_reverseBytes_d815256387095baa,
        mid_toChars_4f5eb2f2ac6b9f67,
        mid_toChars_c9f91c61afb7a615,
        mid_toCodePoint_dd48bf2aa6dfbaa3,
        mid_toLowerCase_d815256387095baa,
        mid_toLowerCase_2235cd056f5a882b,
        mid_toString_11b109bd155ca898,
        mid_toString_3371cef512ec7a0c,
        mid_toString_8cc8a10236476f23,
        mid_toTitleCase_d815256387095baa,
        mid_toTitleCase_2235cd056f5a882b,
        mid_toUpperCase_d815256387095baa,
        mid_toUpperCase_2235cd056f5a882b,
        mid_valueOf_7fb548ed576b085d,
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
