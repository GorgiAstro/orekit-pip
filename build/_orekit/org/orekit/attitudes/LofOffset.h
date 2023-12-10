#ifndef org_orekit_attitudes_LofOffset_H
#define org_orekit_attitudes_LofOffset_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace attitudes {
      class AttitudeProvider;
      class Attitude;
      class FieldAttitude;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
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
          mid_init$_907a2084a7036347,
          mid_init$_3f1d517820e7775e,
          mid_getAttitude_455b5c75f9292826,
          mid_getAttitude_5341a8481841f90c,
          mid_getAttitudeRotation_969253bc78d7a272,
          mid_getAttitudeRotation_01363f58d35f60d4,
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
