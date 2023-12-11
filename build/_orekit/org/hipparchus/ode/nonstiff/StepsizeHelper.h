#ifndef org_hipparchus_ode_nonstiff_StepsizeHelper_H
#define org_hipparchus_ode_nonstiff_StepsizeHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
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
    namespace ode {
      namespace nonstiff {

        class StepsizeHelper : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c13e969c0f339014,
            mid_init$_bc3712e794ac7a81,
            mid_filterStep_5670ca349fa5f245,
            mid_filterStep_43e75d46ec6c38f2,
            mid_getDummyStepsize_557b8123390d8d0c,
            mid_getInitialStep_557b8123390d8d0c,
            mid_getMainSetDimension_412668abc8d889e9,
            mid_getMaxStep_557b8123390d8d0c,
            mid_getMinStep_557b8123390d8d0c,
            mid_getRelativeTolerance_69cfb132c661aca4,
            mid_getTolerance_77f9e227e4cf04b4,
            mid_getTolerance_d7f69d00c9b191e9,
            mid_setInitialStepSize_10f281d777284cea,
            mid_setMainSetDimension_a3da1a935cb37f7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StepsizeHelper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StepsizeHelper(const StepsizeHelper& obj) : ::java::lang::Object(obj) {}

          StepsizeHelper(jdouble, jdouble, const JArray< jdouble > &, const JArray< jdouble > &);
          StepsizeHelper(jdouble, jdouble, jdouble, jdouble);

          jdouble filterStep(jdouble, jboolean, jboolean) const;
          ::org::hipparchus::CalculusFieldElement filterStep(const ::org::hipparchus::CalculusFieldElement &, jboolean, jboolean) const;
          jdouble getDummyStepsize() const;
          jdouble getInitialStep() const;
          jint getMainSetDimension() const;
          jdouble getMaxStep() const;
          jdouble getMinStep() const;
          jdouble getRelativeTolerance(jint) const;
          jdouble getTolerance(jint, jdouble) const;
          ::org::hipparchus::CalculusFieldElement getTolerance(jint, const ::org::hipparchus::CalculusFieldElement &) const;
          void setInitialStepSize(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        extern PyType_Def PY_TYPE_DEF(StepsizeHelper);
        extern PyTypeObject *PY_TYPE(StepsizeHelper);

        class t_StepsizeHelper {
        public:
          PyObject_HEAD
          StepsizeHelper object;
          static PyObject *wrap_Object(const StepsizeHelper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
