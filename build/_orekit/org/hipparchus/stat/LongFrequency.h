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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_2c01874c65d2ef2f,
          mid_addValue_44ed599e93e8a30c,
          mid_getCount_f4947a88f79e0725,
          mid_getCumFreq_f4947a88f79e0725,
          mid_getCumPct_2afcbc21f4e57ab2,
          mid_getPct_2afcbc21f4e57ab2,
          mid_incrementValue_d66948af01f0fd9b,
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
