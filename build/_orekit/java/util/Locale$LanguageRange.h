#ifndef java_util_Locale$LanguageRange_H
#define java_util_Locale$LanguageRange_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Map;
    class Locale$LanguageRange;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$LanguageRange : public ::java::lang::Object {
     public:
      enum {
        mid_init$_105e1eadb709d9ac,
        mid_init$_4a1c1c41794e71b1,
        mid_equals_72faff9b05f5ed5e,
        mid_getRange_d2c8eb4129821f0e,
        mid_getWeight_9981f74b2d109da6,
        mid_hashCode_d6ab429752e7c267,
        mid_mapEquivalents_5eb575f36d85aaf3,
        mid_parse_7a823e7285fdf3d6,
        mid_parse_3cc66afed2b66fb1,
        mid_toString_d2c8eb4129821f0e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale$LanguageRange(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale$LanguageRange(const Locale$LanguageRange& obj) : ::java::lang::Object(obj) {}

      static jdouble MAX_WEIGHT;
      static jdouble MIN_WEIGHT;

      Locale$LanguageRange(const ::java::lang::String &);
      Locale$LanguageRange(const ::java::lang::String &, jdouble);

      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String getRange() const;
      jdouble getWeight() const;
      jint hashCode() const;
      static ::java::util::List mapEquivalents(const ::java::util::List &, const ::java::util::Map &);
      static ::java::util::List parse(const ::java::lang::String &);
      static ::java::util::List parse(const ::java::lang::String &, const ::java::util::Map &);
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale$LanguageRange);
    extern PyTypeObject *PY_TYPE(Locale$LanguageRange);

    class t_Locale$LanguageRange {
    public:
      PyObject_HEAD
      Locale$LanguageRange object;
      static PyObject *wrap_Object(const Locale$LanguageRange&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
