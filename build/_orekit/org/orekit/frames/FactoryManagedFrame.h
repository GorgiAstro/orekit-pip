#ifndef org_orekit_frames_FactoryManagedFrame_H
#define org_orekit_frames_FactoryManagedFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Predefined;
      class TransformProvider;
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

      class FactoryManagedFrame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_cbb19d23c9672083,
          mid_getFactoryKey_58be1d18d5cf78dc,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FactoryManagedFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FactoryManagedFrame(const FactoryManagedFrame& obj) : ::org::orekit::frames::Frame(obj) {}

        FactoryManagedFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::TransformProvider &, jboolean, const ::org::orekit::frames::Predefined &);

        ::org::orekit::frames::Predefined getFactoryKey() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FactoryManagedFrame);
      extern PyTypeObject *PY_TYPE(FactoryManagedFrame);

      class t_FactoryManagedFrame {
      public:
        PyObject_HEAD
        FactoryManagedFrame object;
        static PyObject *wrap_Object(const FactoryManagedFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
