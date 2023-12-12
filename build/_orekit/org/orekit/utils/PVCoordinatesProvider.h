#ifndef org_orekit_utils_PVCoordinatesProvider_H
#define org_orekit_utils_PVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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

      class PVCoordinatesProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPosition_7ca40559664606d9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PVCoordinatesProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PVCoordinatesProvider(const PVCoordinatesProvider& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getPosition(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PVCoordinatesProvider);
      extern PyTypeObject *PY_TYPE(PVCoordinatesProvider);

      class t_PVCoordinatesProvider {
      public:
        PyObject_HEAD
        PVCoordinatesProvider object;
        static PyObject *wrap_Object(const PVCoordinatesProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
