#ifndef org_orekit_utils_Fieldifier_H
#define org_orekit_utils_Fieldifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class FieldStateCovariance;
    }
    namespace orbits {
      class Orbit;
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    class Field;
    namespace linear {
      class RealMatrix;
      class FieldMatrix;
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

      class Fieldifier : public ::java::lang::Object {
       public:
        enum {
          mid_fieldify_864f8e04b56fc910,
          mid_fieldify_82a75cc2abf4301d,
          mid_fieldify_0632d9af46316121,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Fieldifier(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Fieldifier(const Fieldifier& obj) : ::java::lang::Object(obj) {}

        static ::org::orekit::orbits::FieldOrbit fieldify(const ::org::hipparchus::Field &, const ::org::orekit::orbits::Orbit &);
        static ::org::orekit::propagation::FieldStateCovariance fieldify(const ::org::hipparchus::Field &, const ::org::orekit::propagation::StateCovariance &);
        static ::org::hipparchus::linear::FieldMatrix fieldify(const ::org::hipparchus::Field &, const ::org::hipparchus::linear::RealMatrix &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(Fieldifier);
      extern PyTypeObject *PY_TYPE(Fieldifier);

      class t_Fieldifier {
      public:
        PyObject_HEAD
        Fieldifier object;
        static PyObject *wrap_Object(const Fieldifier&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
