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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_2c01874c65d2ef2f,
          mid_addValue_be194746f459c63c,
          mid_clear_a1fa5dae97ea5ed2,
          mid_entrySetIterator_fc7780bc5d5b73b0,
          mid_equals_460c5e2d9d51c6cc,
          mid_getCount_847217f97b13f225,
          mid_getCumFreq_847217f97b13f225,
          mid_getCumPct_501a514086abd77c,
          mid_getMode_e62d3bb06d56d7e3,
          mid_getPct_501a514086abd77c,
          mid_getSumFreq_6c0ce7e438e5ded4,
          mid_getUniqueCount_55546ef6a647f39b,
          mid_hashCode_55546ef6a647f39b,
          mid_incrementValue_73e3fbb166ca1058,
          mid_merge_17f8a575980fa0db,
          mid_merge_7d8f123763cd893c,
          mid_toString_1c1fa1e935d6cdcf,
          mid_valuesIterator_fc7780bc5d5b73b0,
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
