#ifndef org_orekit_utils_ExtendedPVCoordinatesProvider_H
#define org_orekit_utils_ExtendedPVCoordinatesProvider_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
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

      class ExtendedPVCoordinatesProvider : public ::org::orekit::utils::PVCoordinatesProvider {
       public:
        enum {
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_getPosition_bfce50434b755ecb,
          mid_toFieldPVCoordinatesProvider_36db2fb93843b2c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExtendedPVCoordinatesProvider(jobject obj) : ::org::orekit::utils::PVCoordinatesProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExtendedPVCoordinatesProvider(const ExtendedPVCoordinatesProvider& obj) : ::org::orekit::utils::PVCoordinatesProvider(obj) {}

        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::FieldPVCoordinatesProvider toFieldPVCoordinatesProvider(const ::org::hipparchus::Field &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ExtendedPVCoordinatesProvider);
      extern PyTypeObject *PY_TYPE(ExtendedPVCoordinatesProvider);

      class t_ExtendedPVCoordinatesProvider {
      public:
        PyObject_HEAD
        ExtendedPVCoordinatesProvider object;
        static PyObject *wrap_Object(const ExtendedPVCoordinatesProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
