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
            mid_init$_e3195482263a60ce,
            mid_init$_cd5724127cc72e96,
            mid_filterStep_ada0cfabe3e16796,
            mid_filterStep_a931394f246a1ad5,
            mid_getDummyStepsize_9981f74b2d109da6,
            mid_getInitialStep_9981f74b2d109da6,
            mid_getMainSetDimension_d6ab429752e7c267,
            mid_getMaxStep_9981f74b2d109da6,
            mid_getMinStep_9981f74b2d109da6,
            mid_getRelativeTolerance_ce4c02d583456bc9,
            mid_getTolerance_5540210c7d309f18,
            mid_getTolerance_b23de0cfc61f8f60,
            mid_setInitialStepSize_1ad26e8c8c0cd65b,
            mid_setMainSetDimension_8fd427ab23829bf5,
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
