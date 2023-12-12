#ifndef org_orekit_frames_CR3BPRotatingFrame_H
#define org_orekit_frames_CR3BPRotatingFrame_H

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

      class CR3BPRotatingFrame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_b111ad360d8b3b5a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CR3BPRotatingFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CR3BPRotatingFrame(const CR3BPRotatingFrame& obj) : ::org::orekit::frames::Frame(obj) {}

        CR3BPRotatingFrame(jdouble, const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(CR3BPRotatingFrame);
      extern PyTypeObject *PY_TYPE(CR3BPRotatingFrame);

      class t_CR3BPRotatingFrame {
      public:
        PyObject_HEAD
        CR3BPRotatingFrame object;
        static PyObject *wrap_Object(const CR3BPRotatingFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
