#ifndef org_orekit_frames_L2Frame_H
#define org_orekit_frames_L2Frame_H

#include "org/orekit/frames/Frame.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class L2Frame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_43ec4ee4a0809dae,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit L2Frame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        L2Frame(const L2Frame& obj) : ::org::orekit::frames::Frame(obj) {}

        L2Frame(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(L2Frame);
      extern PyTypeObject *PY_TYPE(L2Frame);

      class t_L2Frame {
      public:
        PyObject_HEAD
        L2Frame object;
        static PyObject *wrap_Object(const L2Frame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
