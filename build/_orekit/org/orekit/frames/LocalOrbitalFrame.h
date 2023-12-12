#ifndef org_orekit_frames_LocalOrbitalFrame_H
#define org_orekit_frames_LocalOrbitalFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
    }
    namespace utils {
      class PVCoordinatesProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class IllegalArgumentException;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class LocalOrbitalFrame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_41979ecbb6cde58e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalOrbitalFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalOrbitalFrame(const LocalOrbitalFrame& obj) : ::org::orekit::frames::Frame(obj) {}

        LocalOrbitalFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::java::lang::String &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(LocalOrbitalFrame);
      extern PyTypeObject *PY_TYPE(LocalOrbitalFrame);

      class t_LocalOrbitalFrame {
      public:
        PyObject_HEAD
        LocalOrbitalFrame object;
        static PyObject *wrap_Object(const LocalOrbitalFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
