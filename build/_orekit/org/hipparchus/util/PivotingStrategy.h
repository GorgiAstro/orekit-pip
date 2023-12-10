#ifndef org_hipparchus_util_PivotingStrategy_H
#define org_hipparchus_util_PivotingStrategy_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class PivotingStrategy;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class PivotingStrategy : public ::java::lang::Enum {
       public:
        enum {
          mid_pivotIndex_925e9454c94270d3,
          mid_valueOf_f844976ca8ca2074,
          mid_values_fc3f15af90c31595,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PivotingStrategy(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PivotingStrategy(const PivotingStrategy& obj) : ::java::lang::Enum(obj) {}

        static PivotingStrategy *CENTRAL;
        static PivotingStrategy *MEDIAN_OF_3;

        jint pivotIndex(const JArray< jdouble > &, jint, jint) const;
        static PivotingStrategy valueOf(const ::java::lang::String &);
        static JArray< PivotingStrategy > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(PivotingStrategy);
      extern PyTypeObject *PY_TYPE(PivotingStrategy);

      class t_PivotingStrategy {
      public:
        PyObject_HEAD
        PivotingStrategy object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PivotingStrategy *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PivotingStrategy&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PivotingStrategy&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
