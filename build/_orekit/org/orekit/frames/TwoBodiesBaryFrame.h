#ifndef org_orekit_frames_TwoBodiesBaryFrame_H
#define org_orekit_frames_TwoBodiesBaryFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
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
    namespace frames {

      class TwoBodiesBaryFrame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_8e55d90b2c31e510,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TwoBodiesBaryFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TwoBodiesBaryFrame(const TwoBodiesBaryFrame& obj) : ::org::orekit::frames::Frame(obj) {}

        TwoBodiesBaryFrame(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(TwoBodiesBaryFrame);
      extern PyTypeObject *PY_TYPE(TwoBodiesBaryFrame);

      class t_TwoBodiesBaryFrame {
      public:
        PyObject_HEAD
        TwoBodiesBaryFrame object;
        static PyObject *wrap_Object(const TwoBodiesBaryFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
