#ifndef org_orekit_propagation_semianalytical_dsst_utilities_CoefficientsFactory_H
#define org_orekit_propagation_semianalytical_dsst_utilities_CoefficientsFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
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

            class CoefficientsFactory : public ::java::lang::Object {
             public:
              enum {
                mid_computeGsHs_91dc03a64efae3d5,
                mid_computeGsHs_2355f919653f668f,
                mid_computeQns_2d3e8b8ef3940f3c,
                mid_computeQns_89ca475961b7cdea,
                mid_computeVns_b99c49b5f9b9dff0,
                mid_getVmns_093995dc5657c18c,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CoefficientsFactory(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CoefficientsFactory(const CoefficientsFactory& obj) : ::java::lang::Object(obj) {}

              static JArray< JArray< jdouble > > computeGsHs(jdouble, jdouble, jdouble, jdouble, jint);
              static JArray< JArray< ::org::hipparchus::CalculusFieldElement > > computeGsHs(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, jint, const ::org::hipparchus::Field &);
              static JArray< JArray< jdouble > > computeQns(jdouble, jint, jint);
              static JArray< JArray< ::org::hipparchus::CalculusFieldElement > > computeQns(const ::org::hipparchus::CalculusFieldElement &, jint, jint);
              static ::java::util::SortedMap computeVns(jint);
              static jdouble getVmns(jint, jint, jint);
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
            extern PyType_Def PY_TYPE_DEF(CoefficientsFactory);
            extern PyTypeObject *PY_TYPE(CoefficientsFactory);

            class t_CoefficientsFactory {
            public:
              PyObject_HEAD
              CoefficientsFactory object;
              static PyObject *wrap_Object(const CoefficientsFactory&);
              static PyObject *wrap_jobject(const jobject&);
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
