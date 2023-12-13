#ifndef org_orekit_attitudes_LofOffset_H
#define org_orekit_attitudes_LofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class FieldAttitude;
      class Attitude;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace frames {
      class LOF;
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class RotationOrder;
          class Rotation;
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
          mid_init$_d3d90ff48b30fac5,
          mid_init$_a89266640fadbeb9,
          mid_getAttitude_896ee4d68989b1e8,
          mid_getAttitude_21845cfb0034fe1c,
          mid_getAttitudeRotation_1bc07ea175743b30,
          mid_getAttitudeRotation_6acae55a2f5d3ab4,
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
