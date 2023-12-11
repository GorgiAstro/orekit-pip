#ifndef org_orekit_utils_FrameAdapter_H
#define org_orekit_utils_FrameAdapter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class ExtendedPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
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

      class FrameAdapter : public ::java::lang::Object {
       public:
        enum {
          mid_init$_535d1f91a93c8b4d,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPVCoordinates_4ac52e75113a03db,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FrameAdapter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FrameAdapter(const FrameAdapter& obj) : ::java::lang::Object(obj) {}

        FrameAdapter(const ::org::orekit::frames::Frame &);

        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FrameAdapter);
      extern PyTypeObject *PY_TYPE(FrameAdapter);

      class t_FrameAdapter {
      public:
        PyObject_HEAD
        FrameAdapter object;
        static PyObject *wrap_Object(const FrameAdapter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
