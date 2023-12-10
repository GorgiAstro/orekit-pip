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
          mid_init$_7ae3461a92a43152,
          mid_init$_4aed3eb33e58d2f7,
          mid_addValue_0a2a1ac2721c0336,
          mid_getCount_3f523e51b2989e1f,
          mid_getCumFreq_3f523e51b2989e1f,
          mid_getCumPct_b772323fc98b7293,
          mid_getPct_b772323fc98b7293,
          mid_incrementValue_a1c96e7d1aa915f2,
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
