#ifndef org_orekit_ssa_metrics_ProbabilityOfCollision_H
#define org_orekit_ssa_metrics_ProbabilityOfCollision_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        class ProbabilityOfCollision : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d159d90d402c6e37,
            mid_init$_bd48975dfeda9130,
            mid_init$_487aedea707aa10b,
            mid_getLowerLimit_557b8123390d8d0c,
            mid_getProbabilityOfCollisionMethodName_3cffd47377eca18a,
            mid_getUpperLimit_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            mid_isMaxProbability_89b302893bdbe1f1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ProbabilityOfCollision(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ProbabilityOfCollision(const ProbabilityOfCollision& obj) : ::java::lang::Object(obj) {}

          ProbabilityOfCollision(jdouble, const ::java::lang::String &);
          ProbabilityOfCollision(jdouble, const ::java::lang::String &, jboolean);
          ProbabilityOfCollision(jdouble, jdouble, jdouble, const ::java::lang::String &, jboolean);

          jdouble getLowerLimit() const;
          ::java::lang::String getProbabilityOfCollisionMethodName() const;
          jdouble getUpperLimit() const;
          jdouble getValue() const;
          jboolean isMaxProbability() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {
        extern PyType_Def PY_TYPE_DEF(ProbabilityOfCollision);
        extern PyTypeObject *PY_TYPE(ProbabilityOfCollision);

        class t_ProbabilityOfCollision {
        public:
          PyObject_HEAD
          ProbabilityOfCollision object;
          static PyObject *wrap_Object(const ProbabilityOfCollision&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
