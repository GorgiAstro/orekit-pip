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
          mid_init$_7ae3461a92a43152,
          mid_init$_4aed3eb33e58d2f7,
          mid_addValue_cacac2f4e763c5ca,
          mid_clear_7ae3461a92a43152,
          mid_entrySetIterator_035c6167e6569aac,
          mid_equals_229c87223f486349,
          mid_getCount_990f22f08fe85ef8,
          mid_getCumFreq_990f22f08fe85ef8,
          mid_getCumPct_81203a22ca0a6d61,
          mid_getMode_a6156df500549a58,
          mid_getPct_81203a22ca0a6d61,
          mid_getSumFreq_a27fc9afd27e559d,
          mid_getUniqueCount_f2f64475e4580546,
          mid_hashCode_f2f64475e4580546,
          mid_incrementValue_e42888256fa3df2b,
          mid_merge_6de594515559bcfa,
          mid_merge_26b3669ec54017ce,
          mid_toString_0090f7797e403f43,
          mid_valuesIterator_035c6167e6569aac,
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
