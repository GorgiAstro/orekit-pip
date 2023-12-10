#ifndef org_orekit_frames_VersionedITRF_H
#define org_orekit_frames_VersionedITRF_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace frames {
      class ITRFVersion;
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

      class VersionedITRF : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_getITRFVersion_f157e1cf87d45e2d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit VersionedITRF(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        VersionedITRF(const VersionedITRF& obj) : ::org::orekit::frames::Frame(obj) {}

        ::org::orekit::frames::ITRFVersion getITRFVersion() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(VersionedITRF);
      extern PyTypeObject *PY_TYPE(VersionedITRF);

      class t_VersionedITRF {
      public:
        PyObject_HEAD
        VersionedITRF object;
        static PyObject *wrap_Object(const VersionedITRF&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
