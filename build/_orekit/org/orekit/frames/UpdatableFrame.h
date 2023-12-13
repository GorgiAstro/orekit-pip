#ifndef org_orekit_frames_UpdatableFrame_H
#define org_orekit_frames_UpdatableFrame_H

#include "org/orekit/frames/Frame.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Transform;
    }
    namespace time {
      class AbsoluteDate;
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

      class UpdatableFrame : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_c6446c6a66066a58,
          mid_init$_9ce69abbd2d1e9a2,
          mid_updateTransform_4bab67e94de5451c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit UpdatableFrame(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        UpdatableFrame(const UpdatableFrame& obj) : ::org::orekit::frames::Frame(obj) {}

        UpdatableFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &);
        UpdatableFrame(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Transform &, const ::java::lang::String &, jboolean);

        void updateTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Transform &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(UpdatableFrame);
      extern PyTypeObject *PY_TYPE(UpdatableFrame);

      class t_UpdatableFrame {
      public:
        PyObject_HEAD
        UpdatableFrame object;
        static PyObject *wrap_Object(const UpdatableFrame&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
