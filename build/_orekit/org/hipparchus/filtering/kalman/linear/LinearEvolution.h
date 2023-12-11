#ifndef org_hipparchus_filtering_kalman_linear_LinearEvolution_H
#define org_hipparchus_filtering_kalman_linear_LinearEvolution_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
      class RealVector;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          class LinearEvolution : public ::java::lang::Object {
           public:
            enum {
              mid_init$_98bbcc753692b462,
              mid_getCommand_75d50d73180655b4,
              mid_getControlMatrix_70a207fcbc031df2,
              mid_getMeasurementJacobian_70a207fcbc031df2,
              mid_getProcessNoiseMatrix_70a207fcbc031df2,
              mid_getStateTransitionMatrix_70a207fcbc031df2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LinearEvolution(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LinearEvolution(const LinearEvolution& obj) : ::java::lang::Object(obj) {}

            LinearEvolution(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealVector &, const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &);

            ::org::hipparchus::linear::RealVector getCommand() const;
            ::org::hipparchus::linear::RealMatrix getControlMatrix() const;
            ::org::hipparchus::linear::RealMatrix getMeasurementJacobian() const;
            ::org::hipparchus::linear::RealMatrix getProcessNoiseMatrix() const;
            ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {
          extern PyType_Def PY_TYPE_DEF(LinearEvolution);
          extern PyTypeObject *PY_TYPE(LinearEvolution);

          class t_LinearEvolution {
          public:
            PyObject_HEAD
            LinearEvolution object;
            static PyObject *wrap_Object(const LinearEvolution&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
