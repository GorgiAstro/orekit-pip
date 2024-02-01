#ifndef org_hipparchus_stat_Frequency_H
#define org_hipparchus_stat_Frequency_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Map$Entry;
    class Comparator;
    class List;
    class Collection;
  }
  namespace lang {
    class Long;
    class Class;
    class String;
    class Comparable;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
    }
    namespace stat {
      class Frequency;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {

      class Frequency : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_bee08e6612998c92,
          mid_addValue_0167441dcd8c0b87,
          mid_clear_ff7cb6c242604316,
          mid_entrySetIterator_4f613ccd2f803b4b,
          mid_equals_72faff9b05f5ed5e,
          mid_getCount_a2cca1d1341d3e89,
          mid_getCumFreq_a2cca1d1341d3e89,
          mid_getCumPct_c6d2d8ad45936331,
          mid_getMode_d751c1a57012b438,
          mid_getPct_c6d2d8ad45936331,
          mid_getSumFreq_42c72b98e3c2e08a,
          mid_getUniqueCount_d6ab429752e7c267,
          mid_hashCode_d6ab429752e7c267,
          mid_incrementValue_3ae83e2fcc282f77,
          mid_merge_6dde6c7b755a7791,
          mid_merge_82af91bc8dfb5029,
          mid_toString_d2c8eb4129821f0e,
          mid_valuesIterator_4f613ccd2f803b4b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Frequency(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Frequency(const Frequency& obj) : ::java::lang::Object(obj) {}

        Frequency();
        Frequency(const ::java::util::Comparator &);

        void addValue(const ::java::lang::Comparable &) const;
        void clear() const;
        ::java::util::Iterator entrySetIterator() const;
        jboolean equals(const ::java::lang::Object &) const;
        jlong getCount(const ::java::lang::Comparable &) const;
        jlong getCumFreq(const ::java::lang::Comparable &) const;
        jdouble getCumPct(const ::java::lang::Comparable &) const;
        ::java::util::List getMode() const;
        jdouble getPct(const ::java::lang::Comparable &) const;
        jlong getSumFreq() const;
        jint getUniqueCount() const;
        jint hashCode() const;
        void incrementValue(const ::java::lang::Comparable &, jlong) const;
        void merge(const Frequency &) const;
        void merge(const ::java::util::Collection &) const;
        ::java::lang::String toString() const;
        ::java::util::Iterator valuesIterator() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      extern PyType_Def PY_TYPE_DEF(Frequency);
      extern PyTypeObject *PY_TYPE(Frequency);

      class t_Frequency {
      public:
        PyObject_HEAD
        Frequency object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Frequency *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Frequency&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Frequency&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
