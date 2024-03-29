#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldLnsCoefficients_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldLnsCoefficients_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class CoefficientsFactory$NSKey;
          }
        }
      }
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Double;
    class Class;
  }
  namespace util {
    class SortedMap;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class FieldLnsCoefficients : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e37f9e003e991dea,
                mid_getLns_89a7d1b6c5e4fe60,
                mid_getdLnsdGamma_89a7d1b6c5e4fe60,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldLnsCoefficients(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldLnsCoefficients(const FieldLnsCoefficients& obj) : ::java::lang::Object(obj) {}

              FieldLnsCoefficients(jint, jint, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > &, const ::java::util::SortedMap &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::Field &);

              ::org::hipparchus::CalculusFieldElement getLns(jint, jint) const;
              ::org::hipparchus::CalculusFieldElement getdLnsdGamma(jint, jint) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldLnsCoefficients);
            extern PyTypeObject *PY_TYPE(FieldLnsCoefficients);

            class t_FieldLnsCoefficients {
            public:
              PyObject_HEAD
              FieldLnsCoefficients object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldLnsCoefficients *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldLnsCoefficients&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldLnsCoefficients&, PyTypeObject *);
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
