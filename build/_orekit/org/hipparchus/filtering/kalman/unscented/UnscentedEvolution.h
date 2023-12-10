#ifndef org_hipparchus_filtering_kalman_unscented_UnscentedEvolution_H
#define org_hipparchus_filtering_kalman_unscented_UnscentedEvolution_H

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
        namespace unscented {

          class UnscentedEvolution : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e15112d7d9b7c603,
              mid_getCurrentStates_06199998e1d3adc1,
              mid_getCurrentTime_dff5885c2c873297,
              mid_getProcessNoiseMatrix_688b496048ff947b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnscentedEvolution(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnscentedEvolution(const UnscentedEvolution& obj) : ::java::lang::Object(obj) {}

            UnscentedEvolution(jdouble, const JArray< ::org::hipparchus::linear::RealVector > &, const ::org::hipparchus::linear::RealMatrix &);

            JArray< ::org::hipparchus::linear::RealVector > getCurrentStates() const;
            jdouble getCurrentTime() const;
            ::org::hipparchus::linear::RealMatrix getProcessNoiseMatrix() const;
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
        namespace unscented {
          extern PyType_Def PY_TYPE_DEF(UnscentedEvolution);
          extern PyTypeObject *PY_TYPE(UnscentedEvolution);

          class t_UnscentedEvolution {
          public:
            PyObject_HEAD
            UnscentedEvolution object;
            static PyObject *wrap_Object(const UnscentedEvolution&);
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
