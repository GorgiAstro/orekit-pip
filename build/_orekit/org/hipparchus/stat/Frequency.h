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
          mid_init$_0640e6acf969ed28,
          mid_init$_349032d04af23bed,
          mid_addValue_1e222383a0988b8a,
          mid_clear_0640e6acf969ed28,
          mid_entrySetIterator_834a3801c426326d,
          mid_equals_221e8e85cb385209,
          mid_getCount_afa7ed76ccf53f0c,
          mid_getCumFreq_afa7ed76ccf53f0c,
          mid_getCumPct_045db5c4787a66b9,
          mid_getMode_0d9551367f7ecdef,
          mid_getPct_045db5c4787a66b9,
          mid_getSumFreq_9e26256fb0d384a2,
          mid_getUniqueCount_412668abc8d889e9,
          mid_hashCode_412668abc8d889e9,
          mid_incrementValue_f8a5a43213a74b25,
          mid_merge_760509cbfffb9cf4,
          mid_merge_3abde0be9b9c9773,
          mid_toString_3cffd47377eca18a,
          mid_valuesIterator_834a3801c426326d,
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
