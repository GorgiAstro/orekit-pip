#ifndef org_hipparchus_stat_LongFrequency_H
#define org_hipparchus_stat_LongFrequency_H

#include "org/hipparchus/stat/Frequency.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
    class Object;
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {

      class LongFrequency : public ::org::hipparchus::stat::Frequency {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_bee08e6612998c92,
          mid_addValue_8fd427ab23829bf5,
          mid_getCount_3453f750066710ab,
          mid_getCumFreq_3453f750066710ab,
          mid_getCumPct_ce4c02d583456bc9,
          mid_getPct_ce4c02d583456bc9,
          mid_incrementValue_2653808247cebc84,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LongFrequency(jobject obj) : ::org::hipparchus::stat::Frequency(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LongFrequency(const LongFrequency& obj) : ::org::hipparchus::stat::Frequency(obj) {}

        LongFrequency();
        LongFrequency(const ::java::util::Comparator &);

        void addValue(jint) const;
        jlong getCount(jint) const;
        jlong getCumFreq(jint) const;
        jdouble getCumPct(jint) const;
        jdouble getPct(jint) const;
        void incrementValue(jint, jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      extern PyType_Def PY_TYPE_DEF(LongFrequency);
      extern PyTypeObject *PY_TYPE(LongFrequency);

      class t_LongFrequency {
      public:
        PyObject_HEAD
        LongFrequency object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_LongFrequency *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const LongFrequency&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const LongFrequency&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
