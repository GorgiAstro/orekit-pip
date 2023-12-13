#ifndef org_orekit_ssa_metrics_FieldProbabilityOfCollision_H
#define org_orekit_ssa_metrics_FieldProbabilityOfCollision_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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
  namespace orekit {
    namespace ssa {
      namespace metrics {

        class FieldProbabilityOfCollision : public ::java::lang::Object {
         public:
          enum {
            mid_init$_69100ceaa9527c48,
            mid_init$_1771911ab5506ea2,
            mid_init$_09e54bced4f47fa9,
            mid_getLowerLimit_81520b552cb3fa26,
            mid_getProbabilityOfCollisionMethodName_1c1fa1e935d6cdcf,
            mid_getUpperLimit_81520b552cb3fa26,
            mid_getValue_81520b552cb3fa26,
            mid_isMaxProbability_9ab94ac1dc23b105,
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
