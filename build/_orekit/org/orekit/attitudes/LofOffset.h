#ifndef org_orekit_attitudes_LofOffset_H
#define org_orekit_attitudes_LofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace attitudes {
      class FieldAttitude;
      class AttitudeProvider;
      class Attitude;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class RotationOrder;
          class FieldRotation;
        }
      }
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
    namespace attitudes {

      class LofOffset : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a8a7b8ba1d2b6f0d,
          mid_init$_9142b1f90e628d63,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitudeRotation_85bb0a19efdadc1d,
          mid_getAttitudeRotation_5c74bfcf2d42825a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LofOffset(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LofOffset(const LofOffset& obj) : ::java::lang::Object(obj) {}

        LofOffset(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &);
        LofOffset(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, jdouble, jdouble, jdouble);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(LofOffset);
      extern PyTypeObject *PY_TYPE(LofOffset);

      class t_LofOffset {
      public:
        PyObject_HEAD
        LofOffset object;
        static PyObject *wrap_Object(const LofOffset&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
