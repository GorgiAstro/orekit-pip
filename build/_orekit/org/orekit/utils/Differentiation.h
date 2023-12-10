#ifndef org_orekit_utils_Differentiation_H
#define org_orekit_utils_Differentiation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class StateJacobian;
      class ParameterFunction;
      class StateFunction;
    }
    namespace attitudes {
      class AttitudeProvider;
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
  namespace orekit {
    namespace utils {

      class Differentiation : public ::java::lang::Object {
       public:
        enum {
          mid_differentiate_4f696813f34775d1,
          mid_differentiate_c7e1f0bc15802205,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Differentiation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Differentiation(const Differentiation& obj) : ::java::lang::Object(obj) {}

        static ::org::orekit::utils::ParameterFunction differentiate(const ::org::orekit::utils::ParameterFunction &, jint, jdouble);
        static ::org::orekit::utils::StateJacobian differentiate(const ::org::orekit::utils::StateFunction &, jint, const ::org::orekit::attitudes::AttitudeProvider &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &, jdouble, jint);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(Differentiation);
      extern PyTypeObject *PY_TYPE(Differentiation);

      class t_Differentiation {
      public:
        PyObject_HEAD
        Differentiation object;
        static PyObject *wrap_Object(const Differentiation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
