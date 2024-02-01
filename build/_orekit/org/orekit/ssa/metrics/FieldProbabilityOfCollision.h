#ifndef org_orekit_ssa_metrics_FieldProbabilityOfCollision_H
#define org_orekit_ssa_metrics_FieldProbabilityOfCollision_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        class FieldProbabilityOfCollision : public ::java::lang::Object {
         public:
          enum {
            mid_init$_df99f6c7619851b8,
            mid_init$_40d2b87250b39e7c,
            mid_init$_690376ceb492d4fa,
            mid_getLowerLimit_08d37e3f77b7239d,
            mid_getProbabilityOfCollisionMethodName_d2c8eb4129821f0e,
            mid_getUpperLimit_08d37e3f77b7239d,
            mid_getValue_08d37e3f77b7239d,
            mid_isMaxProbability_eee3de00fe971136,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldProbabilityOfCollision(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldProbabilityOfCollision(const FieldProbabilityOfCollision& obj) : ::java::lang::Object(obj) {}

          FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement &, const ::java::lang::String &);
          FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement &, const ::java::lang::String &, jboolean);
          FieldProbabilityOfCollision(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::java::lang::String &, jboolean);

          ::org::hipparchus::CalculusFieldElement getLowerLimit() const;
          ::java::lang::String getProbabilityOfCollisionMethodName() const;
          ::org::hipparchus::CalculusFieldElement getUpperLimit() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldProbabilityOfCollision);
        extern PyTypeObject *PY_TYPE(FieldProbabilityOfCollision);

        class t_FieldProbabilityOfCollision {
        public:
          PyObject_HEAD
          FieldProbabilityOfCollision object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldProbabilityOfCollision *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldProbabilityOfCollision&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldProbabilityOfCollision&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
