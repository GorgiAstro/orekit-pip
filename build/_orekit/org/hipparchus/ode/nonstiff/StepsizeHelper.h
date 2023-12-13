#ifndef org_hipparchus_ode_nonstiff_StepsizeHelper_H
#define org_hipparchus_ode_nonstiff_StepsizeHelper_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
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
    namespace ode {
      namespace nonstiff {

        class StepsizeHelper : public ::java::lang::Object {
         public:
          enum {
            mid_init$_aa31b8b89ee72c31,
            mid_init$_49f4b5153d696ea5,
            mid_filterStep_93e5b8d135427e28,
            mid_filterStep_5af7161b76f2a836,
            mid_getDummyStepsize_b74f83833fdad017,
            mid_getInitialStep_b74f83833fdad017,
            mid_getMainSetDimension_55546ef6a647f39b,
            mid_getMaxStep_b74f83833fdad017,
            mid_getMinStep_b74f83833fdad017,
            mid_getRelativeTolerance_2afcbc21f4e57ab2,
            mid_getTolerance_98e10c261c066ee7,
            mid_getTolerance_23984a6e38b0b1f2,
            mid_setInitialStepSize_8ba9fe7a847cecad,
            mid_setMainSetDimension_44ed599e93e8a30c,
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
