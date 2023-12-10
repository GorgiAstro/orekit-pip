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
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Long;
    class Class;
    class String;
    class Comparable;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_aba33752f2449599,
          mid_addValue_2a50c6c54eb99ac8,
          mid_clear_0fa09c18fee449d5,
          mid_entrySetIterator_4d23511a9f0db098,
          mid_equals_65c7d273e80d497a,
          mid_getCount_751686dd23eef2a3,
          mid_getCumFreq_751686dd23eef2a3,
          mid_getCumPct_2792f090756c9a20,
          mid_getMode_2afa36052df4765d,
          mid_getPct_2792f090756c9a20,
          mid_getSumFreq_492808a339bfa35f,
          mid_getUniqueCount_570ce0828f81a2c1,
          mid_hashCode_570ce0828f81a2c1,
          mid_incrementValue_3de43924340e67dd,
          mid_merge_98404261f6e3aa79,
          mid_merge_f72f53318f80c525,
          mid_toString_11b109bd155ca898,
          mid_valuesIterator_4d23511a9f0db098,
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
