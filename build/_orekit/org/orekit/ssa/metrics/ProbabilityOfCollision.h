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
            mid_init$_0f9c4af43dc22978,
            mid_init$_92c7581d14340df5,
            mid_init$_2bc6d6d620f99f0a,
            mid_getLowerLimit_dff5885c2c873297,
            mid_getProbabilityOfCollisionMethodName_11b109bd155ca898,
            mid_getUpperLimit_dff5885c2c873297,
            mid_getValue_dff5885c2c873297,
            mid_isMaxProbability_b108b35ef48e27bd,
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
