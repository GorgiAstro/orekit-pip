#ifndef org_orekit_frames_L1Frame_H
#define org_orekit_frames_L1Frame_H

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

      class L1Frame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_9a72c2af019e2130,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit L1Frame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        L1Frame(const L1Frame& obj) : ::org::orekit::frames::Frame(obj) {}

        L1Frame(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(L1Frame);
      extern PyTypeObject *PY_TYPE(L1Frame);

      class t_L1Frame {
      public:
        PyObject_HEAD
        L1Frame object;
        static PyObject *wrap_Object(const L1Frame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
