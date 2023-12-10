#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldCjSjCoefficient_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldCjSjCoefficient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class FieldCjSjCoefficient : public ::java::lang::Object {
             public:
              enum {
                mid_init$_c8b8af07d18fac54,
                mid_getCj_93058f0552012043,
                mid_getDcjDh_93058f0552012043,
                mid_getDcjDk_93058f0552012043,
                mid_getDsjDh_93058f0552012043,
                mid_getDsjDk_93058f0552012043,
                mid_getSj_93058f0552012043,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldCjSjCoefficient(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldCjSjCoefficient(const FieldCjSjCoefficient& obj) : ::java::lang::Object(obj) {}

              FieldCjSjCoefficient(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::Field &);

              ::org::hipparchus::CalculusFieldElement getCj(jint) const;
              ::org::hipparchus::CalculusFieldElement getDcjDh(jint) const;
              ::org::hipparchus::CalculusFieldElement getDcjDk(jint) const;
              ::org::hipparchus::CalculusFieldElement getDsjDh(jint) const;
              ::org::hipparchus::CalculusFieldElement getDsjDk(jint) const;
              ::org::hipparchus::CalculusFieldElement getSj(jint) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(FieldCjSjCoefficient);
            extern PyTypeObject *PY_TYPE(FieldCjSjCoefficient);

            class t_FieldCjSjCoefficient {
            public:
              PyObject_HEAD
              FieldCjSjCoefficient object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldCjSjCoefficient *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldCjSjCoefficient&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldCjSjCoefficient&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
