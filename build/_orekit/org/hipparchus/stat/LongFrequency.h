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
          mid_init$_0fa09c18fee449d5,
          mid_init$_aba33752f2449599,
          mid_addValue_99803b0791f320ff,
          mid_getCount_a1cf8c47dc9c5883,
          mid_getCumFreq_a1cf8c47dc9c5883,
          mid_getCumPct_46f85b53d9aedd96,
          mid_getPct_46f85b53d9aedd96,
          mid_incrementValue_5ea3eee09cb6a61f,
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
